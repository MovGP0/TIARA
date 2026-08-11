/* Ghidra address: 00f142f0 */
/* Ghidra symbol: FUN_00f142f0 */


void FUN_00f142f0(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  FUN_01d2c630(param_1,param_2,param_3);
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + param_2;
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xcc) + param_3;
  plVar1 = *(longlong **)(param_1 + 0xf0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xa8))(plVar1,param_2,param_3);
  }
  return;
}

