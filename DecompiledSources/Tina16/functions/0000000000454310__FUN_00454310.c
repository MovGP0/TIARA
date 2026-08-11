/* Ghidra address: 00454310 */
/* Ghidra symbol: FUN_00454310 */


void FUN_00454310(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(longlong *)(param_1 + 8) != 0) {
    iVar2 = *(int *)(*(longlong *)(param_1 + 8) + -4);
  }
  iVar1 = (iVar2 * 3) / 2;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar1 < iVar2) {
    iVar1 = iVar2 * 2;
  }
  if (*(int *)(param_1 + 0x14) < iVar1) {
    iVar1 = *(int *)(param_1 + 0x14);
  }
  if (iVar1 < 0) {
    iVar1 = iVar2;
  }
  FUN_00455840(param_1,iVar1);
  return;
}

