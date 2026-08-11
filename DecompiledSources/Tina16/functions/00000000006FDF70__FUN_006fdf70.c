/* Ghidra address: 006fdf70 */
/* Ghidra symbol: FUN_006fdf70 */


void FUN_006fdf70(longlong param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x4b8) + -4);
  }
  *(longlong *)(param_2 + 0x18) = (longlong)iVar1;
  return;
}

