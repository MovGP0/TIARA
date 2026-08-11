/* Ghidra address: 00688800 */
/* Ghidra symbol: FUN_00688800 */


void FUN_00688800(longlong *param_1,int param_2)

{
  if ((param_2 != *(int *)((longlong)param_1 + 0x4f4)) &&
     (*(int *)((longlong)param_1 + 0x4f4) = param_2, param_1[0x9d] != 0)) {
    (**(code **)(*param_1 + 0x280))(param_1);
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

