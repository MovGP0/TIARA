/* Ghidra address: 01106ce0 */
/* Ghidra symbol: FUN_01106ce0 */


void FUN_01106ce0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  FUN_00414ad0(param_1 + 8,*(undefined8 *)(param_2 + 8));
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)(param_2 + 0x2a);
  *(undefined1 *)(param_1 + 0x2b) = *(undefined1 *)(param_2 + 0x2b);
  *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 0x2c);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_2 + 0x2e);
  return;
}

