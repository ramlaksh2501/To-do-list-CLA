//to create the files to get the app running 
#include<stdlib.h>
#include<stdio.h>
void display();
void add_task();
void rm_task();
void close();
int main(){

    FILE *copy,*original;
    if(fopen("./copy.txt","r")!=NULL || fopen("./original.txt","r")!=NULL){
    copy=fopen("./copy.txt","w");
    original=fopen("./original.txt","w");
    fclose(copy);
    fclose(original);}
    return 0;

}