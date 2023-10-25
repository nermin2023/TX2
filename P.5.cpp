
#include <iostream>

using namespace std;

int main()
{
    int l ;
    int R ;
   cout << "enter your start  number\n";
 cin >> l;
     cout << "enter your end number\n";

   cin >> R;
  cout<< "  lucky   "<<  l << " and " << R <<endl;
   for (int l = 1; l <= 10; l++)
   {
       for (int R = 1; R <= l; R++)
       {
           if (l % 4 == 0 && l % 7 == 0)
           {
               cout << "lucky ";
           }
           else
           {
               cout << "not lucky ";
           }
       }

       cout << "\n";
   }
   return 0 ;
}
