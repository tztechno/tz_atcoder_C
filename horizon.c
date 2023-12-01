#include <stdio.h>
#include <math.h>
int main() {
  double H;
  scanf("%lf", &H);
  double result = sqrt(H * (12800000 + H));
  printf("%.6f\n", result);
  return 0;
}
