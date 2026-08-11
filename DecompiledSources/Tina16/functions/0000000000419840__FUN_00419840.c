/* Ghidra address: 00419840 */
/* Ghidra symbol: FUN_00419840 */


void FUN_00419840(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_50;
  longlong local_40 [2];
  
  if ((((*param_1 != 0) && (lVar4 = *(longlong *)(*param_1 + -8), -1 < param_2)) &&
      (param_2 < lVar4)) && (0 < param_3)) {
    local_50 = (lVar4 - param_2) - param_3;
    if (local_50 < 0) {
      local_50 = 0;
    }
    lVar2 = param_4 + (ulonglong)*(byte *)(param_4 + 1);
    lVar3 = (longlong)*(int *)(lVar2 + 2);
    plVar1 = *(longlong **)(lVar2 + 6);
    if (plVar1 == (longlong *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = *plVar1;
    }
    lVar5 = *param_1 + param_2 * lVar3;
    lVar4 = *param_1 + (lVar4 - local_50) * lVar3;
    if (lVar2 == 0) {
      FUN_00409a70(lVar4,lVar5,local_50 * lVar3);
    }
    else {
      lVar6 = local_50;
      if (0 < local_50) {
        do {
          FUN_00418240(lVar5,lVar4,lVar2,1);
          lVar5 = lVar5 + lVar3;
          lVar4 = lVar4 + lVar3;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
    }
    local_40[0] = param_2 + local_50;
    FUN_00418e30(param_1,param_4,1,local_40);
  }
  return;
}

