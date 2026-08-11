/* Ghidra address: 00b017f0 */
/* Ghidra symbol: FUN_00b017f0 */


void FUN_00b017f0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x28))(*(longlong **)(param_1 + 0x740));
  if (0 < iVar2) {
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x18))
              (*(longlong **)(param_1 + 0x740),&local_20,iVar2 + -1);
    (**(code **)(**(longlong **)(param_1 + 0x738) + 0x78))(*(longlong **)(param_1 + 0x738),local_20)
    ;
    (**(code **)(**(longlong **)(param_1 + 0x740) + 0x98))
              (*(longlong **)(param_1 + 0x740),iVar2 + -1);
    plVar1 = *(longlong **)(param_1 + 0x738);
    iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,iVar2 + -1);
    FUN_00b01560(param_1,local_28,0);
  }
  FUN_00414560(&local_28,2);
  return;
}

