/* Ghidra address: 01b746d0 */
/* Ghidra symbol: FUN_01b746d0 */


void FUN_01b746d0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x940) + 0xb8))
            (*(longlong **)(param_1 + 0x940),L"Schematic Editor Color Sets");
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0) + 0x28))();
  iVar4 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
      lVar3 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6f8) + 0x4a0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30,iVar4);
      FUN_004169a0(&local_38,lVar3);
      FUN_01aa02c0(*(undefined8 *)(param_1 + 0x940),local_30,local_38,*(undefined1 *)(lVar3 + 0x100)
                   ,lVar3 + 0x104,lVar3 + 0x170);
      iVar4 = iVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x508) = 1;
  FUN_00414560(&local_38,2);
  return;
}

