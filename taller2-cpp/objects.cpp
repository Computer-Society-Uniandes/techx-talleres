#include <bits/stdc++.h>
using namespace std;

/**
* Point p;
* p.x
* p.y
* set<Point> sp;
* unordered_set<Point> usp;
*/

struct Point {
  int x, y;

  // empty constructor
  Point() {}
  // full constructor
  Point(int a) {
    x = a;
    y = a*2;
  }

//  bool operator< (const Point &b) const {
//    if (x == b.x) return y < b.y;
//    else return x < b.x;
//  }
//
//  bool operator==(const Point &b) const {
//    return x == b.x && y == b.y;
//  }
};

//namespace std {
//  template <>
//  struct hash<Point> {
//    std::size_t operator()(const Point& p) const {
//      // Compute individual hash values for x and y and combine them
//      // Here we use a simple combination technique: XOR and bit-shifting
//      return hash<int>()(p.x) + hash<int>()(p.y);
//    }
//  };
//}

// operator<
bool CMP(const int &a, const int &b) {
  if (a%2 == 0 && b%2 != 0) return a;
  else return a < b;
}


int main() {
  set <Point> s;
  unordered_set <Point> h;



  vector <int> arr;
  sort(arr.begin(), arr.end(), CMP);
  return 0;
}