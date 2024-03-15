#include "simpletools.h"       
#include "abdrive360.h"      

int main() {
  drive_goto(132,132); // go straight
  drive_goto(-26,25); //turn left 90
  drive_goto(293,293); //go straight
  drive_goto(32.234, -32.234); //turning at the 67.5 angle
  drive_goto(527, 527); // go straight
  drive_goto(18.886,-18.886); // 10 degree turn
  drive_goto(140.61,140.61); // go straight
  drive_goto(26,-25); // turn right 90
  drive_goto(355,355); //go straight
  drive_goto(-26,25); //turn left 90
}//end main


