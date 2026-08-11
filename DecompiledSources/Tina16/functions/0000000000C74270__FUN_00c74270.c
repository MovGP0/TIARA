/* Ghidra address: 00c74270 */
/* Ghidra symbol: FUN_00c74270 */


void FUN_00c74270(longlong *param_1,int param_2)

{
  if (*(int *)((longlong)param_1 + 0x534) != param_2) {
    *(int *)((longlong)param_1 + 0x534) = param_2;
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

