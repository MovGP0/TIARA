/* Ghidra address: 01ca0c80 */
/* Ghidra symbol: FUN_01ca0c80 */


void FUN_01ca0c80(longlong param_1)

{
  DAT_01fe7778 = DAT_01fe7778 == '\0';
  FUN_0082a6c0(*(undefined8 *)(param_1 + 0x1508),!(bool)DAT_01fe7778);
  FUN_0064e1d0(param_1);
  FUN_007e2d20(*(undefined8 *)(param_1 + 0xac8),
               *(undefined1 *)(*(longlong *)(param_1 + 0x1508) + 0x328));
  return;
}

