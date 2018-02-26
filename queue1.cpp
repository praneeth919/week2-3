#include<iostream>
#include<cstdlib>

using namespace std;



struct node{
	
	int data;
	
	node* next;
}*front, *rear;


class queue{
	
	public:
		
		void enqueue(int);
		void dequeue();
		void traverse();
		void start();
		
        queue(){
        	front= NULL;
        	rear=NULL;
		}
};


int main()
{
  int choice,value;
  
  front=NULL;	
  rear=NULL;
  
  queue q;
  cout<<endl;
  
  while(1)	
	{
	  cout<<"\n1. Insert element to queue"<<endl;
	  cout<<"2. Delete element from queue"<<endl;
	  cout<<"3. Dispaly front of the queue "<<endl;
	  cout<<"4. Dispaly all elements of queue"<<endl;
	  	  
	  cout<<"\nEnter your choice: ";
	  cin>>choice;
	  cout<<endl;
	  
      switch(choice){
      	
      	case 1:
      		
      		cout<<"\nEnter to insert: ";
      		cin>>value;
      		cout<<endl;
      	    
      	    q.enqueue(value);
      	    break;
      	
      	case 2:
      		
      		q.dequeue();
      		break;

        case 3:
        	
        	q.start();
        	break;
        	
      	case 4:
      		
      		q.traverse();
      		break;	
			  
		default:
		   
		   cout<<"wrong choice\n";
		   break;	  
	}	  
	  				
		}
	
return(0);	
}


void queue::enqueue(int value)
{
	struct node *temp;
    
    temp=new(struct node);
		
	temp->data=value;
	temp->next=NULL;
	if(front==NULL && rear==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
}


void queue::dequeue()
{     
    struct node *temp;
    
    temp=front;

	if(front==NULL){
		cout<<"nothing to show"<<endl;
	}
	
	if(front==rear)
	 {
	 	front=rear=NULL;
	   }  
	   
	else
	{
		front=front->next;
	   }   
	   free(temp);
	   
}


void queue::traverse(){

    int i;
    
    struct node *temp;
	 	    
    temp=front;
    
	if(front==NULL && rear==NULL)
	{
		cout<<"queue is empty"<<endl;
	}

    if(front==rear)
    {
    	cout<<front->data<<endl;
    
	}

    else
    {  
    	while(temp!=NULL)
		{
		
    		cout<<temp->data<<" ";
    		temp=temp->next;
    }
    cout<<endl;
	}
      
    
}


void queue::start(){
	
	cout<<front->data;
	
}

