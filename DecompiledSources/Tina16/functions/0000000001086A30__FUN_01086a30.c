/* Ghidra address: 01086a30 */
/* Ghidra symbol: FUN_01086a30 */


void FUN_01086a30(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0xb90) + 0x288))(*(longlong **)(param_1 + 0xb90),&local_20)
  ;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb88) + 0xa30);
  iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20);
  if (-1 < iVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb88) + 0xa38);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar2);
    FUN_0043e1a0(&local_28,local_30);
    FUN_00414ad0(param_1 + 0x4c38,local_28);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb88) + 0xa30);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40,iVar2);
    FUN_0043e1a0(&local_38,local_40);
    FUN_00414ad0(param_1 + 0x4c40,local_38);
  }
  FUN_00414560(&local_40,5);
  return;
}

