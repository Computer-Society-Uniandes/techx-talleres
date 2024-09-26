#include <bits/stdc++.h>
using namespace std;

int main() {

  vector <int> arreglo;
  arreglo.push_back(1);
  arreglo.pop_back();
  arreglo.begin();
  arreglo.end();

  int n;
  cin >> n;
  arreglo.resize(n);
  for (int i=0; i<n; i++) cin >> arreglo[i];

  // operator <
  set <int> miSet;
  miSet.size();
  miSet.empty();

  miSet.insert(5); // O(lg n)
  miSet.insert(5);
  miSet.insert(5);
  miSet.erase(5); // O(lg n)

  // operator =
  // hash <T>
  unordered_set <int> miSet2;

  miSet2.insert(5); // O(c) ~ O(1)
  miSet2.insert(5);
  miSet2.insert(5);
  miSet2.erase(5); // O(c) ~ O(1)


  map <int,int> miMapa;

  miMapa[5]=10; // O(lg n)
  miMapa[5]=15;
  cout << miMapa[5] << endl;
  miMapa.erase(5); // O(lg n)

  unordered_map <int,int> miMapa2;

  miMapa2[5]=10; // O(c) ~ O(1)
  miMapa2[5]=15;
  cout << miMapa2[5] << endl;
  miMapa2.erase(5); // O(c) ~ O(1)

  queue <int> cola;
  cola.push(1); // O(1)
  cola.pop(); // O(1)

  stack <int> pila;
  pila.push(1); // O(1)
  pila.pop(); // O(1)

  deque <int> deq; // BFS 0-1
  deq.push_back(1); // O(1)
  deq.push_front(2); // O(1)
  deq.pop_back(); // O(1)
  deq.pop_front(); // O(1)

  priority_queue <int> pq;
  pq.push(1);
  pq.push(2);
  pq.push(3);
  pq.push(5);
  pq.pop();

  priority_queue <string, vector <string>, greater <string> > pq2;

  for (int x : arreglo) x+=1;
  for (int x : arreglo) cout << x << " ";
  cout << endl;
  for (int &x : arreglo) x += 1;
  for (int x : arreglo) cout << x << " ";
  cout << endl;

  // sort()
  sort(arreglo.begin(), arreglo.end());

  // reverse()
  reverse(arreglo.begin(), arreglo.end());

  // sort() + reverse()
  sort(arreglo.begin(), arreglo.end());
  reverse(arreglo.begin(), arreglo.end());

  sort(arreglo.rbegin(), arreglo.rend());

  // lower_bound()
  auto it = lower_bound(arreglo.begin(), arreglo.end(), 10); // --> arreglo.end()
  if (it != arreglo.end()) cout << *it << endl;

  // upper_bound()
  it = upper_bound(arreglo.begin(), arreglo.end(), 10); // --> arreglo
  if (it != arreglo.end()) cout << *it << endl;

  // int a; a++;
  // long long a; a++;

  for (auto it2=miSet.begin(); it2!=miSet.end(); ++it2) {
    cout << *it << " ";
  }
  cout << endl;

  for (auto it2=miMapa.begin(); it2!=miMapa.end(); ++it2) {
    pair <int,int> v = *it2;
    v.first;
    v.second;

    it2->first;
    it2->second;
  }


  // <algorithm>
  // count
  // is_permutation
  // replace()
  // shuffle()

}