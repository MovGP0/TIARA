/* Ghidra address: 00a9dac0 */
/* Ghidra symbol: FUN_00a9dac0 */


void FUN_00a9dac0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_00a9d940(param_1);
  iVar1 = ((*(int *)(param_1 + 0x70) - iVar1) - *(int *)(*(longlong *)(param_1 + 0x60) + 0x484)) -
          *(int *)(*(longlong *)(param_1 + 0x60) + 0x4c8);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  *(int *)(*(longlong *)(param_1 + 0x60) + 0x47c) = iVar1;
  return;
}

