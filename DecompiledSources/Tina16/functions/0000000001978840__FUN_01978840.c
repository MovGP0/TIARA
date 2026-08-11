/* Ghidra address: 01978840 */
/* Ghidra symbol: FUN_01978840 */


void FUN_01978840(longlong param_1,char param_2)

{
  *(char *)(param_1 + 0x700) = param_2;
  if (param_2 != '\0') {
    *(undefined1 *)(*(longlong *)(param_1 + 0x6d8) + 0x1e8) = 1;
  }
  return;
}

