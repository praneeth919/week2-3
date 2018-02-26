#include<iostream>


using namespace std;

class Calcy{
	
    public:
    	
    	void oper(int i, int j, char ch){
    		
    		if(ch=='+'){
    			cout<<i+j;
			}
			
			if(ch=='-'){
    			cout<<i-j;
			}
			
			if(ch=='*'){
    			cout<<i*j;
			}
			
			if(ch=='/'){
    			if(j!=0){
				cout<<i/j;
		    	}
	            else{
	            	cout<<"Error: Divide by Zero!";
				}
			}
            
		}
		
		void oper(float a, float b, char ch){
			
			if(ch=='+'){
    			cout<<a+b;
			}
			
			if(ch=='-'){
    			cout<<a-b;
			}
			
			if(ch=='*'){
    			cout<<a*b;
			}
			
			if(ch=='/'){
				if(b!=0){
				cout<<a/b;
		    	}
	            else{
	            	cout<<"Error: Divide by Zero!";
				}
						
			}
			
			
		}
		

	
};


int main(){

Calcy c;

float i,j;
char z;

cin>>i>>j>>z;


c.oper(i,j,z);

return(0);
}
