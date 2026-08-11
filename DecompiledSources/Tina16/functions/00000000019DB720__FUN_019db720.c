/* Ghidra address: 019db720 */
/* Ghidra symbol: FUN_019db720 */


void FUN_019db720(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x7c8) + 0x260))(*(longlong **)(param_1 + 0x7c8));
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7c8) + 0x4f0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar2);
  local_38 = local_40;
  local_30 = 0x11;
  FUN_00442f70(&local_20,L"DesignSoft/TINA_AI%s_Q4",&local_38,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7c8) + 0x4f0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_48,iVar2);
  local_38 = local_48;
  local_30 = 0x11;
  FUN_00442f70(&local_28,L"tina_ai%s",&local_38,0);
  if (*(int *)(*(longlong *)(param_1 + 0x860) + 0x5c) == 1) {
    FUN_00414ad0(param_1 + 0x800,local_28);
  }
  else {
    FUN_00414ad0(param_1 + 0x800,local_20);
  }
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_28,2);
  return;
}

