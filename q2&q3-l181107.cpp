#include<iostream>
#include<fstream>
using namespace std;
void fun(int *p,int s);


int main()
{int s=0;
cout<<"enter size of array"<<endl;
cin>>s;
int *p=new int[s];
for(int i=0;i<s;i++)
{cout<<"enter numbers"<<endl;
	cin>>*(p+i);
}
int temp;


   
   for (int i = 0; i < s-1; i++) 
   { 
     
     for (int j = 0; j < s-i-1; j++) 
     { 
		 if (p[j]> p[j+1]) 
        { 
           temp=p[j+1];
		   p[j+1]=p[j];
		   p[j]=p[j+1];
            
        } 
     } 
  
     
   } 
   for(int i=0;i<s;i++)
{
	cout<<*(p+i)<<endl;
}
   fun;

   return 0;
}
void fun(int *p,int s)

{ofstream fout;
	p=new int[s];
	int temp=0;
	 for (int i = 0; i < s-1; i++) 
   { 
     
     for (int j = 0; j < s-i-1; j++) 
     { 
		 if (*(p + j)>*(p+(j+1)) )
        { 
           temp=p[j+1];
		   *(p+(j+1))=*(p + j);
		   *(p + j)=*(p+(j+1));
            
        } 
     } 
  
     
   } 
	 fout.open("result.txt");
	 if(!fout)
	 {cout<<"unable to open the file"<<endl;
	 }
	 else
	 {
      for(int i=0;i<s;i++)
{
	fout<<*(p+i)<<endl;
}
	 }




}

