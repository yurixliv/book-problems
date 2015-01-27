#include <iostream>
#include <algorithm>

using namespace std;

int main ()
{

  char line[1000];
  // int goes up to 827_370_449; 3*int+1 = 2_482_111_348
  // input goes up to 1_000_000; 3*int+1 = 3_000_001
  // safe to use int ( don't overflow )
  int i, j;
  freopen("p1.1.in", "r", stdin);

  while (sscanf(gets(line), "%d %d", &i, &j)) {

    int outI(i), outJ(j), maxCicleLength(0), cicleLength;

    if ( i > j ) swap(i, j);

    while( i <= j )
    {
      unsigned int n(i);
      cicleLength = 1;

      while (n != 1 )
      {
        if (n%2 == 0) n = n>>1; // n = n/2 in bitwise operation.. much faster
        else
        {
          n = 3*n+1; // n odd.. transforms in n even.. iteration optimization
          n = n>>1;
          ++cicleLength;
        }

        ++cicleLength;
      }
      if (cicleLength > maxCicleLength) maxCicleLength = cicleLength;

      ++i;
    }

    printf("%d %d %d\n", outI, outJ, maxCicleLength);

  }
  return 0;
}