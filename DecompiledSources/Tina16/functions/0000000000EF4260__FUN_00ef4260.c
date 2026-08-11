/* Ghidra address: 00ef4260 */
/* Ghidra symbol: FUN_00ef4260 */


void FUN_00ef4260(undefined1 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x94) == '\0') {
    *(undefined1 *)(param_2 + 0x94) = param_1;
    *(undefined1 *)(param_2 + 0x92) = 1;
    *(undefined1 *)(param_2 + 0x93) = 1;
  }
  return;
}

