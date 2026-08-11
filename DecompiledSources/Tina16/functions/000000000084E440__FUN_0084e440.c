/* Ghidra address: 0084e440 */
/* Ghidra symbol: FUN_0084e440 */


void FUN_0084e440(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_0084e230(param_1,param_2,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  return;
}

