#include<stdio.h>
int main(){
    int user,comp;
    printf("WELCOME TO ROCK PAPER SCISSORS GAME\n");
    printf("0=rock\n1=paper\n2=scissor.\n");
    printf("Enter your choice:");
    scanf("%d",&user);
    comp=(user+1)%3;
    printf("computers choice:%d.\n",comp);
    if(user==comp){
        printf("Draw match.\n");
    }
    else{
        if((user==0 && comp==2)||(user==1 && comp==0)||(user==2 && comp==1)){
            printf("congratulations you won.\n");
        }
        else if(user>=0 && user<=2){
            printf("ooops! you lost the match.\n");
        }
        else{
            printf("inavild entery.\n");
        }
    }
}
