/* Ghidra address: 0149a5e0 */
/* Ghidra symbol: FUN_0149a5e0 */


void FUN_0149a5e0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x8b8));
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x7f8) + 0xd0);
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x7f8) + 0xa8))(*(longlong **)(param_1 + 0x7f8));
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_00bf2c10(*(undefined8 *)(param_1 + 0x8b8));
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x7f8) + 0xd0));
    plVar3 = (longlong *)FUN_00bf2c10(*(undefined8 *)(param_1 + 0x8c0));
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x7f8) + 0xd0));
  }
  return;
}

