/* Ghidra address: 00951950 */
/* Ghidra symbol: FUN_00951950 */


void FUN_00951950(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
  (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
  return;
}

