/* Ghidra address: 0067fdc0 */
/* Ghidra symbol: FUN_0067fdc0 */


void FUN_0067fdc0(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[0x67]) {
    *(int *)(param_1 + 0x67) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

