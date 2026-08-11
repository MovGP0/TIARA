/* Ghidra address: 01bb0a60 */
/* Ghidra symbol: FUN_01bb0a60 */


void FUN_01bb0a60(longlong param_1,undefined8 param_2)

{
  FUN_00409a70(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18),param_2,4);
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 4;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -4;
  return;
}

