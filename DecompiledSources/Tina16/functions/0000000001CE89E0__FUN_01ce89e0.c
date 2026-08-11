/* Ghidra address: 01ce89e0 */
/* Ghidra symbol: FUN_01ce89e0 */


void FUN_01ce89e0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))(*(longlong **)(param_1 + 0x70),0);
  plVar2 = (longlong *)FUN_004113f0(uVar1,&DAT_01ccbf00);
  (**(code **)(*plVar2 + 0x58))(plVar2);
  return;
}

