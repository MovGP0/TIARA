/* Ghidra address: 00dd3790 */
/* Ghidra symbol: FUN_00dd3790 */


void FUN_00dd3790(undefined1 *param_1,undefined8 param_2,longlong param_3,double param_4,
                 double param_5)

{
  double dVar1;
  
  if (param_1[0x11] == '\0') {
    dVar1 = *(double *)(&DAT_01ed5468 + (ulonglong)(byte)param_1[6] * 8);
  }
  else {
    dVar1 = (*(double *)(&DAT_01ed5558 + (ulonglong)(byte)param_1[6] * 0x18) +
            *(double *)(&DAT_01ed5560 + (ulonglong)(byte)param_1[6] * 0x18)) / 2.0;
  }
  FUN_016ee520(param_2,*(undefined8 *)(param_3 + 0x118),*param_1,1,0);
  FUN_016ed320(param_2,*param_1,param_4 - param_5,dVar1,0);
  return;
}

