/* Ghidra address: 0084e470 */
/* Ghidra symbol: FUN_0084e470 */


void FUN_0084e470(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0084e2b0(param_1,param_3);
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_4);
  FUN_0084e230(param_1,param_2,1);
  FUN_0084e230(param_1,param_3,0);
  FUN_0084e1d0(param_1,param_2,param_3);
  return;
}

