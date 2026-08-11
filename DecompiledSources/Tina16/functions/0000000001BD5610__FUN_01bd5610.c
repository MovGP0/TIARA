/* Ghidra address: 01bd5610 */
/* Ghidra symbol: FUN_01bd5610 */


int FUN_01bd5610(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x508) * 2;
  for (lVar1 = FUN_01c01290(param_1); lVar1 != 0; lVar1 = FUN_01c01690(param_1,lVar1)) {
    iVar2 = iVar2 + *(int *)(*(longlong *)(lVar1 + 0x80) + 0x98) + *(int *)(param_1 + 0x4c4);
  }
  return iVar2;
}

