/* Ghidra address: 00449150 */
/* Ghidra symbol: FUN_00449150 */


void FUN_00449150(longlong param_1)

{
  if (*(char *)(param_1 + 0x3b) == '\0') {
    FUN_00448e20(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x290),param_1 + 0x4e,
                 param_1 + 0x4c,param_1 + 0x4a);
    *(undefined1 *)(param_1 + 0x3b) = 1;
  }
  return;
}

