/* Ghidra address: 01801600 */
/* Ghidra symbol: FUN_01801600 */


void FUN_01801600(longlong param_1,int param_2)

{
  *(int *)(param_1 + 0xc) = param_2;
  if (param_2 < 0x20) {
    *(undefined4 *)(param_1 + 0xc) = 0x20;
  }
  return;
}

