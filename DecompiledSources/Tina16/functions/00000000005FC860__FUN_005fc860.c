/* Ghidra address: 005fc860 */
/* Ghidra symbol: FUN_005fc860 */


void FUN_005fc860(longlong *param_1,int param_2)

{
  if ((int)param_1[5] != param_2) {
    *(int *)(param_1 + 5) = param_2;
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  return;
}

