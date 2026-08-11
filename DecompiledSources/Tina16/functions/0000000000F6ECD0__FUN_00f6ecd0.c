/* Ghidra address: 00f6ecd0 */
/* Ghidra symbol: FUN_00f6ecd0 */


void FUN_00f6ecd0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  return;
}

