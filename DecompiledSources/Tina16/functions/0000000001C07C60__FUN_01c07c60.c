/* Ghidra address: 01c07c60 */
/* Ghidra symbol: FUN_01c07c60 */


void FUN_01c07c60(longlong *param_1,int param_2)

{
  if ((int)param_1[5] != param_2) {
    *(int *)(param_1 + 5) = param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  return;
}

