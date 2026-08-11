/* Ghidra address: 01339b60 */
/* Ghidra symbol: FUN_01339b60 */


void FUN_01339b60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4f0);
  (**(code **)(*plVar1 + 0x90))(plVar1);
  if (*(int *)(*(longlong *)(param_1 + 0x6f8) + 0x4a8) == 0) {
    iVar2 = 1;
    do {
      FUN_0043f750(local_20,iVar2);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 3);
  }
  else {
    iVar2 = 1;
    do {
      FUN_0043f750(&local_28,iVar2);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x748) + 0x4f0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_28);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 7);
  }
  (**(code **)(**(longlong **)(param_1 + 0x748) + 0x268))(*(longlong **)(param_1 + 0x748),1);
  FUN_00414560(&local_28,2);
  return;
}

