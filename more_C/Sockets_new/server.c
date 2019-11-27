#include"header.h"
int sfd = 0;
void* accept_request(void *arg)
{
    while(1){
        printf("Waiting request from client\n");
        char a[1024];
        struct sockaddr_in *saddr;
        struct data pkt;
        saddr = (struct sockaddr_in*)arg;
        int afd = 0;
        int addrlen = sizeof(saddr);
        afd = accept(sfd,(struct sockaddr *)&saddr,(socklen_t*)&addrlen);
        printf("%d\n",sfd);
        printf("%d fd \n",afd);
    //if(queue->rear == queue->size)
      //  printf("Queue is overflowing");
    //else{
	//queue->rear = (queue->rear+1) % queue->capacity;
        //queue->size = queue->size+1;
	read(afd,(void*)&pkt,sizeof(a));
	printf("data read is %s %d\n",pkt.arr,pkt.a);
        //send(afd,a,strlen(a),0);
        //printf("send data is %s\n",a);
        
//	}}

}}

int main()
{
   pthread_t thread_id[5];
   queue = (struct Queue*)malloc(sizeof(struct Queue));
   queue->capacity = 5;
   queue->rear = -1;
   queue->front = -1;
   queue->size = -1;
   queue->arr = (int*)malloc(sizeof(int)*queue->capacity);
   sfd = socket(AF_INET,SOCK_DGRAM,0);
   printf("%d\n",sfd);
   struct sockaddr_in saddr;
   saddr.sin_family = AF_INET;
   saddr.sin_addr.s_addr = INADDR_ANY;
   saddr.sin_port = htons(PORT);

   if(bind(sfd,(struct sockaddr*)&saddr,sizeof(saddr))){
       perror("bind");
       exit(EXIT_FAILURE);}

   if(listen(sfd,20)){
        perror("listen");
        exit(EXIT_FAILURE);}
  for(int i=0;i<20;i++){
       pthread_create(&thread_id[i],NULL,(void*)accept_request,(void*)&saddr);
       pthread_detach(thread_id[i]);}
   while(1);
}

    
   
   


