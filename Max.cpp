#include<iostream>
using namespace std;

int main(){
    int size;
cout<<"Enter the size of arrays is : ";
cin>>size;
int array[size];
int max = 0;
int min ;
for(int i=0;i<size;i++){
    cout<<"Enter the number is : ";
    cin>>array[i];
   if(max<array[i]){
       max = array[i];
   }
      if(min>array[i]){
       min = array[i];
   }
}



cout<<"Max Number is : "<<max<<endl;
cout<<"Min number is : "<<min<<endl;

return 0;
}