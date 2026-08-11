/* Ghidra address: 00966440 */
/* Ghidra symbol: FUN_00966440 */


undefined8 FUN_00966440(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00966240();
  (**(code **)(*plVar1 + 0x68))(plVar1,param_2);
  return param_2;
}

