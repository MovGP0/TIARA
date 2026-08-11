/* Ghidra address: 0046e020 */
/* Ghidra symbol: FUN_0046e020 */


longlong FUN_0046e020(longlong param_1,char param_2,ushort param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong local_res8;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  uint local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  uint local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  longlong local_48;
  int local_3c;
  longlong local_38;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_50 = auStack_f8;
  local_90 = 0;
  local_c8 = 0;
  local_88 = 0;
  local_80 = 0;
  local_58 = 0;
  local_res8 = param_1;
  puVar2 = auStack_f8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_50;
  }
  local_50 = puVar2;
  FUN_00410e60(local_res8,0);
  FUN_00411e10(DAT_020115c0,0xffffffff);
  local_1c = param_3 - 0x100;
  if ((local_1c < 0) || (param_3 < 0x10f)) {
    FUN_0041ddd0(&local_58,PTR_PTR_02002b28);
    local_78 = *(undefined8 *)PTR_PTR_02005288;
    local_70 = 0x11;
    local_68 = (uint)param_3;
    local_60 = 0;
    local_d8 = 1;
    uVar3 = FUN_0044d530(&PTR_FUN_00436680,1,local_58,&local_78);
    FUN_004134c0(uVar3);
  }
  local_38 = DAT_020115b8;
  if (DAT_020115b8 != 0) {
    local_38 = *(longlong *)(DAT_020115b8 + -8);
  }
  local_20 = (int)local_38;
  if ((int)local_38 <= local_1c) {
    local_24 = (local_1c / 0xf + 1) * 0xf;
    if (0x7ff < local_24) {
      FUN_0041ddd0(&local_80,PTR_PTR_020022b8);
      uVar3 = FUN_0044d490(&PTR_FUN_00436680,1,local_80);
      FUN_004134c0(uVar3);
    }
    FUN_00419260(&DAT_020115b8,&DAT_0046de48,1,(longlong)local_24);
    local_3c = local_20;
    local_48 = DAT_020115b8;
    if (DAT_020115b8 != 0) {
      local_48 = *(longlong *)(DAT_020115b8 + -8);
    }
    local_28 = local_20;
    if (local_20 <= (int)local_48 + -1) {
      iVar4 = (((int)local_48 + -1) - local_20) + 1;
      do {
        *(undefined8 *)(DAT_020115b8 + (longlong)local_28 * 8) = 0;
        local_28 = local_28 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  lVar5 = (longlong)local_1c;
  lVar1 = *(longlong *)(DAT_020115b8 + lVar5 * 8);
  if (lVar1 != 0) {
    if (lVar1 == DAT_01dc4398) {
      FUN_0041ddd0(&local_88,PTR_PTR_02003408);
      local_78 = *(undefined8 *)PTR_PTR_02005288;
      local_70 = 0x11;
      local_68 = (uint)param_3;
      local_60 = 0;
      local_d8 = 1;
      uVar3 = FUN_0044d530(&PTR_FUN_00436680,1,local_88,&local_78);
      FUN_004134c0(uVar3);
    }
    else {
      FUN_0041ddd0(&local_90,PTR_PTR_02001880);
      local_c0 = *(undefined8 *)PTR_PTR_02005288;
      local_b8 = 0x11;
      local_b0 = (uint)param_3;
      local_a8 = 0;
      FUN_00410ae0(**(undefined8 **)(DAT_020115b8 + lVar5 * 8),&local_c8);
      local_a0 = local_c8;
      local_98 = 0x11;
      local_d8 = 2;
      uVar3 = FUN_0044d530(&PTR_FUN_00436680,1,local_90,&local_c0);
      FUN_004134c0(uVar3);
    }
  }
  *(longlong *)(DAT_020115b8 + lVar5 * 8) = local_res8;
  *(ushort *)(local_res8 + 8) = param_3;
  FUN_00412130(DAT_020115c0);
  FUN_00414480(&local_c8);
  FUN_00414560(&local_90,3);
  FUN_00414480(&local_58);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

