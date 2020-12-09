#ifndef LinkedListLib
#define LinkedListLib

#include <stdlib.h>
#include <strings.h>
#include <unistd.h>

#define UNIX_IN 0
#define UNIX_OUT 1
#define UNIX_ERR 2

#ifdef __cplusplus
extern "C" {
#endif

int yin_write(int fd, char* _str){
	return write(fd,_str,sizeof(_str));
}

size_t strlen(const char* str){
	size_t len=0;
	while(*str++)
		len++;
	return (len);
}

char* bin2hex(const unsigned char* input, size_t len){
	char* result;
	char* hexits="0123456789ABCDEF";
	if(input==NULL||len<=0) return NULL;

	int res_len=(len*3)+1;
	result=(char*)malloc(res_len);
	bzero(result, res_len);
	for(int i=0;i<len;i++){
		result[i*3]	=hexits[input[i]>>4];
		result[(i*3)+1]	=hexits[input[i]&0x0F];
		result[(i*3)+2]	= ' ';
	}
	return result;
}

struct LinkedList{
	void *value;
	struct LinkedList* next;
};

typedef struct LinkedList ll_T;

ll_T* ll_create(void* __val,ll_T* __xn){
	ll_T* __yin=(ll_T*)calloc(1, sizeof(struct LinkedList));
	__yin->value=__val;
	__yin->next=__xn;

	return __yin;
}

void ll_free(ll_T* ll_i){
	free(ll_i->value);
	free(ll_i);
	return;
}

void ll_print(int fd, ll_T* head){
	ll_T nodetemp=*head;

	do{
		yin_write(fd, bin2hex((char*)(nodetemp.value), strlen((char*)nodetemp.value)));
		write(1, " - ", 3);	
		nodetemp=(*nodetemp.next);
	}while(nodetemp.next!=NULL);/*{
		yin_write(fd, bin2hex((char*)(nodetemp.value), strlen((char*)nodetemp.value)));
		write(1, " - ", 3);
	}*/
	write(fd,"\n",1);
}

void ll_str_pr(FILE* __stream, ll_T* head){
	ll_T nodetemp=*head;

	while(nodetemp.next!=NULL){
		fputs((char*)nodetemp.value, __stream);
		nodetemp=(*nodetemp.next);
	}
	fputs((char*)nodetemp.value, __stream);
	fputs("\n", __stream);
}

#ifdef __cplusplus
}
#endif
#endif
