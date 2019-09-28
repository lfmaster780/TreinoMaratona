#include <iostream>
#include <string>
using namespace std;
// https://codeforces.com/contest/1216/problem/A
int main(int argc, char const *argv[]) {
  int tamanho;
  int change = 0;
  string str;
  char f,s;
  cin >> tamanho;
  cin >> str;

  for (int i = 0; i < tamanho; i += 2) {
    f = str[i];
    s = str[i+1];
    if (f == 'a' && s == 'a') {
      str[i] = 'b';
      change++;
    } else if (f == 'b' && s == 'b') {
      str[i] = 'a';
      change++;
    } else {
      continue;
    }
  }

  cout << change << '\n';
  cout << str << '\n';
  return 0;
}
