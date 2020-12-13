#ifndef EXIO_H
#define EXIO_H

#include <stdio.h>
#include <stdlib.h>

char *inputString(FILE* fp, size_t size){
//The size is extended by the input with the value of the provisional
    char *str;
    int ch;
    size_t len = 0;
    str = realloc(NULL, sizeof(char)*size);//size is start size
    if(!str)return str;
    while(EOF!=(ch=fgetc(fp)) && ch != '\n'){
        str[len++]=ch;
        if(len==size){
            str = realloc(str, sizeof(char)*(size+=16));
            if(!str)return str;
        }
    }
    str[len++]='\0';

    return realloc(str, sizeof(char)*len);
}

char* read_from_file(){
	char* buffer=0;
	long length;
	FILE* f=fopen(filename, "rb");
	if(f){
		fseek(f, 0, SEEK_END);
		length=ftell(f);
		fseek(f, 0, SEEK_SET);
		buffer=calloc(length, length);

		if(buffer)
			fread(buffer, 1, length, f);

		fclose(f);
	}

	return buffer;
}



#endif
