/* Ghidra address: 00848a70 */
/* Ghidra symbol: FUN_00848a70 */


void FUN_00848a70(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x4e0) != param_2) {
    if (param_2 < 1) {
      param_2 = 1;
    }
    if (param_2 <= *(int *)(param_1 + 0x4c0)) {
      FUN_00848790(param_1,param_2 + -1);
    }
    FUN_008428d0(param_1,*(undefined4 *)(param_1 + 0x4a4),param_2);
  }
  return;
}

