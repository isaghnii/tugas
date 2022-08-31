#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string lampu;

   raptor_prompt_variable_zzyz ="Apakah lampu menyala Hijau? hijau/merah";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> lampu;
   if (lampu=="hijau")
   {
      cout << "silahkan jalan" << endl;   }
   else
   {
      if (lampu=="merah")
      {
         cout << "Anda Harus Berhnti" << endl;      }
      else
      {
      }
   }

   return 0;
}
