/* Ghidra address: 006885a0 */
/* Ghidra symbol: FUN_006885a0 */


void FUN_006885a0(longlong *param_1,int param_2)

{
  if ((param_2 != *(int *)((longlong)param_1 + 0x4bc)) &&
     (*(int *)((longlong)param_1 + 0x4bc) = param_2, param_1[0x9d] != 0)) {
    (**(code **)(*param_1 + 0x280))(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

