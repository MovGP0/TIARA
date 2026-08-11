/* Ghidra address: 00a68280 */
/* Ghidra symbol: FUN_00a68280 */


void FUN_00a68280(longlong param_1)

{
  if (*(short *)(param_1 + 0x10) == 0x7b) {
    FUN_00a633b0(param_1,&DAT_00a682d8,&LAB_00a682e8);
    if (*(short *)(param_1 + 0x10) == 0x7d) {
      FUN_00a62d70(param_1,0);
    }
    if (*(short *)(param_1 + 0x10) == 10) {
      *(undefined2 *)(param_1 + 0x10) = 0x20;
    }
  }
  return;
}

