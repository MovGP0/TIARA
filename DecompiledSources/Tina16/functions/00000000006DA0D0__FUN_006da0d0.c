/* Ghidra address: 006da0d0 */
/* Ghidra symbol: FUN_006da0d0 */


void FUN_006da0d0(longlong param_1,int param_2)

{
  if (param_2 < *(int *)(param_1 + 0x24)) {
    param_2 = *(int *)(param_1 + 0x24);
  }
  if (10000 < param_2) {
    param_2 = 10000;
  }
  *(int *)(param_1 + 0x28) = param_2;
  FUN_006da1a0(param_1,*(undefined4 *)(param_1 + 0x20));
  return;
}

