/* Ghidra address: 00b509a0 */
/* Ghidra symbol: FUN_00b509a0 */


void FUN_00b509a0(longlong param_1,longlong param_2)

{
  FUN_00b508a0(param_1,*(undefined8 *)(param_2 + 0x30));
  FUN_00b50760(param_1,*(undefined1 *)(param_2 + 0x3c));
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  (**(code **)**(undefined8 **)(param_1 + 0x10))(*(undefined8 **)(param_1 + 0x10),param_1);
  return;
}

