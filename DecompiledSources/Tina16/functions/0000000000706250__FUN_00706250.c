/* Ghidra address: 00706250 */
/* Ghidra symbol: FUN_00706250 */


void FUN_00706250(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_00703c70(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x48))(plVar1,param_2);
  (**(code **)(*plVar1 + 0x50))(plVar1,param_3);
  FUN_004b1870(plVar1);
  return;
}

