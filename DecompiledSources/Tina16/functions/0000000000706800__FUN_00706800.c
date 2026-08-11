/* Ghidra address: 00706800 */
/* Ghidra symbol: FUN_00706800 */


void FUN_00706800(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_006a35d0(*(undefined8 *)(param_1 + 0x40));
  (**(code **)(*plVar1 + 0x50))(plVar1,param_3);
  return;
}

