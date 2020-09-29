#include <iostream>
using namespace std;

int main()
{
   int i = 10;
   int &ii = i;

   cout << i << endl;
   cout << ii << endl;
   cout << &i << endl;
   cout << &ii << endl;
}
