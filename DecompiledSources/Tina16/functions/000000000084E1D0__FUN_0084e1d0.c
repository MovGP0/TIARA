/* Ghidra address: 0084e1d0 */
/* Ghidra symbol: FUN_0084e1d0 */


void FUN_0084e1d0(longlong param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x5f8) == '\0') {
    FUN_008441f0(param_1,param_2,param_3);
  }
  else {
    *(undefined1 *)(param_1 + 0x5f9) = 1;
  }
  if (((param_2 == *(int *)(param_1 + 0x4a8)) && (param_3 == *(int *)(param_1 + 0x4ac))) &&
     (*(int *)(param_1 + 0x5fc) == 0)) {
    FUN_0083f820(param_1);
  }
  return;
}

