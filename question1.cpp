#include<iostream>
#include<string>

using namespace std;

struct item{
  int id;
  float cost;
  
};
  
  int main(){
    item arr[6] = {(1,2,3),(3,40,55),(5,30,78),(6,67,97),(9,20,47),(8,76,54)};
     for(int i=0;i<6; i++){
         if(arr[i].cost>50.00){
             cout<<"item ID: "<<arr[i].id<<",cost:$"<<arr[i].cost<<endl;
         }
     }
        return 0;
  }
