#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string kartu;
   string bonus;

   raptor_prompt_variable_zzyz ="Silahkan pilih kartu anda (gold or premium)";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kartu;
   if (kartu=="gold")
   {
      raptor_prompt_variable_zzyz ="Pilih bonus anda(Ambil/Tukar)";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus;
      if (bonus=="ambil")
      {
         cout << "Seamat bonus anda telah diambil" << endl;      }
      else
      {
         if (bonus=="tukar")
         {
            cout << "SIP bonus anda sudah masuk" << endl;         }
         else
         {
         }
      }
   }
   else
   {
      if (kartu=="premium")
      {
         raptor_prompt_variable_zzyz ="pilih bonus anda (ambil/tukar)";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> bonus;
         if (bonus=="ambil")
         {
            cout << "selamat bonus telah diambil" << endl;         }
         else
         {
            if (bonus=="tukar")
            {
               cout << "sip wes mlebu" << endl;            }
            else
            {
            }
         }
      }
      else
      {
      }
   }

   return 0;
}
