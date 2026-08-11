/* Ghidra address: 01bfd140 */
/* Ghidra symbol: FUN_01bfd140 */


void FUN_01bfd140(longlong *param_1,int param_2)

{
  if ((int)param_1[8] != param_2) {
    *(int *)(param_1 + 8) = param_2;
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  return;
}

