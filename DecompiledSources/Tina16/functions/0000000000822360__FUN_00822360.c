/* Ghidra address: 00822360 */
/* Ghidra symbol: FUN_00822360 */


void FUN_00822360(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[0xad]) {
    *(int *)(param_1 + 0xad) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

