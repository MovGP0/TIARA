/* Ghidra address: 00c3cd90 */
/* Ghidra symbol: FUN_00c3cd90 */


void FUN_00c3cd90(longlong param_1,longlong param_2,longlong param_3)

{
  FUN_00415020(param_2 + 0xc,param_3 + 0xc,0x10);
  *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_3 + 0x1d);
  *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)(param_3 + 0x1e);
  *(undefined1 *)(param_2 + 0x25) = *(undefined1 *)(param_3 + 0x25);
  *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(param_3 + 0x1f);
  if (*(char *)(param_1 + 0xe0) != '\0') {
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_3 + 0x20);
    *(undefined2 *)(param_2 + 0x21) = *(undefined2 *)(param_3 + 0x21);
    *(undefined2 *)(param_2 + 0x23) = *(undefined2 *)(param_3 + 0x23);
    *(undefined8 *)(param_2 + 0x26) = *(undefined8 *)(param_3 + 0x26);
    *(undefined8 *)(param_2 + 0x2e) = *(undefined8 *)(param_3 + 0x2e);
    *(undefined4 *)(param_2 + 0x36) = *(undefined4 *)(param_3 + 0x36);
  }
  return;
}

