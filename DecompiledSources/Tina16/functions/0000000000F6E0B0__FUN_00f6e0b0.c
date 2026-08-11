/* Ghidra address: 00f6e0b0 */
/* Ghidra symbol: FUN_00f6e0b0 */


void FUN_00f6e0b0(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x18),(longlong)(*(int *)(param_1 + 0x2c) * 8));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20),(longlong)(*(int *)(param_1 + 0x2c) * 8));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x78));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x80));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

