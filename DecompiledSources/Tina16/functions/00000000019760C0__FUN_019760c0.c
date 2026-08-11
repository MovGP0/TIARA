/* Ghidra address: 019760c0 */
/* Ghidra symbol: FUN_019760c0 */


bool FUN_019760c0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_40 = 0;
  iVar2 = FUN_004b2060();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      lVar3 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x170),iVar5);
      if (*(longlong *)(lVar3 + 0x18) == 0) {
        uVar4 = FUN_0180bfb0();
        FUN_01809b60(uVar4,&local_28,L"clDSNotExist");
        uVar4 = FUN_0196d410(*(undefined8 *)(*(longlong *)(param_1 + 0xc0) + 0x170),iVar5);
        FUN_0196d210(uVar4,&local_40);
        local_38 = local_40;
        local_30 = 0x11;
        FUN_00442f70(&local_20,local_28,&local_38,0);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b0);
        (**(code **)(*plVar1 + 0x78))(plVar1,local_20);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xc0) + 0x1b0);
  iVar2 = (**(code **)(*plVar1 + 0x28))(plVar1);
  FUN_00414480(&local_40);
  FUN_00414560(&local_28,2);
  return iVar2 == 0;
}

