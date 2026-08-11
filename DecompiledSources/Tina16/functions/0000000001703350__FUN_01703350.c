/* Ghidra address: 01703350 */
/* Ghidra symbol: FUN_01703350 */


void FUN_01703350(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  plVar1 = *(longlong **)(param_1 + 0x6e0);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],local_20,uVar2);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x6e0) + 0x260))(*(longlong **)(param_1 + 0x6e0));
  if (iVar3 == 0) {
    FUN_00414b50(local_20,L"[All]");
  }
  plVar1 = *(longlong **)(param_1 + 0x718);
  uVar2 = (**(code **)(*plVar1 + 0x260))(plVar1);
  (**(code **)(*(longlong *)plVar1[0x9e] + 0x18))((longlong *)plVar1[0x9e],&local_28,uVar2);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (iVar3 == 0) {
    FUN_00414b50(&local_28,L"[All]");
  }
  FUN_01703980(param_1,local_20[0],local_28);
  FUN_00414560(&local_28,2);
  return;
}

