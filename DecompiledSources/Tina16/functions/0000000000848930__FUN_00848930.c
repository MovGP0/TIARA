/* Ghidra address: 00848930 */
/* Ghidra symbol: FUN_00848930 */


void FUN_00848930(longlong *param_1,int param_2)

{
  if ((int)param_1[0x9a] != param_2) {
    *(int *)(param_1 + 0x9a) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

