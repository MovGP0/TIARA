/* Ghidra address: 00b138d0 */
/* Ghidra symbol: FUN_00b138d0 */


void FUN_00b138d0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00b13890(param_1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
  FUN_00b13920(param_1);
  return;
}

