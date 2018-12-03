#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main(){
    puts("Please enter the name of the empty file to create including extension");
    char filename[256];
    scanf("%s",filename);
    fopen(filename,"w");
}