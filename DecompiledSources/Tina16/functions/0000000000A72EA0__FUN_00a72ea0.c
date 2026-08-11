/* Ghidra address: 00a72ea0 */
/* Ghidra symbol: FUN_00a72ea0 */


void FUN_00a72ea0(longlong param_1,longlong param_2)

{
  FUN_00414ad0(param_1 + 8,*(undefined8 *)(param_2 + 8));
  FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  return;
}

