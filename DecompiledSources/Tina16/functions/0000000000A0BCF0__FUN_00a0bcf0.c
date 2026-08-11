/* Ghidra address: 00a0bcf0 */
/* Ghidra symbol: FUN_00a0bcf0 */


void FUN_00a0bcf0(longlong *param_1,int param_2)

{
  if ((int)param_1[0xf] != param_2) {
    FUN_00a0abb0(param_1);
    *(int *)(param_1 + 0xf) = param_2;
    *(undefined1 *)((longlong)param_1 + 0x7c) = 1;
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

