#include<stdio.h>
#include<string.h>
int main(){
    char gps[]="$GPGGA,123519,1725.1234,N,07845.6789,E";
    char latitude[20];
    char longitude[20];
    char *token;
    int field=0;
    token=strtok(gps,",");
    while(token !=NULL){
        field++;
        if(field==3){
            strcpy(latitude,token);
        }
        if(field==5){
            strcpy(longitude,token);
        }
        token=strtok(NULL,",");
    }
    printf("lattitude:%s\n",latitude);
    printf("longitude:%s\n",longitude);
    
    
}
