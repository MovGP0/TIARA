/* Ghidra address: 01d0f0e0 */
/* Ghidra symbol: FUN_01d0f0e0 */


void FUN_01d0f0e0(longlong param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14)) {
    FUN_01d0f420(param_1,*(int *)(param_1 + 0x10) + 100);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 8) + (longlong)*(int *)(param_1 + 0x10) * 8) = param_2;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  return;
}

