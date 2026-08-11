/* Ghidra address: 01c07840 */
/* Ghidra symbol: FUN_01c07840 */


void FUN_01c07840(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  uVar1 = FUN_01c07120(*(undefined8 *)(param_2 + 0xa0));
  plVar2 = (longlong *)FUN_01c019a0(uVar1);
  (**(code **)(*plVar2 + 0x48))(plVar2);
  uVar1 = FUN_01c07120(*(undefined8 *)(param_2 + 0xa0));
  FUN_00654410(uVar1);
  return;
}

