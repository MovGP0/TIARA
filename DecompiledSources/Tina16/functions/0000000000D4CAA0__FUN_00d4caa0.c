/* Ghidra address: 00d4caa0 */
/* Ghidra symbol: FUN_00d4caa0 */


void FUN_00d4caa0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  int local_48;
  undefined1 local_44 [12];
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_68 = 0;
  local_60 = 0;
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_88 = param_1;
  local_80 = param_2;
  uVar2 = FUN_00787d90(*(undefined8 *)(param_1 + 0x18));
  FUN_005ff880(local_80,uVar2);
  local_78 = FUN_005ffa40(local_80);
  local_70 = 0x767676;
  local_6c = 0xffffff;
  iVar4 = 0xefe4e3;
  iVar5 = 0x575757;
  plVar3 = (longlong *)FUN_00781840();
  cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar1 != '\0') {
    plVar3 = (longlong *)FUN_00781840();
    (**(code **)(*plVar3 + 0x140))(plVar3,local_44,3);
    uVar2 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar2,local_44,0,&local_48);
    if ((cVar1 != '\0') && (local_48 != 0x1fffffff)) {
      local_70 = local_48;
    }
    uVar2 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar2,local_44,9,&local_48);
    if ((cVar1 != '\0') && (local_48 != 0x1fffffff)) {
      local_6c = local_48;
    }
    uVar2 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar2,local_44,10,&local_48);
    if ((cVar1 != '\0') && (local_48 != 0x1fffffff)) {
      iVar4 = local_48;
    }
    uVar2 = FUN_00781840();
    cVar1 = FUN_007790b0(uVar2,local_44,2,&local_48);
    if ((cVar1 != '\0') && (local_48 != 0x1fffffff)) {
      iVar5 = local_48;
    }
  }
  FUN_00787be0(*(undefined8 *)(local_88 + 0x18),local_58);
  local_98 = 1;
  FUN_00636080(local_80,local_6c,iVar4,local_58);
  uVar2 = thunk_FUN_0412d81c(local_70);
  FUN_00787be0(*(undefined8 *)(local_88 + 0x18),local_58);
  FUN_00429590(local_78,local_58,uVar2);
  thunk_FUN_0416f828(uVar2);
  thunk_FUN_03b994b9(local_78,1);
  thunk_FUN_0412a071(local_78,iVar5);
  FUN_00787f40(*(undefined8 *)(local_88 + 0x18),&local_60);
  uVar2 = FUN_00416740(local_60);
  FUN_004167d0(&local_68,uVar2);
  FUN_00d4c7c0(auStack_b8,local_78,local_68,&local_38);
  FUN_00414560(&local_68,2);
  return;
}

