#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  for(int i=1; i<10; i++){
    cout << n << " * "<< i << " = " << n*i <<endl; // 문자열 연결 주의
  }
  return 0;
}