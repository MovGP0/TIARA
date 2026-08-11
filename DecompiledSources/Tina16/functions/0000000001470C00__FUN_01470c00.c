/* Ghidra address: 01470c00 */
/* Ghidra symbol: FUN_01470c00 */


void FUN_01470c00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
  plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x790) + 0xd0);
  (**(code **)(*plVar3 + 0x10))(plVar3,uVar2);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x790) + 0xa8))(*(longlong **)(param_1 + 0x790));
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
    (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(*(longlong *)(param_1 + 0x790) + 0xd0));
  }
  return;
}

