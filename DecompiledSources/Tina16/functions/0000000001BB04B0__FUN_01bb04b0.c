/* Ghidra address: 01bb04b0 */
/* Ghidra symbol: FUN_01bb04b0 */


void FUN_01bb04b0(longlong param_1,undefined8 param_2,char param_3)

{
  FUN_01bb0040(param_1,param_2,1);
  FUN_01baffe0(param_1,1);
  *(bool *)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18)) = param_3 != '\0';
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

