/* Ghidra address: 00f85f10 */
/* Ghidra symbol: FUN_00f85f10 */


void FUN_00f85f10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (-1 < iVar2) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d0) + 0x4a0);
    (**(code **)(*plVar1 + 0x18))(plVar1,local_20,iVar2);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
    iVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1,local_20[0]);
    if (iVar2 < 0) {
      (**(code **)(**(longlong **)(param_1 + 0x710) + 0x78))
                (*(longlong **)(param_1 + 0x710),local_20[0]);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6b0) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_20[0]);
    }
  }
  FUN_00414480(local_20);
  return;
}

