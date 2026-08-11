/* Ghidra address: 00daa090 */
/* Ghidra symbol: FUN_00daa090 */


void FUN_00daa090(undefined8 param_1,undefined8 param_2,double param_3,double param_4,double param_5
                 ,double *param_6,undefined8 *param_7,double *param_8,byte *param_9)

{
  double dVar1;
  byte local_39 [49];
  
  *param_9 = 0;
  dVar1 = (double)FUN_00c43520(param_1,param_2,param_3 - param_5,param_3 + param_5,param_9,
                               0x4008000000000000,0xbff0000000000000);
  *param_8 = dVar1;
  dVar1 = (double)FUN_00c43520(*param_8,param_2,param_4 - param_5,param_4 + param_5,local_39,
                               0x4008000000000000,0xbff0000000000000);
  *param_8 = dVar1;
  *param_9 = *param_9 | local_39[0];
  dVar1 = *param_8;
  *param_6 = dVar1;
  *param_7 = 0x3ff0000000000000;
  if (param_3 - param_5 <= dVar1) {
    if (param_3 + param_5 <= dVar1) {
      if (dVar1 <= param_4 + param_5) {
        if (param_4 - param_5 < dVar1) {
          FUN_00daa300(0x3ff0000000000000,param_4,param_4,param_5,0x3ff0000000000000,0,param_6,
                       param_7);
        }
      }
      else {
        *param_6 = param_4;
        *param_7 = 0;
      }
    }
    else {
      FUN_00daa300(0x3ff0000000000000,param_3,param_3,param_5,0,0x3ff0000000000000,param_6,param_7);
    }
  }
  else {
    *param_6 = param_3;
    *param_7 = 0;
  }
  return;
}

