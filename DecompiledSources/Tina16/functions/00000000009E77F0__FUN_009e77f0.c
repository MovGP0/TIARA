/* Ghidra address: 009e77f0 */
/* Ghidra symbol: FUN_009e77f0 */


void FUN_009e77f0(longlong *param_1)

{
  *(int *)(param_1 + 4) = (int)param_1[4] + -1;
  if ((int)param_1[4] == 0) {
    (**(code **)(*param_1 + 0x60))(param_1,0);
  }
  return;
}

