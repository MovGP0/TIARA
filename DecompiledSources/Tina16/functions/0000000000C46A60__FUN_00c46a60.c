/* Ghidra address: 00c46a60 */
/* Ghidra symbol: FUN_00c46a60 */


int FUN_00c46a60(undefined8 *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int unaff_EDI;
  
  lVar1 = (**(code **)*param_1)(param_1);
  if (lVar1 == 0) {
    lVar1 = FUN_004b6da0(param_1);
    FUN_00409a70(param_1[1] + lVar1,param_2,(longlong)param_3);
    lVar1 = FUN_004b6da0(param_1);
    FUN_004b6dc0(param_1,lVar1 + param_3);
    unaff_EDI = param_3;
  }
  else if (*(char *)(param_1 + 6) == '\0') {
    unaff_EDI = FUN_004b9c30(param_1,param_2,param_3);
  }
  else {
    for (; 0 < param_3; param_3 = param_3 - (int)lVar1) {
      lVar2 = FUN_004b6da0(param_1);
      lVar1 = (longlong)param_3;
      if (param_1[5] - lVar2 < (longlong)param_3) {
        lVar1 = param_1[5] - lVar2;
      }
      lVar2 = FUN_004b6da0(param_1);
      FUN_00409a70(param_1[1] + lVar2,param_2,lVar1);
      lVar2 = FUN_004b6da0(param_1);
      FUN_004b6dc0(param_1,lVar2 + lVar1);
      lVar2 = FUN_004b6da0(param_1);
      lVar3 = (**(code **)*param_1)(param_1);
      if (lVar3 <= lVar2) {
        FUN_004b6dc0(param_1,0);
      }
      param_2 = param_2 + lVar1;
    }
  }
  return unaff_EDI;
}

