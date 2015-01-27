#include <iostream>
#include <vector>

using namespace std;


struct Candidates
{
  Candidates() : votes(0), eliminated(false) {}
  int votes;
  bool eliminated;
  string name;
};

int main ()
{
  string buf;
  int testCases, nCandidates;
  vector< vector<int> > ballot;

  freopen("p1.3.in", "r", stdin);

  while (scanf("%d\n", &testCases) && testCases != 0)
  {
    scanf("\n");
    scanf("%d\n", &nCandidates);

    printf("nCandidates: %d\n", nCandidates);
    vector<Candidates> candidates;

    for( int i = 0; i < nCandidates; ++i )
    {
      cin  >> candidates[i].name;
      cout << candidates[i].name;
    }

    cin >> buf;
    while ( buf.at(0) != '\n')
    {
      cout << buf;
    }

    --testCases;

   // printf("$%.2lf\n", posExchange);
  }

  return 0;
}