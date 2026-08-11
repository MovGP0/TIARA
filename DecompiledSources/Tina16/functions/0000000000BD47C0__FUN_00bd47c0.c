/* Ghidra address: 00bd47c0 */
/* Ghidra symbol: FUN_00bd47c0 */


void FUN_00bd47c0(longlong *param_1,int param_2)

{
  if ((int)param_1[10] != param_2) {
    *(int *)(param_1 + 10) = param_2;
    (**(code **)(*param_1 + 0x10))(param_1);
  }
  return;
}

