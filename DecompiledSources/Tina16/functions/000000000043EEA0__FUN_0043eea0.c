/* Ghidra address: 0043eea0 */
/* Ghidra symbol: FUN_0043eea0 */


undefined8 * FUN_0043eea0(undefined8 *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  FUN_00414480(param_1);
  if ((*param_2 != 0) && (sVar3 = (short)param_3, *(short *)*param_2 == sVar3)) {
    *param_2 = *param_2 + 2;
    iVar6 = 1;
    lVar4 = *param_2;
    lVar1 = FUN_0044fe60(*param_2,param_3);
    *param_2 = lVar1;
    while ((*param_2 != 0 && (*param_2 = *param_2 + 2, *(short *)*param_2 == sVar3))) {
      *param_2 = *param_2 + 2;
      iVar6 = iVar6 + 1;
      lVar1 = FUN_0044fe60(*param_2,param_3);
      *param_2 = lVar1;
    }
    lVar1 = *param_2;
    if (*param_2 == 0) {
      lVar2 = FUN_00442440(lVar4);
      *param_2 = lVar2;
    }
    lVar2 = *param_2 - lVar4;
    lVar5 = (longlong)(int)(uint)(lVar1 == 0);
    if ((0 < lVar2 / 2 + -1 + lVar5) && (0 < (lVar2 / 2 - (longlong)iVar6) + lVar5)) {
      if (iVar6 == 1) {
        FUN_00414740(param_1,lVar4,lVar2 / 2 + -1 + lVar5);
      }
      else {
        FUN_004169f0(param_1,(lVar2 / 2 - (longlong)iVar6) + lVar5);
        lVar2 = FUN_00416740(*param_1);
        lVar5 = FUN_0044fe60(lVar4,param_3);
        *param_2 = lVar5;
        while ((*param_2 != 0 && (*param_2 = *param_2 + 2, *(short *)*param_2 == sVar3))) {
          FUN_00409a70(lVar4,lVar2,((*param_2 - lVar4) / 2) * 2);
          lVar2 = lVar2 + ((*param_2 - lVar4) / 2) * 2;
          *param_2 = *param_2 + 2;
          lVar4 = *param_2;
          lVar5 = FUN_0044fe60(*param_2,param_3);
          *param_2 = lVar5;
        }
        if (*param_2 == 0) {
          lVar5 = FUN_00442440(lVar4);
          *param_2 = lVar5;
        }
        FUN_00409a70(lVar4,lVar2,
                     ((*param_2 - lVar4) / 2 + -1 + (longlong)(int)(uint)(lVar1 == 0)) * 2);
      }
    }
  }
  return param_1;
}

