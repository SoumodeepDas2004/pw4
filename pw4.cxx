#include <iostream>

using namespace std;

int main(){
    { int m ;
    int n;
    cout << "input length ànd breath";
    cin>>m>>n;
    if (m=n){
    	cout << "its square"<<endl;
    }else{ cout<<"its rectangle"<<endl;}}
    { int u;
    	cout<<"enter the number:";
   
    cin>> u;
    if (u<0){ 
    int x =-u;
    
    cout << x<<endl ;

 	 
 }
 else { cout <<u;
 }}
 { int i;
 int s;
 int e;
 cout<<" input your income and useofmoney";
 cin >>i>>s;
 if(i>=s){ 
 e= i-s;
 cout <<"income is:"<<e<<endl;}
 else{
 	e=s-i;
 	cout<<"loss is:"<<e<< endl;
 }}
 {int r;
 
 cout <<"input your number";
 cin >>r;
 if(r<0){ cout<<"number is negative and skippd";}
 else {cout<<"congo number is postive";}
 }{
 	//6
 	int l;
 cout<<"	enter your marks";
 cin>>l;
 if (l>90){
 	cout <<"A+";
 } else if (l>80){ cout<<"A";
 } else if (l>70){ cout<<"B+";}
 else if (l>60){ cout<<"B";}
  else if (l>50){ cout<<"C";}
  else if (l>40){ cout<<"D";}
   else if (l>30){ cout<<"E";}
   else if(l<30){ cout<<"F";}
 }
}
 
 