/* Ghidra address: 01bd41a0 */
/* Ghidra symbol: FUN_01bd41a0 */


void FUN_01bd41a0(longlong *param_1,int param_2)

{
  if ((int)param_1[0x6d] != param_2) {
    *(int *)(param_1 + 0x6d) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

