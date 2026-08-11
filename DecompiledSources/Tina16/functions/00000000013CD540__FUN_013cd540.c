/* Ghidra address: 013cd540 */
/* Ghidra symbol: FUN_013cd540 */


void FUN_013cd540(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  iVar3 = 0x10;
  puVar2 = (undefined8 *)PTR_PTR_02003a20;
  do {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,*puVar2);
    puVar2 = puVar2 + 3;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  (**(code **)(**(longlong **)(param_1 + 0x6d8) + 0x268))(*(longlong **)(param_1 + 0x6d8),0);
  return;
}

