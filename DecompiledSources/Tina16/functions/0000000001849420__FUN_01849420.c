/* Ghidra address: 01849420 */
/* Ghidra symbol: FUN_01849420 */


void FUN_01849420(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 8));
  (**(code **)(*plVar1 + 8))(plVar1,param_3);
  return;
}

