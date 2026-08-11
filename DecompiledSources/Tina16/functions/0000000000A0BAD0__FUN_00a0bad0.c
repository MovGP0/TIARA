/* Ghidra address: 00a0bad0 */
/* Ghidra symbol: FUN_00a0bad0 */


void FUN_00a0bad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00a0ade0();
  (**(code **)(*plVar1 + 0xd8))(plVar1,param_2,param_3,param_4);
  return;
}

