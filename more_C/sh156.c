#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>
#include <stdlib.h>
#include <openssl/crypto.h>
#include <openssl/opensslv.h>

int main()
{
  unsigned char * message = NULL;
  unsigned char hash[32];
  unsigned char final_str[32];
  int loopcounter = 0;
  SHA256_CTX ctx;
  message = (char*)malloc(sizeof(char)*30);
  memset(message,0,sizeof(message));
  
  unsigned int mac_len[] = {0X86,0XBE,0X5F,0X5F,0XB4,0X7B};
  snprintf(message, sizeof(message), "%02x:%02x:%02x:%02x:%02x:%02x",
         mac_len[0], mac_len[1], mac_len[2], mac_len[3], mac_len[4], mac_len[5]);
  printf("message is %02x:%02x:%02x:%02x:%02x:%02x \n",message[0],message[1],message[2],message[3],message[4],message[5]);
  SHA256_Init(&ctx);
  SHA256_Update(&ctx,message,strlen(message));
  SHA256_Final(hash,&ctx);
 
  for (loopcounter = 0; loopcounter < SHA256_DIGEST_LENGTH; loopcounter++)
  {
   sprintf(&final_str[loopcounter * 2], "%02x",
                 (unsigned char) hash[loopcounter]);

  }

  printf("%s",final_str);
 
}
