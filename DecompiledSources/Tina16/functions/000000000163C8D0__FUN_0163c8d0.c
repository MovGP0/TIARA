/* Ghidra address: 0163c8d0 */
/* Ghidra symbol: FUN_0163c8d0 */


void FUN_0163c8d0(longlong param_1,longlong param_2)

{
  *(undefined8 *)(param_1 + 0x5b0) = *(undefined8 *)(param_1 + 0x60);
  *(longlong *)(param_2 + 0x13988) = param_1;
  FUN_01631c60(*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0xb0));
  if (*(char *)(param_1 + 0xa2) != '\0') {
    FUN_01638040(param_1,*(undefined8 *)(param_1 + 0xb0));
    *(undefined1 *)(param_1 + 0xa2) = 0;
  }
  return;
}

