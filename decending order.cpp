#include<iostream>
using namespace std;

struct student{
	int marks;
	char name[8];
}stud[100],t;

int main()
{
	int n;
	cout<<"enter how many student ";
	cin>>n;
	cout<<"enter name of student\n";
	for(int i=0;i<n;i++){
		cin>>stud[i].name;
	}
	cout<<"enter marks of student\n";
	for(int i=0;i<n;i++){
		cin>>stud[i].marks;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			if(stud[j].marks<stud[j+1].marks){
				t=stud[j];
				stud[j]=stud[j+1];
				stud[j+1]=t;
			}
		}
	}
	cout<<"Name\t\tMarks\n";
	cout<<"--------------------------------------------------------\n";
	for(int i=0;i<n;i++){
		cout<<stud[i].name<<"\t\t"<<stud[i].marks<<"\n";
	}
	return 0;
}
