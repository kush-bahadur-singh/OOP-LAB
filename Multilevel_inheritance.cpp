//write a c++ program using multilevel inheritance
#include <iostream>
using namespace std;
class person{
    
char name[30];
public:
void read(){
    cout<<"enter name:"<<endl;
    cin>>name;
}
void display(){
    cout<<"name:"<<endl;
}
};
class sport:public person{
    int m=50; 
public:
void display(){
    cout<<m;
}
};
class student:public sport{
    public:
    void display(){
        person::display();
        sport::display();
        
    }
};
int main(){
    student st;
    st.read();
    st.display();
    return 0;
}

