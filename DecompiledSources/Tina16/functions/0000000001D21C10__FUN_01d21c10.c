/* Ghidra address: 01d21c10 */
/* Ghidra symbol: FUN_01d21c10 */


void FUN_01d21c10(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  char local_45;
  int local_44;
  longlong local_40;
  int local_38;
  int local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_c8;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_80 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_20[0] = 0;
  local_28 = 0;
  uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d223e8);
  *(undefined8 *)(param_1 + 0x9d0) = uVar5;
  uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_60,*(int *)(param_1 + 0x9cc) + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_68,*(int *)(param_1 + 0x9cc) + -1);
  iVar4 = FUN_004170c0(&DAT_01d223fc,local_68,1);
  FUN_00416dc0(&local_58,local_60,1,iVar4 + -1);
  uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_58);
  *(undefined8 *)(param_1 + 0x9d0) = uVar5;
  uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
  uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&DAT_01d2240c);
  *(undefined8 *)(param_1 + 0x9d0) = uVar5;
  uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
  local_20[0] = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,local_20,*(int *)(param_1 + 0x9cc) + -1);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_70,*(int *)(param_1 + 0x9cc) + -1);
  local_38 = FUN_004170c0(&DAT_01d223fc,local_70,1);
  local_38 = local_38 + 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_78,*(int *)(param_1 + 0x9cc) + -1);
  local_30 = local_78;
  local_34 = 0;
  if (local_78 != 0) {
    local_34 = *(int *)(local_78 + -4);
  }
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
  (**(code **)(*plVar1 + 0x18))(plVar1,&local_88,*(int *)(param_1 + 0x9cc) + -1);
  iVar4 = FUN_004170c0(&DAT_01d223fc,local_88,1);
  FUN_00416dc0(&local_80,local_20[0],local_38,local_34 - iVar4);
  uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_80);
  *(undefined8 *)(param_1 + 0x9d0) = uVar5;
  FUN_00414480(local_20);
  iVar4 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d0));
  if (iVar4 < 1) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (*(int *)(param_1 + 0x9cc) < iVar4) {
      *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + 1;
    }
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_90,*(int *)(param_1 + 0x9cc) + -1);
    uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_90);
    *(undefined8 *)(param_1 + 0x9d0) = uVar5;
    uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
    FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
  }
  else {
    uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
    FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
  }
  while( true ) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    iVar4 = (**(code **)(*plVar1 + 0x28))(plVar1);
    if (*(int *)(param_1 + 0x9cc) < iVar4) {
      local_28 = 0;
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_28,*(int *)(param_1 + 0x9cc) + -1);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_a0,*(int *)(param_1 + 0x9cc) + -1);
      local_40 = local_a0;
      local_44 = 0;
      if (local_a0 != 0) {
        local_44 = *(int *)(local_a0 + -4);
      }
      uVar2 = *(short *)(local_28 + -2 + (longlong)local_44 * 2) - 0x58;
      if (uVar2 < 0x40) {
        local_45 = (1L << ((byte)uVar2 & 0x3f) & 0x1000000010U) != 0;
      }
      else {
        local_45 = false;
      }
      FUN_00414480(&local_28);
    }
    else {
      local_45 = '\0';
    }
    if (local_45 == '\0') break;
    iVar4 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
    *(undefined2 *)(*(longlong *)(param_1 + 0x9d8) + (longlong)(iVar4 + -1) * 2) = 0;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa10) + 0xa0);
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_98,*(undefined4 *)(param_1 + 0x9cc));
    uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),local_98);
    *(undefined8 *)(param_1 + 0x9d0) = uVar5;
    uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
    FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
    *(int *)(param_1 + 0x9cc) = *(int *)(param_1 + 0x9cc) + 1;
  }
  uVar5 = FUN_00442620(*(undefined8 *)(param_1 + 0x9d0),&LAB_01d22424);
  *(undefined8 *)(param_1 + 0x9d0) = uVar5;
  uVar3 = FUN_01d11780(*(undefined8 *)(param_1 + 0x9d8));
  FUN_01d11990(*(undefined8 *)(param_1 + 0x9d0),param_1 + 0x9d8,uVar3);
  FUN_00414560(&local_a0,10);
  return;
}

