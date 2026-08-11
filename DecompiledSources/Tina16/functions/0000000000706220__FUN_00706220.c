/* Ghidra address: 00706220 */
/* Ghidra symbol: FUN_00706220 */


void FUN_00706220(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00703c70(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  FUN_004b1870(plVar1);
  return;
}

