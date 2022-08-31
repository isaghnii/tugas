#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string layanan;
   int jarak;
   int total_biaya;

   raptor_prompt_variable_zzyz ="Pilih layanan GOJEK (goride/gocar)";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> layanan;
   if (layanan=="goride")
   {
      raptor_prompt_variable_zzyz ="Pilih Jarak (5,10,15)km";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> jarak;
      if (jarak<=5)
      {
         total_biaya =(2000*jarak)+5000;
         cout << total_biaya << endl;      }
      else
      {
         if (jarak<=10)
         {
            total_biaya =(2500*jarak)+7500;
            cout << total_biaya << endl;         }
         else
         {
            if (jarak<=15)
            {
               total_biaya =(3000*jarak)+10000;
               cout << total_biaya << endl;            }
            else
            {
               if (jarak>15)
               {
                  cout << "Maaf Proses Ditolak" << endl;               }
               else
               {
               }
            }
         }
      }
   }
   else
   {
      if (layanan=="gocar")
      {
         raptor_prompt_variable_zzyz ="Pilih Jarak 1-15 km";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> jarak;
         if (jarak<=5)
         {
            total_biaya =(3000*jarak)+15000;
            cout << "Total Biaya :"+total_biaya << endl;         }
         else
         {
            if (jarak<=10)
            {
               total_biaya =(4500*jarak)+17500;
               cout << total_biaya << endl;            }
            else
            {
               if (jarak<=15)
               {
                  total_biaya =(5000*jarak)+20000;
                  cout << total_biaya << endl;               }
               else
               {
                  if (jarak>15)
                  {
                     cout << "Maaf Proses Ditolak" << endl;                  }
                  else
                  {
                  }
               }
            }
         }
      }
      else
      {
      }
   }

   return 0;
}
