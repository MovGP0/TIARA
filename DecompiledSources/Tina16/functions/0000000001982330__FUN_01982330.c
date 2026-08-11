/* Ghidra address: 01982330 */
/* Ghidra symbol: FUN_01982330 */


void FUN_01982330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  *(bool *)param_3 = *(int *)(param_1 + 0x6c8) == *(int *)(*(longlong *)(param_1 + 0x6c0) + 0x4e0);
  return;
}

