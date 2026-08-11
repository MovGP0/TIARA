/* Ghidra address: 007446f0 */
/* Ghidra symbol: FUN_007446f0 */


void FUN_007446f0(longlong param_1,int *param_2)

{
  *param_2 = *param_2 + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x328) + 0x10);
  param_2[1] = param_2[1] + *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x328) + 0x14);
  param_2[2] = param_2[2] - *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x328) + 0x18);
  param_2[3] = param_2[3] - *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x328) + 0x1c);
  return;
}

