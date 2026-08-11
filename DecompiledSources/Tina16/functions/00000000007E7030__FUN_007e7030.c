/* Ghidra address: 007e7030 */
/* Ghidra symbol: FUN_007e7030 */


void FUN_007e7030(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x78) != param_2) {
    *(char *)(param_1 + 0x78) = param_2;
    *(undefined1 *)(param_1 + 0x91) = 0;
    FUN_007e6540();
  }
  return;
}

