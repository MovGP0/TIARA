/* Ghidra address: 018778d0 */
/* Ghidra symbol: FUN_018778d0 */


void FUN_018778d0(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((param_2 != iVar1) && ((int)param_1[1] < param_2)) {
    (**(code **)(*param_1 + 0x58))(param_1,param_2);
  }
  *(int *)(param_1 + 2) = param_2;
  return;
}

