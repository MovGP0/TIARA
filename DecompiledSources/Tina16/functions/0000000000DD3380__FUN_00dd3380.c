/* Ghidra address: 00dd3380 */
/* Ghidra symbol: FUN_00dd3380 */


void FUN_00dd3380(undefined1 *param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 double param_5)

{
  undefined8 uVar1;
  
  if (param_1[0x11] == '\0') {
    uVar1 = *(undefined8 *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
  }
  else {
    uVar1 = 0x3f50624dd2f1a9fc;
  }
  FUN_016ed320(param_2,*param_1,param_4 - param_5,uVar1,0);
  return;
}

