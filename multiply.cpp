#include <iostream>
using namespace std;
void Divide (double x, double y,double& mul) {
  mul = x * y;
}
int main() {
  double n1, n2, m;
  
  cin>> n1 >> n2;
  Divide(n1, n2, m);
  cout<< n1 <<" * " << n2 << " = " << m << endl;
      
  return 0;
}
