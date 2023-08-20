#include<iostream>
using namespace std;
class Watermelon{

public:
    int weight;
    Watermelon(int w):weight(w){}
    bool canDivide(){
    return weight>=4 && weight%2==0;
    }
};
int main(){
int w;
cin>>w;
Watermelon melon(w);
cout<<(melon.canDivide()?"Yes":"No")<<endl;
return 0;
}






