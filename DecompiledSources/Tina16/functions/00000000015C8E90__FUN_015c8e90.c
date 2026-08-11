/* Ghidra address: 015c8e90 */
/* Ghidra symbol: FUN_015c8e90 */


void FUN_015c8e90(longlong param_1,char param_2,longlong param_3)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 auStack_1a8 [32];
  undefined8 local_188;
  int local_180;
  undefined8 *local_178;
  undefined8 local_168;
  ushort local_160;
  undefined8 local_d8;
  undefined1 *local_d0;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  uint local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  int local_90;
  longlong local_88;
  char local_79;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_5e [22];
  longlong local_48;
  longlong local_40;
  int local_34;
  undefined8 *local_30;
  
  puVar8 = &local_168;
  for (lVar7 = 0x12; lVar7 != 0; lVar7 = lVar7 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  local_d8 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_88 = 0;
  if (param_3 != 0) {
    *(longlong *)(param_1 + 8) = param_3;
  }
  local_d0 = auStack_1a8;
  FUN_00414c70(&local_70,*(undefined8 *)(param_1 + 0x30));
  local_79 = '\0';
  if (param_2 == '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0x18) + 0x85) == '\0') {
      cVar1 = FUN_015c3a30(param_1,local_5e,&local_40,0x6054b50);
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_015c3a30(param_1,local_5e,&local_40,0x6054141), cVar1 == '\0')) {
        local_79 = '\0';
      }
      else {
        local_79 = '\x01';
      }
    }
    else {
      local_79 = FUN_015c3a30(param_1,local_5e,&local_40,0x6054b50);
    }
  }
  if (local_79 == '\0') {
    uVar5 = (**(code **)**(undefined8 **)(param_1 + 8))(*(undefined8 **)(param_1 + 8));
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),uVar5);
  }
  else {
    FUN_004b6dc0(*(undefined8 *)(param_1 + 8),local_40 - (ulonglong)*(uint *)(param_1 + 0x90));
  }
  FUN_00414bf0(param_1 + 0x30,local_70);
  uVar5 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  FUN_004b6e40(*(undefined8 *)(param_1 + 8),uVar5);
  local_40 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98) + 0xc) < 0xffff) {
    local_90 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98) + 0xc);
    local_94 = local_90;
    if (local_90 < 1) {
      local_94 = 0;
    }
    *(undefined2 *)(param_1 + 0x8a) = (undefined2)local_94;
  }
  else {
    *(undefined2 *)(param_1 + 0x8a) = 0xffff;
    *(undefined4 *)(param_1 + 0x60) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98) + 0xc);
  }
  local_30 = (undefined8 *)FUN_00410e60(&PTR_FUN_0047cbc0,1);
  uVar5 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  *(undefined8 *)(param_1 + 0xb0) = uVar5;
  iVar3 = FUN_015c2df0();
  local_34 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar2 = FUN_015c8670(auStack_1a8,local_34);
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      *(undefined2 *)(lVar7 + 0x1e) = uVar2;
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      FUN_00415dd0(&local_88,*(undefined8 *)(lVar7 + 0x2e),0);
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      FUN_004168e0(&local_d8,*(undefined8 *)(lVar7 + 0x2e));
      cVar1 = FUN_015bf910(local_d8,&local_88);
      if (cVar1 != '\0') {
        lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
        *(ushort *)(lVar7 + 8) = *(ushort *)(lVar7 + 8) | 0x800;
      }
      local_98 = 0;
      if (local_88 != 0) {
        local_98 = *(undefined4 *)(local_88 + -4);
      }
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      *(undefined2 *)(lVar7 + 0x1c) = (undefined2)local_98;
      local_a8 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      local_a0 = (uint)*(ushort *)(lVar7 + 0x1e);
      local_9c = 0;
      if (local_88 != 0) {
        local_9c = *(int *)(local_88 + -4);
      }
      local_188 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x98);
      local_180 = local_a0 + local_9c;
      local_178 = local_30;
      FUN_015d9e90(*(undefined8 *)(param_1 + 0x18),local_a8,0x2e,param_1 + 8);
      FUN_00414c70(&local_68,local_88);
      FUN_00414e20(&local_68);
      if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0xc0) + 0x15) != '\0') &&
         (FUN_015c29e0(*(undefined8 *)(param_1 + 0x28),&local_168,local_34),
         (local_160 & 0x800) == 0)) {
        uVar5 = FUN_00415ab0(local_68);
        uVar6 = FUN_00415ab0(local_68);
        FUN_00429170(uVar5,uVar6);
      }
      local_ac = 0;
      if (local_88 != 0) {
        local_ac = *(undefined4 *)(local_88 + -4);
      }
      uVar5 = FUN_00415ab0(local_68);
      local_188 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x98);
      local_180 = 0xffffffff;
      local_178 = local_30;
      FUN_015d9e90(*(undefined8 *)(param_1 + 0x18),uVar5,local_ac,param_1 + 8);
      FUN_015c8800(auStack_1a8,local_34);
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      uVar5 = FUN_00415ab0(*(undefined8 *)(lVar7 + 0x3e));
      lVar7 = FUN_015c2a60(*(undefined8 *)(param_1 + 0x28),local_34);
      local_188 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x98);
      local_180 = 0xffffffff;
      local_178 = local_30;
      FUN_015d9e90(*(undefined8 *)(param_1 + 0x18),uVar5,*(undefined2 *)(lVar7 + 0x20),param_1 + 8);
      local_34 = local_34 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar7 = (**(code **)*local_30)(local_30);
  if (0 < lVar7) {
    uVar4 = (**(code **)*local_30)(local_30);
    local_188 = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x98);
    local_180 = 0xffffffff;
    local_178 = (undefined8 *)0x0;
    FUN_015d9e90(*(undefined8 *)(param_1 + 0x18),local_30[1],uVar4,param_1 + 8);
  }
  FUN_00410f20(local_30);
  local_48 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  local_48 = local_48 - local_40;
  iVar3 = FUN_015c2df0(*(undefined8 *)(param_1 + 0x28));
  if (iVar3 < 0xffff) {
    uVar2 = FUN_015c2df0(*(undefined8 *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0x8c) = uVar2;
  }
  else {
    *(undefined2 *)(param_1 + 0x8c) = 0xffff;
  }
  iVar3 = FUN_015c2df0(*(undefined8 *)(param_1 + 0x28));
  if (iVar3 < 0xffff) {
    uVar2 = FUN_015c2df0(*(undefined8 *)(param_1 + 0x28));
    *(undefined2 *)(param_1 + 0x8e) = uVar2;
  }
  else {
    *(undefined2 *)(param_1 + 0x8e) = 0xffff;
  }
  if (local_48 < 0xffffffff) {
    *(undefined4 *)(param_1 + 0x90) = (undefined4)local_48;
  }
  else {
    *(undefined4 *)(param_1 + 0x90) = 0xffffffff;
  }
  if (local_40 < 0xffffffff) {
    *(undefined4 *)(param_1 + 0x94) = (undefined4)local_40;
  }
  else {
    *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  }
  local_b8 = *(longlong *)(param_1 + 0x30);
  local_bc = 0;
  if (local_b8 != 0) {
    local_bc = *(undefined4 *)(local_b8 + -4);
  }
  *(undefined2 *)(param_1 + 0x98) = (undefined2)local_bc;
  if (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98) + 0xc) < 0xffff) {
    local_c0 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98) + 0xc);
    local_c4 = local_c0;
    if (local_c0 < 1) {
      local_c4 = 0;
    }
    *(undefined2 *)(param_1 + 0x88) = (undefined2)local_c4;
  }
  else {
    *(undefined2 *)(param_1 + 0x88) = 0xffff;
    *(undefined4 *)(param_1 + 0x5c) =
         *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x98) + 0xc);
  }
  lVar7 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  if ((0xfffffffe < lVar7) ||
     (iVar3 = FUN_015c2df0(*(undefined8 *)(param_1 + 0x28)), 0xfffe < iVar3)) {
    FUN_015c8260(auStack_1a8,local_40);
    FUN_015c8420(auStack_1a8);
  }
  FUN_004b89e0(*(undefined8 *)(param_1 + 8),param_1 + 0x84,0x16);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    uVar5 = FUN_00415ab0(*(undefined8 *)(param_1 + 0x30));
    FUN_004b89e0(*(undefined8 *)(param_1 + 8),uVar5,*(undefined2 *)(param_1 + 0x98));
  }
  if ((*(char *)(*(longlong *)(param_1 + 0x18) + 0x103) != '\0') &&
     (iVar3 = FUN_00416db0(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x90),
                           *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x88)), iVar3 != 0)) {
    FUN_00410f20(*(undefined8 *)(param_1 + 8));
    FUN_00414b50(&local_78,*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x88));
    FUN_015d9080(*(undefined8 *)(param_1 + 0x18),&local_78,0xffffffff,0);
    uVar5 = FUN_00416740(local_78);
    FUN_015bf470(uVar5);
    uVar5 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x90));
    uVar6 = FUN_00416740(local_78);
    FUN_015bf4e0(uVar5,uVar6);
    uVar5 = FUN_004b9860(&PTR_FUN_0047c498,1,local_78,0x42);
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x250) = uVar5;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x250);
  }
  FUN_00417740(&local_168,&DAT_015b9418);
  FUN_00414520(&local_d8);
  FUN_004144d0(&local_88);
  FUN_00414480(&local_78);
  FUN_00414590(&local_70,2);
  return;
}

