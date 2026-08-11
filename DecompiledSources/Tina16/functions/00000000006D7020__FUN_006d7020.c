/* Ghidra address: 006d7020 */
/* Ghidra symbol: FUN_006d7020 */


void FUN_006d7020(longlong param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_006d8290(param_1);
  plVar2 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x528),uVar1);
  (**(code **)(*plVar2 + 0xf0))(plVar2);
  return;
}

