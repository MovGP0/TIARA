/* Ghidra address: 00c46ba0 */
/* Ghidra symbol: FUN_00c46ba0 */


undefined4 FUN_00c46ba0(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 unaff_ESI;
  longlong lVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_004ba100(param_1,param_2,param_3);
  }
  else {
    for (; 0 < param_3; param_3 = param_3 - (int)lVar3) {
      lVar1 = FUN_004b6da0(param_1);
      lVar3 = (longlong)param_3;
      if (param_1[5] - lVar1 < (longlong)param_3) {
        lVar3 = param_1[5] - lVar1;
      }
      lVar1 = FUN_004b6da0(param_1);
      FUN_00409a70(param_2,param_1[1] + lVar1,lVar3);
      lVar1 = FUN_004b6da0(param_1);
      FUN_004b6dc0(param_1,lVar1 + lVar3);
      lVar1 = FUN_004b6da0(param_1);
      lVar2 = (**(code **)*param_1)(param_1);
      if (lVar2 <= lVar1) {
        FUN_004b6dc0(param_1,0);
      }
      param_2 = param_2 + lVar3;
    }
  }
  return unaff_ESI;
}

