#include<iostream>
using namespace std;

class Hero{
    public:
    int health=70;
    char level='A';
    int gethealth()
    {
        return health;
    }
    void sethealth(int h)
    {
        health=h;
    }
 
};
int main()
{
    Hero ramesh; //object ko instantiate karna
// jab bhi object create hota hai to sbse pehle constructor call hota hai 
//uska koi return type nhi hota
//invoked during object creation
//can have input parameter or not
// if we make a constructor on our own then default constructor wont be called 
//how to make constructor
// Hero()
// {
//     cout<<"Constructor"<<endl;
// }
    //hw:padding
    //hw:greedy alignment

    cout<<ramesh.gethealth()<<endl;
   ramesh.sethealth(100);
    cout<<ramesh.gethealth()<<endl;
    cout<<ramesh.level<<endl;

    return 0;
}