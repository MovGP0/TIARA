/* Ghidra address: 00da9f70 */
/* Ghidra symbol: FUN_00da9f70 */


void FUN_00da9f70(double param_1,double param_2,double param_3,double param_4,double *param_5,
                 undefined8 *param_6)

{
  *param_5 = param_1;
  *param_6 = 0x3ff0000000000000;
  if (param_2 - param_4 <= param_1) {
    if (param_2 + param_4 <= param_1) {
      if (param_1 <= param_3 + param_4) {
        if (param_3 - param_4 < param_1) {
          FUN_00daa300(0x3ff0000000000000,param_3,param_3,param_4,0x3ff0000000000000,0,param_5,
                       param_6);
        }
      }
      else {
        *param_5 = param_3;
        *param_6 = 0;
      }
    }
    else {
      FUN_00daa300(0x3ff0000000000000,param_2,param_2,param_4,0,0x3ff0000000000000,param_5,param_6);
    }
  }
  else {
    *param_5 = param_2;
    *param_6 = 0;
  }
  return;
}

