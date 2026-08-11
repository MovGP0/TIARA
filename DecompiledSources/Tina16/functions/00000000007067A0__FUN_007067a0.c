/* Ghidra address: 007067a0 */
/* Ghidra symbol: FUN_007067a0 */


void FUN_007067a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00703d20(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x48))(plVar1,param_3);
  return;
}

