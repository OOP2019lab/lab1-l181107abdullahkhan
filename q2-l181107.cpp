#include<iostream>
#include<fstream>
using namespace std;

int main()
{

	int n,num,power=0;
	ifstream fin;
	ofstream fout;
	fin.open("file.txt");
	if(!fin)
		cout<<"cant open file"<<endl;
	else
	{ fin>>n;
	
	}
	for(int i=0;i<n;i++)
	{
		fin>>num;
		fin>>power;
		fout.open("result.txt");
		fout<<pow(num,power);
	}
	return 0;
}