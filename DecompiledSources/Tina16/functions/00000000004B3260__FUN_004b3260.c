/* Ghidra address: 004b3260 */
/* Ghidra symbol: FUN_004b3260 */


void FUN_004b3260(longlong *param_1)

{
  if ((int)param_1[5] == 0) {
    (**(code **)(*param_1 + 0x68))(param_1,1);
  }
  *(int *)(param_1 + 5) = (int)param_1[5] + 1;
  return;
}

