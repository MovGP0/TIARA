/* Ghidra address: 00b60970 */
/* Ghidra symbol: FUN_00b60970 */


void FUN_00b60970(longlong param_1)

{
  if (*(char *)(param_1 + 0x35) == '\0') {
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  else {
    FUN_00b429a0(*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 8),
                 *(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(param_1 + 0x44) = 1;
  }
  return;
}

