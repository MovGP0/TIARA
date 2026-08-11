/* Ghidra address: 01779380 */
/* Ghidra symbol: FUN_01779380 */


void FUN_01779380(longlong param_1,longlong param_2)

{
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  FUN_00414ad0(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10));
  FUN_00414ad0(param_1 + 0x18,*(undefined8 *)(param_2 + 0x18));
  FUN_00414ad0(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20));
  return;
}

