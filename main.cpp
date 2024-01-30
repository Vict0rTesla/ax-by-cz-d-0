#include <iostream>
using namespace std;

int dter(int n[3][4], int i[3]);

int main() {
  int eq[3][4], i[3] = {0, 1, 2};
  float a, b, c, d;
  cout << "Enter the a,b,c,d of all the equations: \n";
  cin >> eq[0][0] >> eq[0][1] >> eq[0][2] >> eq[0][3];
  cin >> eq[1][0] >> eq[1][1] >> eq[1][2] >> eq[1][3];
  cin >> eq[2][0] >> eq[2][1] >> eq[2][2] >> eq[2][3];

  a = dter(eq, i);
  i[0] = 3;
  b = dter(eq, i);
  i[0] = 0;
  i[1] = 3;
  c = dter(eq, i);
  i[1] = 1;
  i[2] = 3;
  d = dter(eq, i);
  i[2] = 2;

  if (a == 0) {
    cout << "no solution\n";
  } else {
    cout << "x = " << b / a << endl;
    cout << "y = " << c / a << endl;
    cout << "z = " << d / a << endl;
  }

  return 0;
}

int dter(int n[3][4], int i[3]) {
  return (n[0][i[0]] * (n[1][i[1]] * n[2][i[2]] - n[1][i[2]] * n[2][i[1]])) -
         (n[0][i[1]] * (n[1][i[0]] * n[2][i[2]] - n[1][i[2]] * n[2][i[0]])) +
         (n[0][i[2]] * (n[1][i[0]] * n[2][i[1]] - n[1][i[1]] * n[2][i[0]]));
}
