#include<iostream>
using namespace std;
class Vehicle{
public:
    int wheels;
    int range;
    Vehicle(int w,int r):
        wheels(w),range(r){}
        void display()const{
        cout<<"Wheels:"<<wheels<<"\nRange:"<<range<<endl;
        }
};
class Car:public Vehicle{
public:
    int passengers;
    Car(int w,int r,int p):
        Vehicle(w,r),passengers(p){}
        void display()const{
        Vehicle::display();
        cout<<"passengers:"<<passengers<<endl;
        }
};
class Truck:public Vehicle{
public:
    int loadLimit;
    Truck(int w,int r,int l):Vehicle(w,r),loadLimit(l){}
    void display()const{
    Vehicle::display();
    cout<<"Load Limit:"<<loadLimit<<endl;
    }
};
int main(){
    Car c(4,500,5);
    Truck t(12,1200,3000);
    cout<<"Car:\n";
    c.display();
    cout<<"\nTruck:\n";
    t.display();
    return 0;
}

