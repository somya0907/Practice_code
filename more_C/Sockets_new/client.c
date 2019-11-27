#include"header.h"
int main(int argc, char*argv[])
{
    struct data pkt;
    int sock = 0; 
    struct sockaddr_in serv_addr; 
    char *buff = "Hello this is client";
    char *hello = (char*)malloc(sizeof(char)*1000); 
    char buffer[1024] = {0};
    printf("size of structure is %d\n",sizeof(pkt)); 
    if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0) 
    { 
        printf("\n Socket creation error \n"); 
        return -1; 
    } 
   
    serv_addr.sin_family = AF_INET; 
    serv_addr.sin_port = htons(PORT); 
       
    // Convert IPv4 and IPv6 addresses from text to binary form 
    if(inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr)<=0)  
    { 
        printf("\nInvalid address/ Address not supported \n"); 
        return -1; 
    } 
   
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) 
    { 
        printf("\nConnection Failed \n"); 
        return -1; 
    } 
    
    strcpy(hello,buff);
    strcat(hello,argv[1]);
    strcpy(pkt.arr,hello);
    pkt.a = 5;
    send(sock , &pkt , sizeof(pkt) , 0 ); 
    printf("Dats send from client is %s %d\n",pkt.arr,pkt.a);
//    valread = read( sock , buffer, 1024); 
  //  printf("data received from server is %s\n",buffer ); 
    return 0; 
}
