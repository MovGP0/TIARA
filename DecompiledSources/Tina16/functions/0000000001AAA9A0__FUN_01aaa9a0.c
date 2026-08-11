/* Ghidra address: 01aaa9a0 */
/* Ghidra symbol: FUN_01aaa9a0 */


void FUN_01aaa9a0(longlong param_1,int param_2,undefined4 *param_3)

{
  *(undefined1 *)(param_1 + 0x13a2a) = 0;
  if (0 < param_2) {
    do {
      FUN_01aa8f70(param_1,*param_3);
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

