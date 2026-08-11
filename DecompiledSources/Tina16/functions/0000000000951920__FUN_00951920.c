/* Ghidra address: 00951920 */
/* Ghidra symbol: FUN_00951920 */


void FUN_00951920(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
  (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  return;
}

