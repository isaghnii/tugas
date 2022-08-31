#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int vbak;
   int r;
   int phi;
   int t;
   int hasil;
   int z;
   int x;
   int y;
   int vndon;

   phi =3.14;
   raptor_prompt_variable_zzyz ="Masukan panjang bak : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   raptor_prompt_variable_zzyz ="Masukan lebar bak : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y;
   raptor_prompt_variable_zzyz ="Masukan tinggi bak : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> z;
   raptor_prompt_variable_zzyz ="Masukkan jari jari tandon : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> r;
   raptor_prompt_variable_zzyz ="Masukkan tinggi tandon : ";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> t;
   vndon =phi*r*r*t;
   vbak =x*y*z;
   cout << vbak << endl;   cout << vndon << endl;   hasil =vbak+vndon;
   cout << hasil << endl;
   return 0;
}
