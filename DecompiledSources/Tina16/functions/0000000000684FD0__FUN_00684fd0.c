/* Ghidra address: 00684fd0 */
/* Ghidra symbol: FUN_00684fd0 */


void FUN_00684fd0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_03f3ed25((int)param_1[0x9d],param_2,param_3);
  (**(code **)(*param_1 + 0x2d8))(param_1,uVar1);
  FUN_0065aec0(param_1,param_2,param_3,param_4);
  return;
}

