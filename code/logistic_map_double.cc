#include <iostream>
using namespace std;

int main(){
  int n=200;
  double x = 0.4;
  double a = 3.8;
  for(int i=1; i<=n; i++){
    x = a*x*(1-x);
    cout << i << " " << x<<std::endl;
  }
  return 0;
}

