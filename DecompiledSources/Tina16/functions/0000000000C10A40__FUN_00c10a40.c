/* Ghidra address: 00c10a40 */
/* Ghidra symbol: FUN_00c10a40 */


int FUN_00c10a40(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_98 = 0;
  local_90 = 0;
  local_70 = 0;
  local_88 = 0;
  local_68 = 0;
  local_60 = 0;
  local_40 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_30 = 0;
  local_38 = 0;
  if ((*(ushort *)(param_2 + 0xd0) & 0x400) == 0) {
    if ((*(ushort *)(param_2 + 0xd0) & 0x200) == 0) {
      uVar6 = 0x10;
    }
    else {
      uVar6 = 0x20;
    }
  }
  else {
    uVar6 = 0x40;
  }
  if ((*(ushort *)(param_2 + 0xd0) & 0x20) != 0) {
    uVar6 = uVar6 | 1;
  }
  if ((*(ushort *)(param_2 + 0xd0) & 0x800) != 0) {
    uVar6 = uVar6 | 2;
  }
  if ((*(ushort *)(param_2 + 0xd0) & 1) == 0) {
    uVar6 = uVar6 | 4;
  }
  if ((uVar6 & 0x10) == 0) {
    FUN_00726820(param_2,&local_30);
  }
  else {
    FUN_00414480(&local_30);
  }
  uVar1 = FUN_00c08890(param_1);
  uVar2 = FUN_00c0faf0(param_1);
  FUN_00bf2ed0(param_1,&local_48);
  FUN_0043e130(&local_40,local_48);
  FUN_007267a0(param_2,&local_58);
  FUN_0043e130(&local_50,local_58);
  iVar3 = FUN_00416db0(local_40,local_50);
  if ((iVar3 == 0) && ((*(ushort *)(param_2 + 0xd0) & 0x200) == 0)) {
    iVar3 = FUN_00c08890(param_1);
    iVar4 = FUN_00c0faf0(param_1);
    FUN_00c08950(param_1,iVar3 + iVar4);
  }
  else {
    FUN_00c0fb50(param_1,0);
  }
  FUN_007267a0(param_2,&local_60);
  iVar3 = FUN_00c09100(param_1,local_60,local_30,uVar6);
  if (-(uint)(0 < iVar3) == 0) {
    FUN_00c08950(param_1,uVar1);
    FUN_00c0fb50(param_1,uVar2);
    if (*(longlong *)(param_1 + 0x8b8) == 0) {
      FUN_0041ddd0(&local_70,PTR_PTR_02003bb0);
      FUN_007267a0(param_2,&local_88);
      local_80 = local_88;
      local_78 = 0x11;
      FUN_00442f70(&local_38,local_70,&local_80,0);
      FUN_0072d730(local_38,0xffffffff,0xffffffff);
    }
    else {
      FUN_007267a0(param_2,&local_68);
      (**(code **)(param_1 + 0x8b8))(*(undefined8 *)(param_1 + 0x8c0),param_1,local_68);
    }
  }
  else if ((*(ushort *)(param_2 + 0xd0) & 0x200) != 0) {
    iVar5 = FUN_00c08890(param_1);
    FUN_007267a0(param_2,&local_90);
    iVar4 = 0;
    if (local_90 != 0) {
      iVar4 = *(int *)(local_90 + -4);
    }
    FUN_00c08950(param_1,(iVar5 - iVar4) + -1);
    FUN_007267a0(param_2,&local_98);
    iVar4 = 0;
    if (local_98 != 0) {
      iVar4 = *(int *)(local_98 + -4);
    }
    FUN_00c0fb50(param_1,iVar4 + 1);
  }
  FUN_00414560(&local_98,3);
  FUN_00414560(&local_70,9);
  return -(uint)(0 < iVar3);
}

