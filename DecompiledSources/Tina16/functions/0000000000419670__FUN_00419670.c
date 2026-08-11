/* Ghidra address: 00419670 */
/* Ghidra symbol: FUN_00419670 */


void FUN_00419670(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_48;
  longlong local_40 [2];
  
  if (param_2 == 0) {
    FUN_004194b0(param_1,param_3,param_4);
  }
  else if (param_3 == 0) {
    FUN_004194b0(param_1,param_2,param_4);
  }
  else if (*param_1 == param_2) {
    FUN_00419520(param_1,param_3,param_4);
  }
  else if (*param_1 == param_3) {
    lVar2 = *(longlong *)(param_2 + -8);
    lVar3 = *(longlong *)(param_3 + -8);
    lVar1 = lVar2 + lVar3;
    lVar7 = param_4 + (ulonglong)*(byte *)(param_4 + 1);
    lVar5 = (longlong)*(int *)(lVar7 + 2);
    plVar4 = *(longlong **)(lVar7 + 6);
    if (plVar4 == (longlong *)0x0) {
      lVar7 = 0;
    }
    else {
      lVar7 = *plVar4;
    }
    lVar6 = lVar1 * lVar5;
    if (lVar6 / lVar1 != lVar5) {
      FUN_00410ab0((ulonglong)*(byte *)(param_4 + 1),lVar6 % lVar1);
    }
    if (lVar6 + 0x10 < 0) {
      FUN_00410ab0();
    }
    local_48 = 0;
    local_40[0] = lVar1;
    FUN_00418e30(&local_48,param_4,1,local_40);
    if (lVar7 == 0) {
      FUN_00409a70(param_2,local_48,lVar2 * lVar5);
      FUN_00409a70(param_3,local_48 + lVar2 * lVar5,lVar3 * lVar5);
    }
    else {
      FUN_00418240(local_48,param_2,lVar7,lVar2);
      FUN_00418240(local_48 + lVar2 * lVar5,param_3,lVar7,lVar3);
    }
    FUN_00419430(param_1,param_4);
    *param_1 = local_48;
  }
  else {
    FUN_004194b0(param_1,param_2,param_4);
    FUN_00419520(param_1,param_3,param_4);
  }
  return;
}

