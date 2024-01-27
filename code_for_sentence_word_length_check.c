#include<stdio.h>
#include<string.h>
int main(void) {
    //Longest Word in a sentence
    char str[]="Computer Engineering is easy";
    int i,count=0,max=0;
    for(i=0;str[i]!='\0';i++);
    str[i]=' ';
    str[i+1]='\0';
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            printf("%d\t",count);
            if(max<count){
                max=count;
            }
            count=0;
        }else {
            count++;
        }
    }
    printf("\nMax=%d",max);
    return 0;
}
