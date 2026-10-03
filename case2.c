#include<stdio.h>
void namaste();
void bonjour();

int main(){
    printf("enter nationality i for india and f for france\n");
    char ch;
    scanf("%C",&ch);
    
    if(ch=='i'){
        namaste();
    }
    else if(ch=='f'){
        bonjour();
    }
    return 0;
}

void namaste(){
    printf("Namaste\n");
}

void bonjour(){
    printf("Bonjour\n");
}