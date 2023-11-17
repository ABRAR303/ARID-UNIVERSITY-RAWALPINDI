#include <iostream>
using namespace std;
class abrar
{
    private:
    int d;
    public:
    void set_value(int k)
    {
        d=k;
        
    }
    
    void show_sum(int n)
    {
        cout<<"sum of "<<d<<" and "<<n<<" = "<<d+n<<endl;
        
    }
    
    
};
class bilal
{
    public:
    abrar a;
    void print_result()
    {
        a.show_sum(5);
        
    }
    
};

int main()
{
  bilal b;
  b.a.set_value(20);
  b.a.show_sum(100);
  b.print_result();
 
}