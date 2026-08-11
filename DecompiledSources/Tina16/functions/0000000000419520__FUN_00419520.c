/* Ghidra address: 00419520 */
/* Ghidra symbol: FUN_00419520 */


void FUN_00419520(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong local_60;
  longlong local_40 [2];
  
  if (param_2 != 0) {
    if (*param_1 == 0) {
      FUN_004194b0(param_1,param_2,param_3);
    }
    else {
      lVar2 = *(longlong *)(*param_1 + -8);
      lVar3 = *(longlong *)(param_2 + -8);
      lVar1 = lVar2 + lVar3;
      lVar7 = param_3 + (ulonglong)*(byte *)(param_3 + 1);
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
        FUN_00410ab0((ulonglong)*(byte *)(param_3 + 1),lVar6 % lVar1);
      }
      if (lVar6 + 0x10 < 0) {
        FUN_00410ab0();
      }
      lVar6 = *param_1;
      local_40[0] = lVar1;
      FUN_00418e30(param_1,param_3,1,local_40);
      local_60 = param_2;
      if (lVar6 == param_2) {
        local_60 = *param_1;
      }
      if (lVar7 == 0) {
        FUN_00409a70(local_60,*param_1 + lVar2 * lVar5,lVar3 * lVar5);
      }
      else {
        FUN_00418240(*param_1 + lVar2 * lVar5,local_60,lVar7,lVar3);
      }
    }
  }
  return;
}

