/* Ghidra address: 00b123a0 */
/* Ghidra symbol: FUN_00b123a0 */


void FUN_00b123a0(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00b11070(param_1);
  (**(code **)(*plVar1 + 0xf8))(plVar1,param_2,param_3);
  FUN_00849fe0(param_1,param_2,param_3);
  return;
}

