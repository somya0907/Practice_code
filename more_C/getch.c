#include<stdio.h>
void get_password(char *pass)
{
    int len=0;
    char ch;
    while((ch=getchar())!='\n'){
        pass[len]=ch;
        printf("value of ch is %c and pass is %c\n",ch,pass[len]);
        len++;}
        printf("password is %s\n",pass);
 
}    
int main()
{
    char pass[30];
    printf("Enter the password\n");
    get_password(pass);
}
