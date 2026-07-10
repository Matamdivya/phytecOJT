#include<stdio.h>
#include<string.h>
int main(){
	char word[]="cricket";
	int chances=6,found;
	char guess;
	int length=strlen(word);
	char display[20];
	for(int i=0;i<length;i++){
		display[i]='_';}
	        display[length]='\0';
	printf("-----WELCOME TO HANGMAN GAME-----\n");
        while(chances>0){
		printf("%s",display);
		printf("number of chances left:%d\n",chances);
		printf("guss the letter:");
		scanf(" %c",&guess);
		 found=0;
	for(int i=0;i<length;i++){
		if(word[i]==guess){
			display[i]=guess;
		        found=1;
		}
	}
	if(found){
		printf("correct guess.\n");
	}
	else{
		printf("oops! wrong geuss.\n");
		chances--;
	}
      if(strcmp(word,display)==0){
		      printf("congrats you win! word is:%s/n",word);
		      return 0;
		      }}
		      printf("you lost! word was:%s/n",word);
		      return 0;
		      }
		      



