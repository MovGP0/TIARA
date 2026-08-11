/* Ghidra address: 00652f10 */
/* Ghidra symbol: FUN_00652f10 */


void FUN_00652f10(longlong param_1,int *param_2)

{
  *param_2 = *param_2 + *(int *)(*(longlong *)(param_1 + 0x328) + 0x10);
  param_2[1] = param_2[1] + *(int *)(*(longlong *)(param_1 + 0x328) + 0x14);
  param_2[2] = param_2[2] - *(int *)(*(longlong *)(param_1 + 0x328) + 0x18);
  param_2[3] = param_2[3] - *(int *)(*(longlong *)(param_1 + 0x328) + 0x1c);
  return;
}

