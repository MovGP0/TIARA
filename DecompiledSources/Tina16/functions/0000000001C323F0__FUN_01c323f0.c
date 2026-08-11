/* Ghidra address: 01c323f0 */
/* Ghidra symbol: FUN_01c323f0 */


void FUN_01c323f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  *(undefined1 *)(param_1 + 0x710) = 0;
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0));
  if (cVar3 == '\0') {
    bVar2 = false;
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),local_20);
    iVar6 = 0;
    if (local_20[0] != 0) {
      iVar6 = *(int *)(local_20[0] + -4);
    }
    bVar2 = 0x10 < iVar6;
  }
  if (bVar2) {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_30,PTR_PTR_020052e8);
    FUN_00b8e650(uVar5,&local_28,L"HDLStrings.Msg_DevTypTooLong",local_30);
    FUN_0072d440(local_28,1,4,0);
    *(undefined1 *)(param_1 + 0x710) = 1;
  }
  else {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    if (cVar3 != '\0') {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_38);
      if (local_38 == 0) {
        uVar5 = FUN_00b89270();
        FUN_0041ddd0(&local_48,PTR_PTR_02003d10);
        FUN_00b8e650(uVar5,&local_40,L"HDLStrings.Msg_DevNameEmpty",local_48);
        FUN_0072d440(local_40,1,4,0);
        *(undefined1 *)(param_1 + 0x710) = 1;
        goto code_r0x01c32642;
      }
    }
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x6d0) + 0x260))(*(longlong **)(param_1 + 0x6d0))
    ;
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x718) + 8);
    *(undefined1 *)(lVar1 + 8) = uVar4;
    *(int *)(lVar1 + 0xc) = *(int *)(*(longlong *)(param_1 + 0x6d8) + 0x4a8) + 1;
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6e0),&local_50);
    FUN_00415dd0(*(longlong *)(*(longlong *)(param_1 + 0x718) + 8) + 0x18,local_50,0);
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6f8),&local_58);
    FUN_00415dd0(*(longlong *)(*(longlong *)(param_1 + 0x718) + 8) + 0x10,local_58,0);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x708) + 0x260))(*(longlong **)(param_1 + 0x708))
    ;
    *(undefined1 *)(*(longlong *)(param_1 + 0x718) + 0x10) = uVar4;
  }
code_r0x01c32642:
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_48,2);
  FUN_00414480(&local_38);
  FUN_00414560(&local_30,2);
  FUN_00414480(local_20);
  return;
}

