/* Ghidra address: 00bc0b80 */
/* Ghidra symbol: FUN_00bc0b80 */


void FUN_00bc0b80(longlong *param_1,int param_2)

{
  if ((int)param_1[1] != param_2) {
    *(int *)(param_1 + 1) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

