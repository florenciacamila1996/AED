/* FCM
 * 20200611
 * IsBisiesto
*/
#include <assert.h>

bool IsBisiesto(int a);

int main(){

   assert(IsBisiesto(2020));
   assert(IsBisiesto(2400));
   assert(IsBisiesto(2019));
   assert(IsBisiesto(2300));
}
bool IsBisiesto(int a){
   bool anioBisiesto = false;
   return a and (a%4 == 0) and ((a%100 != 0) or a%400 == 0);
}
