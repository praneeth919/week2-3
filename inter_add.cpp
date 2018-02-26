#include<iostream>


using namespace std;

void fun(string n, int count){
     
	 cout<<n;
	  
     if(count<1000)
       fun(n,count);   

}

int main(){

string name;

cin>>name;


fun(name,0);


return(0);
}
