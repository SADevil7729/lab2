#include "lab2.h"
#include "BMI.cpp"
int main()
{
Nakano Azusa;
ifstream openfile("file.in",ios::in);
ofstream outfile("file.out",ios::out);
if((!openfile)||(!outfile))
{
	cout<<"Fail to open file."<<endl;
	exit(1);
}
int temp_M,temp_KG;
char* temp_category;
while(openfile>>temp_M>>temp_KG)
{
	Azusa.setKG(temp_KG);
	Azusa.setM(temp_M);
	outfile<<fixed<<setprecision(2)<<Azusa.BMI()<<"\t";
	temp_category=Azusa.result();
	while(*(temp_category)!='\0')
	{
	outfile<<*(temp_category);
	temp_category++;
	}
	outfile<<endl;
}

cout<<"Create file.out"<<endl;
return 0;
}
