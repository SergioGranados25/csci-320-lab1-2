/*
 * Implement your solution in thi file
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "lab1.h"
#include <string.h>

char* readString(char* fileName)
{
    char * myStr;
    myStr = (char *) malloc(100);
    FILE *fptr;
    fptr = fopen(fileName, "r");
    if(fptr == NULL){
        return "Unable to open file\n";
    }
    fgets(myStr, sizeof(myStr),fptr);
    fclose(fptr);
    myStr[strcspn(myStr, "\n")] = '\0';
    return myStr;
}

char* mysteryExplode(const char* str){
    int i;
    int length = ((strlen(str)*(strlen(str) +1))/2)+1;
    char* ans = (char*)malloc(length);
    memset(ans,'\0', length);
    for(i =0; i<= strlen(str); i++)
        strncat(ans,str,i);
    return ans;
}