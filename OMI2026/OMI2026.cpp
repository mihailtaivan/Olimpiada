#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("lumini.in");
ofstream fout("lumini.out");
int val, dr, st, n, m, c, maxi, i, j, lumini[200001];
long long suma;
int main()
{
    fin >> c >> n >> m;
    for (i = 1; i <= m; ++i) {
        fin >> st >> dr >> val;
        for (j = st; j <= dr; ++j) {
            lumini[j] += val;
        }
    }
    for (i = 1; i <= n; ++i) {
        suma += lumini[i];
        if (lumini[i] > maxi) {
            maxi = lumini[i];
        }
    }
    if (c == 1) {
        fout << suma;
    }
    else {
        fout << maxi;
    }
    return 0;
}