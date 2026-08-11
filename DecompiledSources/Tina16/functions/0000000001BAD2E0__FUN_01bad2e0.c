/* Ghidra address: 01bad2e0 */
/* Ghidra symbol: FUN_01bad2e0 */


void FUN_01bad2e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 local_38;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_20 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x6f8) + 0xa8))(*(longlong **)(param_1 + 0x6f8));
  if (cVar1 != '\0') {
    plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*plVar4 + 0x78))(plVar4,0);
    (**(code **)(*plVar4 + 0x78))(plVar4,L"****************************************************");
    (**(code **)(*plVar4 + 0x78))(plVar4,L"********** Components in TINA catalogue ************");
    (**(code **)(*plVar4 + 0x78))(plVar4,L"****************************************************");
    iVar2 = FUN_0172f660(plVar4);
    iVar3 = FUN_01718ac0(*(undefined8 *)(param_1 + 0x730),plVar4);
    (**(code **)(*plVar4 + 0x78))(plVar4,0);
    (**(code **)(*plVar4 + 0x78))(plVar4,0);
    local_28 = 0;
    local_30[0] = iVar2 + iVar3;
    FUN_00442f70(&local_20,L"#Total number of components: %d",local_30,0);
    (**(code **)(*plVar4 + 0x78))(plVar4,local_20);
    FUN_00724270(*(undefined8 *)(param_1 + 0x6f8),&local_38);
    (**(code **)(*plVar4 + 0x100))(plVar4,local_38);
    FUN_00410f20(plVar4);
  }
  FUN_00414480(&local_38);
  FUN_00414480(&local_20);
  return;
}

