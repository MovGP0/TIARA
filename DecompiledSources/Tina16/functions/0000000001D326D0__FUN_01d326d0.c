/* Ghidra address: 01d326d0 */
/* Ghidra symbol: FUN_01d326d0 */


void FUN_01d326d0(longlong param_1,undefined8 param_2,int param_3)

{
  if (0 < param_3) {
    FUN_004b6dc0(param_2,0);
    FUN_004b8ba0(*(undefined8 *)(param_1 + 0x10),param_2,(longlong)param_3);
  }
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + param_3;
  return;
}

