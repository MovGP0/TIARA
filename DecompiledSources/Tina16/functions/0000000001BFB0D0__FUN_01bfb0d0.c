/* Ghidra address: 01bfb0d0 */
/* Ghidra symbol: FUN_01bfb0d0 */


void FUN_01bfb0d0(longlong *param_1,int param_2)

{
  if ((int)param_1[9] != param_2) {
    *(int *)(param_1 + 9) = param_2;
    (**(code **)(*param_1 + 0x48))(param_1);
  }
  return;
}

