#include <iostream>
using namespace std;
void Multiply (double x, double y,double& mul) {
   return multiply_in_js(x, y);
}
int main() {
  double n1, n2, m;
  
  cin>> n1 >> n2;
  Multiply(n1, n2, m);
  cout<< n1 <<" * " << n2 << " = " << m << endl;
      
  return 0;
}
