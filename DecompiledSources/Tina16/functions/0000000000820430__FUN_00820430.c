/* Ghidra address: 00820430 */
/* Ghidra symbol: FUN_00820430 */


void FUN_00820430(longlong param_1,char param_2)

{
  if (param_2 == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  return;
}

