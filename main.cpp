#include <iostream>
using namespace std;
float x=0;
float maggiore(float a, float b){
  if(a>=b){
    return a;
  }else if (b>a) {
    return b;
  }
}
int main(){
int d=0; cin >> d; float numero[d];
for (int i=0, i<d, i++){
  cin >> numero[i];
}
for (int i=1; i<d,i++){
  float n=maggiore(numero[i], numero[i-1]);
  if (n>x){
    x=n;
  }
}
cout << x;
  return 0;
}
