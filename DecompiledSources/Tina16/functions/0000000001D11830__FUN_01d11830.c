/* Ghidra address: 01d11830 */
/* Ghidra symbol: FUN_01d11830 */


void FUN_01d11830(longlong *param_1,longlong param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (*param_1 == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = FUN_00442b70(*param_1);
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
    bVar1 = (longlong)(ulonglong)uVar2 < (longlong)(iVar3 + 1);
  }
  if (bVar1) {
    FUN_00442c30(*param_1);
    iVar3 = 0;
    if (local_res10[0] != 0) {
      iVar3 = *(int *)(local_res10[0] + -4);
    }
    lVar4 = FUN_00442b60(iVar3 + 1);
    *param_1 = lVar4;
  }
  lVar4 = FUN_00442620(*param_1,local_res10[0]);
  *param_1 = lVar4;
  FUN_00414480(local_res10);
  return;
}

