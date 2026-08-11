/* Ghidra address: 00688480 */
/* Ghidra symbol: FUN_00688480 */


void FUN_00688480(longlong *param_1,int param_2)

{
  if ((param_2 != *(int *)((longlong)param_1 + 0x4ac)) &&
     (*(int *)((longlong)param_1 + 0x4ac) = param_2, param_1[0x9d] != 0)) {
    (**(code **)(*param_1 + 0x280))(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

