#include <iostream>
#include <cmath>
using namespace std;
int fibonacci (int num) {
if (num == 0)
return 0;
if (num == 1)
return 1;
return fibonacci(num-1) + fibonacci (num-2);
}
 int main() {
int i =0;

do{
cout<< fibonacci (i)<" ";

++i;

} while ( i< 13);
return 0;
}
