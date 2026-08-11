/* Ghidra address: 00c1c360 */
/* Ghidra symbol: FUN_00c1c360 */


bool FUN_00c1c360(undefined8 param_1,uint param_2,uint param_3,uint param_4,undefined1 *param_5,
                 undefined1 *param_6,undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = (param_4 & 0xff) * 0x1d + (param_3 & 0xff) * 0x96 + (param_2 & 0xff) * 0x4d < 0x7f01;
  if (bVar1) {
    *param_5 = 0;
    *param_6 = 0;
    *param_7 = 0;
  }
  else {
    *param_5 = 0xff;
    *param_6 = 0xff;
    *param_7 = 0xff;
  }
  return !bVar1;
}

