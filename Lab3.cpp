#include <iostream>
#include <cmath>
using namespace std;
int main(){
int a =1;
int b = 1;
int result=0; 
cout<<a<<" "<<b<<" ";
for(int i=2; i<13; i++){
 result=a+b; 
cout<<result‹‹" ";
 a=b;
b=result;
}
cout<< endl; 
return 0;
}

