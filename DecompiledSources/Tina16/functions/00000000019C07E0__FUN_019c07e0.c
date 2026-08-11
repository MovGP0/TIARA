/* Ghidra address: 019c07e0 */
/* Ghidra symbol: FUN_019c07e0 */


longlong * FUN_019c07e0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined1 local_50 [8];
  int local_48;
  longlong local_40;
  undefined1 local_38 [8];
  int local_30;
  longlong local_28;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_78 = 0;
  local_70 = 0;
  local_20 = 0;
  local_28 = 0;
  local_60 = (undefined8 *)0x0;
  local_68 = (undefined8 *)0x0;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  FUN_00417580(&local_40,&DAT_019c0088);
  FUN_00417580(&local_58,&DAT_019c0088);
  FUN_00419260(local_90,&DAT_019cc6a8,1,2);
  local_10 = FUN_00498310(*(undefined4 *)local_80,*(undefined4 *)((longlong)local_88 + 4));
  FUN_019c05e0(&local_20,local_88,&local_10);
  FUN_019c05e0(&local_28,&local_10,local_80);
  lVar4 = 0;
  if (local_20 != 0) {
    lVar4 = *(longlong *)(local_20 + -8);
  }
  if (lVar4 < 1) {
    bVar1 = false;
  }
  else {
    lVar4 = 0;
    if (local_28 != 0) {
      lVar4 = *(longlong *)(local_28 + -8);
    }
    bVar1 = 0 < lVar4;
  }
  if (bVar1) {
    lVar4 = 0;
    if (local_20 != 0) {
      lVar4 = *(longlong *)(local_20 + -8);
    }
    cVar2 = FUN_00422c40(local_20 + (lVar4 + -1) * 8,local_28);
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    FUN_00419670(&local_40,local_20,local_28,&DAT_0147b748);
  }
  else {
    local_a8 = 0;
    if (local_28 != 0) {
      local_a8 = *(longlong *)(local_28 + -8);
    }
    local_a8 = local_a8 + -1;
    FUN_004192d0(&local_70,local_28,&DAT_0147b748,1);
    FUN_00419670(&local_40,local_20,local_70,&DAT_0147b748);
  }
  FUN_00419430(&local_60,&DAT_0147b748);
  FUN_00419260(&local_60,&DAT_0147b748,1,3);
  *local_60 = *local_88;
  local_60[1] = local_10;
  local_60[2] = *local_80;
  FUN_004194b0(local_38,local_60,&DAT_0147b748);
  local_30 = FUN_019c0780(auStack_c8,local_40,&local_10);
  cVar2 = FUN_00422c60(local_40,local_88);
  if (cVar2 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c0de4);
    FUN_004134c0(uVar3);
  }
  lVar4 = 0;
  if (local_40 != 0) {
    lVar4 = *(longlong *)(local_40 + -8);
  }
  cVar2 = FUN_00422c60(local_40 + (lVar4 + -1) * 8,local_80);
  if (cVar2 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c0e54);
    FUN_004134c0(uVar3);
  }
  if (local_30 == -1) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c0ec8);
    FUN_004134c0(uVar3);
  }
  FUN_00417c40(*local_90,&local_40,&DAT_019c0088);
  local_18 = FUN_00498310(*(undefined4 *)local_88,*(undefined4 *)((longlong)local_80 + 4));
  FUN_019c05e0(&local_20,local_88,&local_18);
  FUN_019c05e0(&local_28,&local_18,local_80);
  lVar4 = 0;
  if (local_20 != 0) {
    lVar4 = *(longlong *)(local_20 + -8);
  }
  if (lVar4 < 1) {
    bVar1 = false;
  }
  else {
    lVar4 = 0;
    if (local_28 != 0) {
      lVar4 = *(longlong *)(local_28 + -8);
    }
    bVar1 = 0 < lVar4;
  }
  if (bVar1) {
    lVar4 = 0;
    if (local_20 != 0) {
      lVar4 = *(longlong *)(local_20 + -8);
    }
    cVar2 = FUN_00422c40(local_20 + (lVar4 + -1) * 8,local_28);
  }
  else {
    cVar2 = '\0';
  }
  if (cVar2 == '\0') {
    FUN_00419670(&local_58,local_20,local_28,&DAT_0147b748);
  }
  else {
    local_a8 = 0;
    if (local_28 != 0) {
      local_a8 = *(longlong *)(local_28 + -8);
    }
    local_a8 = local_a8 + -1;
    FUN_004192d0(&local_78,local_28,&DAT_0147b748,1);
    FUN_00419670(&local_58,local_20,local_78,&DAT_0147b748);
  }
  FUN_00419430(&local_68,&DAT_0147b748);
  FUN_00419260(&local_68,&DAT_0147b748,1,3);
  *local_68 = *local_88;
  local_68[1] = local_18;
  local_68[2] = *local_80;
  FUN_004194b0(local_50,local_68,&DAT_0147b748);
  local_48 = FUN_019c0780(auStack_c8,local_58,&local_18);
  cVar2 = FUN_00422c60(local_58,local_88);
  if (cVar2 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c0de4);
    FUN_004134c0(uVar3);
  }
  lVar4 = 0;
  if (local_58 != 0) {
    lVar4 = *(longlong *)(local_58 + -8);
  }
  cVar2 = FUN_00422c60(local_58 + (lVar4 + -1) * 8,local_80);
  if (cVar2 != '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c0e54);
    FUN_004134c0(uVar3);
  }
  if (local_48 == -1) {
    uVar3 = FUN_0044d490(&PTR_FUN_004334c0,1,&DAT_019c0f48);
    FUN_004134c0(uVar3);
  }
  FUN_00417c40(*local_90 + 0x18,&local_58,&DAT_019c0088);
  FUN_00417840(&local_78,&DAT_0147b748,4);
  FUN_00417840(&local_58,&DAT_019c0088,2);
  FUN_00417840(&local_28,&DAT_0147b748,2);
  return local_90;
}

