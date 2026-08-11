/* Ghidra address: 00844d40 */
/* Ghidra symbol: FUN_00844d40 */


void FUN_00844d40(longlong *param_1,int param_2,int param_3)

{
  longlong local_30;
  
  if ((param_2 != (int)param_1[0x9d]) || (param_3 != *(int *)((longlong)param_1 + 0x4ec))) {
    (**(code **)(*param_1 + 0x198))(param_1);
    local_30 = param_1[0x9d];
    *(int *)(param_1 + 0x9d) = param_2;
    *(int *)((longlong)param_1 + 0x4ec) = param_3;
    FUN_00845220(param_1,&local_30);
  }
  return;
}

