#include <fstream>
#include <vector>
#include <set>
using namespace std;

ifstream cin("miting.in");
ofstream cout("miting.out");

const int N = 62, SIG = 'Z' - 'A' + 1, K = 11, INF = 1e9 + 7;
string lin[N];
pair<int, int> poz_lit[SIG];
vector<pair<int, int>> poz_nonzero;
int dp[K][K][N * N];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, -1, 0, 1};

bool valid( int l , int c){
    return lin[l][c] != '#';
}

void lee(int i, int j, vector<pair<int, int>> indici)
{
    set < pair < int, int > > celule;
}

int main()
{
    int cer, n, m;
    string cuv;
    cin >> cer >> n >> m >> cuv;
    for (int i = 1; i <= n; i++)
    {
        cin >> lin[i];
        lin[i] = '#' + lin[i] + '#';

        for (int j = 1; j <= m; j++)
        {
            if (lin[i][j] != '#' && lin[i][j] != '_')
            {
                poz_lit[lin[i][j] - 'A'] = {i, j};
            }
        }
        for (int j = 1; j <= m; j++)
        {
            if (lin[i][j] != '#')
            {
                poz_nonzero.push_back({i, j});
            }
        }
    }
    lin[0] = string(m + 1, '#');
    lin[n + 1] = string(m + 1, '#');

    int lit(cuv.size());

    for (int i = 0; i < lit; i++)
    {
        for (int j = 0; j < lit; j++)
        {
            for (int ind_final = 0; ind_final < poz_nonzero.size(); ind_final++)
            {
                dp[i][j][ind_final] = INF;
            }
        }
    }

    for (int i = lit - 1; i >= 0; i--)
    {
        for (int j = i; j < lit; j++)
        {
            vector<pair<int, int>> puncte_optime;
            for (int ind_final = 0; ind_final < poz_nonzero.size(); ind_final++)
            {
                pair<int, int> poz_final = poz_nonzero[ind_final];
                int starting_val = dp[i][j][ind_final];
                for (int k = i; k < j; k++)
                {
                    dp[i][j][ind_final] = min(dp[i][j][ind_final], dp[i][k][ind_final] + dp[k + 1][j][ind_final]);
                    if (dp[i][j][ind_final] < starting_val)
                    {
                        puncte_optime.push_back(poz_final);
                    }
                }
            }
            if (i == j)
            {
                int ind_meu;
                for (int poz = 0; poz < poz_nonzero.size(); poz++)
                {
                    if (poz_nonzero[poz] == poz_lit[cuv[i]])
                    {
                        ind_meu = poz;
                    }
                }
                dp[i][j][ind_meu] = 0;
                puncte_optime.push_back(ind_meu);
            }
        }
    }
}
// tema: sireturi- infoarena