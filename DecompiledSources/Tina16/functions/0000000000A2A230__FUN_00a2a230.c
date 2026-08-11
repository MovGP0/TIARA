/* Ghidra address: 00a2a230 */
/* Ghidra symbol: FUN_00a2a230 */


void FUN_00a2a230(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      lVar2 = FUN_00a2a190(param_1,iVar1);
      if ((param_2 < *(int *)(lVar2 + 8)) && (*(int *)(lVar2 + 0xc) < 1)) {
        (**(code **)(*param_1 + 0x98))(param_1,iVar1);
        FUN_00410f20(lVar2);
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  *(int *)(param_1 + 0xf) = param_2;
  return;
}

