/* Ghidra address: 01bead10 */
/* Ghidra symbol: FUN_01bead10 */


void FUN_01bead10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_01c07120(*(undefined8 *)(param_2 + 0x90));
  plVar2 = (longlong *)FUN_01bfaa70(*(undefined8 *)(lVar1 + 0x498));
  (**(code **)(*plVar2 + 0x48))(plVar2);
  uVar3 = FUN_01c07120(*(undefined8 *)(param_2 + 0x90));
  FUN_00654410(uVar3);
  uVar3 = FUN_01c07120(*(undefined8 *)(param_2 + 0x90));
  FUN_01bf6300(uVar3);
  return;
}

