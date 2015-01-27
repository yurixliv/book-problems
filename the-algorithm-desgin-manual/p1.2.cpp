#include <iostream>
#include <vector>

using namespace std;

int main ()
{

  char line[1000];
  int studensOnTrip;
  double amount, meanAmount, posExchange, negExchange, difference;

  freopen("p1.2.in", "r", stdin);

  while (scanf("%d\n", &studensOnTrip)) {

    if (studensOnTrip == 0) break;

    vector<double> contability(studensOnTrip);

    amount      = 0;
    meanAmount  = 0;
    posExchange = 0;
    negExchange = 0;

    for ( int i = 0; i < studensOnTrip; ++i )
    {
      scanf("%lf\n", &contability[i]);
      amount += contability[i];
    }

    meanAmount = amount/studensOnTrip;

    for ( int i = 0; i < studensOnTrip; ++i )
    {
      difference = (double) (long) ((contability[i] - meanAmount) * 100.0) / 100.0;
      if (difference > 0) posExchange +=     difference ;
      else                negExchange += -1*(difference);
    }

    posExchange = (negExchange > posExchange) ? negExchange : posExchange ;

    printf("$%.2lf\n", posExchange);
  }

  return 0;
}