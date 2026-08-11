/* Ghidra address: 00594fc0 */
/* Ghidra symbol: FUN_00594fc0 */


void FUN_00594fc0(ulonglong param_1,ulonglong param_2,undefined8 param_3,int param_4,
                 longlong param_5)

{
  longlong lVar1;
  longlong lVar2;
  
  if (0 < param_5) {
    if (param_2 < param_1) {
      lVar1 = param_1 + (param_5 + -1) * (longlong)param_4;
      lVar2 = param_2 + (param_5 + -1) * (longlong)param_4;
      for (; 0 < param_5; param_5 = param_5 + -1) {
        FUN_004185b0(lVar1,lVar2,param_3,1);
        lVar1 = lVar1 - param_4;
        lVar2 = lVar2 - param_4;
      }
    }
    else {
      FUN_004185b0(param_1,param_2,param_3,param_5);
    }
  }
  return;
}

