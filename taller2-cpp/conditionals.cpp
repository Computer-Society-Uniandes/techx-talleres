#include <bits/stdc++.h>

using namespace std;

int main() {
  bool a = true;

  // not a

  if (a == true) {
    cout << "Si" << endl;
  } else {
    cout << "No" << endl;
  }

  if (a == true) cout << "Si" << endl;
  else cout << "No" << endl;

  cout << (a == true ? "Yes" : "No") << endl;

  int num = 0;

  // num = 3		0011    True
  // num = 7		0111	True
  // num = -1		1...1	True
  // num = 0		0000	False

  // si num es distinto de 0 equivalente a num != 0 equivalente !num
  // !num !!num
  if (num == 1) {
    cout << "Uno" << endl;
  } else if (num == 2) {
    cout << "Dos" << endl;
  } else {
    cout << "No se" << endl;
  }

  if (num) cout << "No es 0" << endl;
  else cout << "Es 0" << endl;

  cout << "Es 0? " << (num ? "No" : "Si") << endl;
  cout << "Es 0? " << (!num ? "Si" : "No") << endl;
}