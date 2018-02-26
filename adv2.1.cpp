#include<iostream>
#include<cstdlib>
#include<string.h>

using namespace std;


struct stack{
	
	int data;
	stack* next;
	
	
	
}*TOP=NULL, *S=NULL, *save= NULL, *temp;

	
void push(char ch)
{	
	S=new stack;
	
	S->data= ch;
	S->next= NULL;
	
	if( TOP==NULL)
	{
		TOP=S;
	}
	else
	{
		save=TOP;
		TOP= S;
		S->next= save;
	}

}


void pop(){
	
	if(TOP==NULL){
		false;
	}
	else
	{
	  temp=TOP;
	  TOP=TOP->next;
	  free(temp);   	
	
	}
}


int main(){

char ch[50];
int i;

cin>> ch;



for(i=0;i<strlen(ch);i++)
{
	if(ch[i]=='(' || ch[i]=='{' || ch[i]=='[')
	{
         push(ch[i]);
	}
	else if(ch[i]==')' || ch[i]=='}' || ch[i]==']')
	{
		if(TOP==NULL)
		{
			return false;
		}
		else
		{
			pop();
		}
	}
	
}

    if(TOP==NULL){
    	
		cout<<"YES"<<endl;
	}
	
	else{
		
		cout<<"NO"<<endl;
	}


return(0);
}




