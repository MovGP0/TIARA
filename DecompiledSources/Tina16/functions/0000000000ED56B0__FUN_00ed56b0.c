/* Ghidra address: 00ed56b0 */
/* Ghidra symbol: FUN_00ed56b0 */


void FUN_00ed56b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_38 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x858) + 0x260))(*(longlong **)(param_1 + 0x858));
  if (0 < iVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x4f0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_38,iVar2);
    local_30 = local_38;
    local_28 = 0x11;
    FUN_00442f70(&local_20,L"%s will be deleted. Continue?",&local_30,0);
    iVar3 = FUN_0072d440(local_20,0,3,0);
    if (iVar3 == 6) {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar2);
      FUN_00eae480(local_40);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x4f0);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar2);
      (**(code **)(**(longlong **)(param_1 + 0x858) + 0x268))
                (*(longlong **)(param_1 + 0x858),iVar2 + -1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x858) + 0x4f0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar2 + -1);
      FUN_00ecba00(param_1,local_48);
    }
  }
  FUN_00414560(&local_48,3);
  FUN_00414480(&local_20);
  return;
}

