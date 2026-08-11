/* Ghidra address: 00415bd0 */
/* Ghidra symbol: FUN_00415bd0 */


void FUN_00415bd0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 local_30;
  undefined2 local_2a;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + -4);
  }
  if (0 < iVar2) {
    local_2a = *(undefined2 *)(param_1 + -0xc);
    iVar3 = 0;
    lVar1 = *param_2;
    if (lVar1 != 0) {
      iVar3 = *(int *)(lVar1 + -4);
    }
    if (0 < iVar3) {
      local_2a = *(undefined2 *)(lVar1 + -0xc);
    }
    if (param_3 < 1) {
      local_30 = 0;
    }
    else {
      local_30 = param_3 + -1;
      if (iVar3 < param_3 + -1) {
        local_30 = iVar3;
      }
    }
    if (iVar3 + iVar2 < 0) {
      FUN_00410ab0();
    }
    FUN_00415d10(param_2,iVar3 + iVar2,local_2a);
    if (local_30 < iVar3) {
      FUN_00409a70(*param_2 + (longlong)local_30,*param_2 + (longlong)(local_30 + iVar2),
                   (longlong)(iVar3 - local_30));
    }
    if (param_1 == lVar1) {
      FUN_00409a70(*param_2,*param_2 + (longlong)local_30,(longlong)iVar2);
    }
    else {
      FUN_00409a70(param_1,*param_2 + (longlong)local_30,(longlong)iVar2);
    }
  }
  return;
}

