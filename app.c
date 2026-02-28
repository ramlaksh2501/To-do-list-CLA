/*
author : Laksh
purpose:to do list in terminal 
functionalities:
add tasks
delete task  */
#include<stdio.h>
#include<stdlib.h>

FILE *org;
FILE *cpy;

void display(){

    int line=1;
    printf("\t\t***** Tasks you need to complete *****\n");
    char a;
    a=fgetc(org);
    char j=0;
    while(a!=EOF){
        if(j==0){
            printf("%d:",line);
            printf("\u2610");
            j=1;
        }
        printf("%c",a);
         if(a=='\n'){
            line++;
             printf("%d:",line);
            printf("\u2610");

        }
        a=fgetc(org);
    }
    printf("\n");

}
void add_task();
void rm_task();
void close();
int main(){

org=fopen("original.txt","r+");
cpy=fopen("copy.txt","r+");
printf("\t\t-------------To Do List-------------\n");
while(1){
    printf("---------------------------------------------\n");
    printf("1.view the list\n2.add new task\n3.delete a task\n4.quit\n");
    int ch;
    printf("enter an option:");
    scanf("%d",&ch);
    printf("\n");
    switch(ch){
    case 1:{
        display();
        break;
    }
    case 2:{
        break;

    }
    case 3:{

 break;
    }
    case 4:   { return 0;

    } 
    }
  
}




}


//just for now keep the input as 1 2 3 like that in a while 1
// for the next version use argc to find which option to use when this is called up by the user 
//for example todo cat
// todo rm 3
//todo ins "the task"