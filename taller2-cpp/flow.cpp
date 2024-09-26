#include <bits/stdc++.h>
using namespace std;

int main() {

  // expresion inicial; mientras se cumpla expresion; al final de cada ciclo
  for (int i=0; i<10; i++) {
    cout << i << " ";
  }
  cout << endl;

  int i=0;
  while (i<10) {
    cout << i << " ";
    i++;
  }
  cout << endl;

  int miVar = 0;
  for (;;miVar++) {
    if (miVar % 2 == 0) continue;
    if (miVar >= 10) break;
    cout << miVar << " ";
  }

  cout << endl;
}