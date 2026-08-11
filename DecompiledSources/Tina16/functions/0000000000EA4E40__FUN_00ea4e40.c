/* Ghidra address: 00ea4e40 */
/* Ghidra symbol: FUN_00ea4e40 */


void FUN_00ea4e40(longlong param_1,int param_2)

{
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  else {
    *(int *)(param_1 + 0x28) = param_2 + -1;
  }
  return;
}

