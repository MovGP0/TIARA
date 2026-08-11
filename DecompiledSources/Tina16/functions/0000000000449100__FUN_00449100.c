/* Ghidra address: 00449100 */
/* Ghidra symbol: FUN_00449100 */


void FUN_00449100(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x88);
  while (**(short **)(param_1 + 0x88) == *(short *)(param_1 + 0x40)) {
    *(longlong *)(param_1 + 0x88) = *(longlong *)(param_1 + 0x88) + 2;
  }
  *(int *)(param_1 + 0x3c) = (int)((*(longlong *)(param_1 + 0x88) - lVar1) / 2) + 1;
  return;
}

