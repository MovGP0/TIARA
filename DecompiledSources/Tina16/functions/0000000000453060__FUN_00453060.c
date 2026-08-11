/* Ghidra address: 00453060 */
/* Ghidra symbol: FUN_00453060 */


longlong FUN_00453060(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  if (iVar3 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar3;
    iVar2 = 0;
    if (*(longlong *)(param_1 + 8) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 8) + -4);
    }
    if (iVar2 < *(int *)(param_1 + 0x10)) {
      FUN_00454310(param_1);
    }
    FUN_00409a70(param_2,*(longlong *)(param_1 + 8) + (longlong)iVar1 * 2,(longlong)(iVar3 * 2));
  }
  return param_1;
}

