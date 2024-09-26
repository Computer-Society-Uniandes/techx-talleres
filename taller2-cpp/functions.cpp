#include <bits/stdc++.h>
using namespace std;

void a() {
  return;
  cout << "No retorna nada" << endl;
}

int duplicar(int x) {
  return 2*x;
}

void duplicarValoresEnDuplicado(vector <int> a) {
  for (int i=0; i<a.size(); i++) a[i] = 1;
}

void duplicarValoresEnDuplicado2(vector <int> a) {
  for (int &x : a) x = 2;
}

void duplicarValoresEnReferencia(vector <int> &a) {
  for (int i=0; i<a.size(); i++) a[i] = 1;
}

void duplicarValoresEnReferencia2(vector <int> &a) {
  for (int &x : a) x = 2;
}


int main() {
  a();

  vector <int> arr = {1, 2, 3, 4};

  duplicarValoresEnDuplicado(arr);
  for (int x : arr) cout << x << " ";
  cout << endl;

  duplicarValoresEnDuplicado2(arr);
  for (int x : arr) cout << x << " ";
  cout << endl;

  duplicarValoresEnReferencia(arr);
  for (int x : arr) cout << x << " ";
  cout << endl;

  duplicarValoresEnReferencia2(arr);
  for (int x : arr) cout << x << " ";
  cout << endl;

  return 0;
}