#include <iostream>
#include "Box.h"

using namespace std;

Box::Box(int a,int b,int c):length(a),breadth(b),height(c){}


int Box::volume()const{
    return length*breadth*height;
}

bool Box::operator <(const Box& aBox) const{
        int x1=volume();
        int x2=aBox.volume();
        cout<<"x1="<<x1<<'\n';
        cout<<"x2="<<x2<<'\n';
       return  x1 < x2 ;
}
bool Box::operator =(const Box& aBox) const{
        int x1=volume();
        int x2=aBox.volume();
        cout<<"x1="<<x1<<'\n';
        cout<<"x2="<<x2<<'\n';
       return  x1 == x2 ;
}
bool Box::operator >(const Box& aBox) const{
        int x1=volume();
        int x2=aBox.volume();
        cout<<"x1="<<x1<<'\n';
        cout<<"x2="<<x2<<'\n';
       return  x1 > x2 ;
}


int main(){

   Box Box1(5,9,2);
   Box Box2(4,2,6);


   cout<<"Box1 > Box2"<<'\n';
   if(Box1 > Box2){
      cout<<"yes";
   }else{
      cout<<"NO";
   }

   return 0;

}
