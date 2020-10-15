#ifndef EXIO_H
#define EXIO_H

#include <stdio.h>

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
void println(char sr[]) {
  printf("%s\n", sr);
}
void spam(char spamp[]) {
  while(1) {
    printf("%s\n", spamp);
  }
}
void dspam(char dpi[]) {
  while(1) {
    printf("%s", dpi);
  }
}

#endif