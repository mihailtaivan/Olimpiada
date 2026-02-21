#include <iostream>
#include <fstream>
using namespace std;
// Problema foloseste Smenul lui Mars - vezi Claude AI
ifstream fin("lumini.in");
ofstream fout("lumini.out");

int c, n, m, st, dr;
long long val, d[200005], cur, suma, maxim;

int main() {
    fin >> c >> n >> m;
    for (int i = 0; i < m; i++) {
        fin >> st >> dr >> val;
        d[st] += val;
        d[dr + 1] -= val;
    }
    for (int i = 1; i <= n; i++) {
        cur += d[i];
        suma += cur;
        if (cur > maxim) maxim = cur;
    }
    if (c == 1) fout << suma;
    else fout << maxim;
    return 0;
}