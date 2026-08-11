/* Ghidra address: 00bc0bd0 */
/* Ghidra symbol: FUN_00bc0bd0 */


void FUN_00bc0bd0(longlong *param_1,int param_2)

{
  if ((int)param_1[2] != param_2) {
    *(int *)(param_1 + 2) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

