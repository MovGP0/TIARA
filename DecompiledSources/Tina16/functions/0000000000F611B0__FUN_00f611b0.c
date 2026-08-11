/* Ghidra address: 00f611b0 */
/* Ghidra symbol: FUN_00f611b0 */


void FUN_00f611b0(longlong *param_1,int param_2,int param_3)

{
  undefined1 local_38 [24];
  
  FUN_005fdcb0(param_1[0x10],0);
  FUN_005fdab0(param_1[0x10],0xffffff);
  FUN_00498350(local_38,0,0,param_2 + -1,param_3 + -1);
  (**(code **)(*param_1 + 0xa8))(param_1,local_38);
  FUN_005fd4e0(param_1[0xf],0);
  return;
}

