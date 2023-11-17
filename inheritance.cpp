#include<iostream>
using namespace std;
class animal{
	public:
		void eat(){
			cout<<" eat something"<<endl;
		}
		void sleep(){
		cout<<"sleep withinh a time"<<endl;
       }
		
};
class fish:public animal{
	public:
		void swing(){
			cout<<"swing in pool";
		}
		
};
int main(){
	animal a1;
	fish f1;
	a1.eat();
	a1.sleep();
	f1.swing();
	return 0;
}