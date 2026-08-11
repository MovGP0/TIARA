/* Ghidra address: 00c31c30 */
/* Ghidra symbol: FUN_00c31c30 */


void FUN_00c31c30(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[6]) {
    *(int *)(param_1 + 6) = param_2;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return;
}

