/* Ghidra address: 019797e0 */
/* Ghidra symbol: FUN_019797e0 */


void FUN_019797e0(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  *(undefined1 *)(param_1 + 0x80) = *(undefined1 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x81) = *(undefined1 *)(param_2 + 0x81);
  FUN_00414ad0(param_1 + 0x88,*(undefined8 *)(param_2 + 0x88));
  FUN_00414ad0(param_1 + 0x98,*(undefined8 *)(param_2 + 0x98));
  FUN_00414ad0(param_1 + 0xa0,*(undefined8 *)(param_2 + 0xa0));
  FUN_00414ad0(param_1 + 0xa8,*(undefined8 *)(param_2 + 0xa8));
  return;
}

