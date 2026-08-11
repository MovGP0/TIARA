/* Ghidra address: 004b3390 */
/* Ghidra symbol: FUN_004b3390 */


void FUN_004b3390(longlong *param_1)

{
  *(int *)(param_1 + 5) = (int)param_1[5] + -1;
  if ((int)param_1[5] == 0) {
    (**(code **)(*param_1 + 0x68))(param_1,0);
  }
  return;
}

