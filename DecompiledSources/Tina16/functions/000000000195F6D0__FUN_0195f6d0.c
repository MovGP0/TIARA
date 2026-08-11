/* Ghidra address: 0195f6d0 */
/* Ghidra symbol: FUN_0195f6d0 */


void FUN_0195f6d0(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  else if (*(char *)(param_1 + 0x340) == '\0') {
    *(undefined1 *)(param_1 + 0x340) = 1;
  }
  return;
}

