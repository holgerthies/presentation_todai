#include "iRRAM.h"
using namespace iRRAM;

void compute(){
  int n=200;
  REAL a = REAL("3.8");
  REAL x = REAL("0.4");
  for(int i=1; i<=n; i++){
    x = a*x*(1-x);
    cout << i << " " <<  x << std::endl;
  }

}

