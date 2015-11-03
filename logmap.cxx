#include <iostream>
using namespace std;

int main () {
  int N = 200; // Anzahl der Schritte
  int M = 20; // Anzahl der Schritte
  //double x = 0.5;
  int y;
  //double r = 3.9;
  for(double r = 0.1; r < 4; r+=0.1){
    double x = 0.5;
    for(int n = 1; n <= M; n++){
      x = x*r*(1-x);
    }
    for(int n = 21; n <= N; n++){
      x = x*r*(1-x);

      cout << r << "\t" << x <<endl;
      
    }
  }
}