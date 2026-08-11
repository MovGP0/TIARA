/* Ghidra address: 00a2a1d0 */
/* Ghidra symbol: FUN_00a2a1d0 */


void FUN_00a2a1d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = FUN_00a2a190(param_1,iVar1);
      if (*(int *)(lVar2 + 0xc) < 1) {
        (**(code **)(*param_1 + 0x98))(param_1,iVar1);
        FUN_00410f20(lVar2);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return;
}

