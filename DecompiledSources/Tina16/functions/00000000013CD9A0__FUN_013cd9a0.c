/* Ghidra address: 013cd9a0 */
/* Ghidra symbol: FUN_013cd9a0 */


void FUN_013cd9a0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined1 uVar4;
  
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  FUN_013cd5c0(param_1,cVar3 == '\0');
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x728) + 0x260))(*(longlong **)(param_1 + 0x728));
  lVar1 = *(longlong *)(param_1 + 0x900);
  *(undefined1 *)(lVar1 + 0x309) = uVar4;
  *(bool *)(lVar1 + 0x30a) = *(int *)(*(longlong *)(param_1 + 0x870) + 0x4a8) == 1;
  FUN_00c0fae0(*(undefined8 *)(param_1 + 0x848));
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x848) + 0x4e8);
  (**(code **)(*plVar2 + 0x88))(plVar2,param_2);
  FUN_00c0dad0(*(undefined8 *)(param_1 + 0x848),0);
  return;
}

