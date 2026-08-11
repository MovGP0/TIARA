/* Ghidra address: 00711a70 */
/* Ghidra symbol: FUN_00711a70 */


undefined8 * FUN_00711a70(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  int iVar5;
  
  FUN_00414520(param_1);
  if ((*param_2 != 0) && (sVar3 = (short)param_3, *(short *)*param_2 == sVar3)) {
    *param_2 = *param_2 + 2;
    iVar5 = 1;
    lVar4 = *param_2;
    lVar1 = FUN_00711390(*param_2,param_3);
    *param_2 = lVar1;
    while ((*param_2 != 0 && (*param_2 = *param_2 + 2, *(short *)*param_2 == sVar3))) {
      *param_2 = *param_2 + 2;
      iVar5 = iVar5 + 1;
      lVar1 = FUN_00711390(*param_2,param_3);
      *param_2 = lVar1;
    }
    if (*param_2 == 0) {
      lVar1 = FUN_007112c0(lVar4);
      *param_2 = lVar1;
    }
    lVar1 = *param_2 - lVar4;
    if ((1 < lVar1 / 2) && (lVar1 / 2 != (longlong)iVar5)) {
      if (iVar5 == 1) {
        FUN_004147a0(param_1,lVar4,lVar1 / 2 - 1U & 0xffffffff);
      }
      else {
        FUN_00416660(param_1,lVar1 / 2 - (longlong)iVar5);
        lVar1 = FUN_00415f70(*param_1);
        lVar2 = FUN_00711390(lVar4,param_3);
        *param_2 = lVar2;
        while ((*param_2 != 0 && (*param_2 = *param_2 + 2, *(short *)*param_2 == sVar3))) {
          FUN_00409a70(lVar4,lVar1,((*param_2 - lVar4) / 2) * 2);
          lVar1 = lVar1 + ((*param_2 - lVar4) / 2) * 2;
          *param_2 = *param_2 + 2;
          lVar4 = *param_2;
          lVar2 = FUN_00711390(*param_2,param_3);
          *param_2 = lVar2;
        }
        if (*param_2 == 0) {
          lVar2 = FUN_007112c0(lVar4);
          *param_2 = lVar2;
        }
        FUN_00409a70(lVar4,lVar1,((*param_2 - lVar4) / 2 + -1) * 2);
      }
    }
  }
  return param_1;
}

