/* Ghidra address: 00bfaf70 */
/* Ghidra symbol: FUN_00bfaf70 */


void FUN_00bfaf70(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x548) != param_2) {
    *(int *)(param_1 + 0x548) = param_2;
    FUN_00c0dc30(param_1,*(undefined4 *)(param_1 + 0x4cc));
  }
  return;
}

