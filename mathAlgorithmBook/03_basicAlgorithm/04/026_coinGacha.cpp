#include <iostream>
using namespace std;

int N;
double Answer = 0.0;

int main() {
  cin >> N;
  for(int i = N; i >= 1; i--) {
    Answer += 1.0 * N / i;
  }

  printf("%.12lf\n", Answer);
  return 0;
}