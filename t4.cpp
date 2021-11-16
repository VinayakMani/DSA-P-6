 //Vinayak MANI ,Roll no. 202132
 // Program to swap two numbers using CALL BY REFERENCE
 
  
 #include<iostream>  
using namespace std;    
void swap(int *x, int *y)  
{  
 int t;  
 t=*x;  
 *x=*y;  
 *y=t;  
}  
int main()   
{ 
	int a=30,b=40;
    cout<<"\nVALUES BEFORE SWAPPING :\n";
    cout<<"A:"<< a<<",B:"<< b;
    swap(a,b);
    cout<<"\nVALUES AFTER SWAPPING :\n";
    cout<<"A:"<< a<<",B:"<< b;
    cout<<"\n";
    return 0;   
 
}    