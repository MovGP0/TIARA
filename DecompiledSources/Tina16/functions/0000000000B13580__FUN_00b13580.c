/* Ghidra address: 00b13580 */
/* Ghidra symbol: FUN_00b13580 */


void FUN_00b13580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00b13190(param_1,param_2,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
  return;
}

