#include "simpletools.h"                     
#include "abdrive360.h"                  

int main(){
  drive_goto(187, 187); //one 60.96cm which is 2ft divided by 0.325cm
  drive_goto(26, -25); // turn right 90
  
  drive_goto(187, 187); 
  drive_goto(26, -25); 
  
  drive_goto(187, 187); 
  drive_goto(26, -25); 
  
  drive_goto(187, 187);
  drive_goto(26, -25); 
}//end main