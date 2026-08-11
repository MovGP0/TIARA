/* Ghidra address: 0108b8c0 */
/* Ghidra symbol: FUN_0108b8c0 */


void FUN_0108b8c0(longlong param_1,char param_2,byte param_3)

{
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0xbd0) = 0;
  }
  else {
    *(byte *)(param_1 + 0xbd0) = *(byte *)(param_1 + 0xbd6) | param_3;
  }
  if ((*(char *)(param_1 + 0xbd0) != '\0') && (*(longlong *)(param_1 + 0x4d20) != 0)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x4d20) + 0x22c8) = 0;
  }
  return;
}

