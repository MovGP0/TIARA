/* Ghidra address: 00a39c40 */
/* Ghidra symbol: FUN_00a39c40 */


void FUN_00a39c40(longlong param_1,int param_2)

{
  if (param_2 < 0xffff) {
    *(undefined4 *)(param_1 + 0x154) = 0xffff;
  }
  else {
    *(int *)(param_1 + 0x154) = param_2;
  }
  return;
}

