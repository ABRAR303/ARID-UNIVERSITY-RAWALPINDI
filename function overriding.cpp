#include<iostream>
using namespace std;
class abrar{
	public:
		void showdata(){
		cout<<" if he agree then he will meet"<<endl;	
		
}

void setdate(){
	cout<<" 16/11/2023"<<endl;
}
};
 class bilal:public abrar{
 	public:
 		void showdata(){
 			cout<<" if it is have free time then he will meet to abrar"<<endl;
		 }
		 void setdata(){
		 	cout<<" 17/11/23"<<endl;
		 }
	
 
};
int main(){
	abrar a1;
	a1.setdate();
	a1.showdata();
	bilal b1;
	b1.setdata();
	b1.showdata();
}