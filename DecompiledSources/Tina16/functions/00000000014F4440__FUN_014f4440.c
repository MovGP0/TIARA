/* Ghidra address: 014f4440 */
/* Ghidra symbol: FUN_014f4440 */


void FUN_014f4440(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,&DAT_014f4564);
  uVar2 = FUN_01b11110();
  iVar3 = 1;
  for (uVar2 = uVar2 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
    FUN_0043f750(&local_20,iVar3);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
    (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
    iVar3 = iVar3 + 1;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4f0);
  (**(code **)(*plVar1 + 0x78))(plVar1,L"Dynamic");
  (**(code **)(**(longlong **)(param_1 + 0x738) + 0x268))(*(longlong **)(param_1 + 0x738),0);
  FUN_00414480(&local_20);
  return;
}

