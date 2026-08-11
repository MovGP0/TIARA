/* Ghidra address: 00a7a6a0 */
/* Ghidra symbol: FUN_00a7a6a0 */


void FUN_00a7a6a0(longlong *param_1)

{
  longlong *plVar1;
  
  FUN_00a799b0(param_1,1);
  thunk_FUN_0418a669(param_1[0x17]);
  thunk_FUN_041a4bab(param_1[0x17]);
  *(int *)(param_1 + 0x16) = (int)param_1[0x16] + 1;
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
  (**(code **)(*plVar1 + 0x100))(plVar1);
  return;
}

