/* Ghidra address: 0072add0 */
/* Ghidra symbol: FUN_0072add0 */


undefined1 FUN_0072add0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined1 *local_100;
  uint *local_f0;
  uint *local_e8;
  longlong local_e0;
  longlong local_d8;
  byte local_cd;
  undefined4 local_cc;
  undefined8 local_c8;
  uint local_b8;
  uint local_b4;
  undefined8 local_b0;
  ulonglong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  undefined4 local_84;
  int local_80;
  undefined8 local_7c;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  ulonglong local_50;
  undefined8 local_48;
  code *local_40;
  undefined8 *local_38;
  int local_2c;
  byte local_25;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 *puVar5;
  
  local_100 = auStack_148;
  local_118 = 0;
  iVar1 = FUN_0044f080();
  if (iVar1 < 6) {
    FUN_00410ae0(*param_1,&local_118);
    local_110 = local_118;
    local_108 = 0x11;
    local_128 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_0071c108,1,PTR_PTR_020036f8,&local_110);
    FUN_004134c0(uVar2);
  }
  puVar5 = (undefined8 *)0x0;
  FUN_0040d200(&local_cc,0xa0,0);
  local_cc = 0xa0;
  local_b8 = 0;
  local_25 = 0;
  local_e8 = &DAT_01e06608;
  do {
    if (local_25 < 0x20) {
      bVar6 = (1 << (local_25 & 0x1f) & *(uint *)(param_1 + 0x19)) != 0;
      puVar5 = param_1;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_b8 = local_b8 | *local_e8;
    }
    local_25 = local_25 + 1;
    local_e8 = local_e8 + 1;
  } while (local_25 != 0x11);
  local_b4 = 0;
  local_cd = 0;
  local_f0 = &DAT_01e0664c;
  do {
    if (local_cd < 8) {
      uVar3 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << (local_cd & 0x1f);
      puVar5 = (undefined8 *)(ulonglong)uVar3;
      bVar6 = ((byte)uVar3 & *(byte *)(param_1 + 0x12)) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_b4 = local_b4 | *local_f0;
    }
    local_cd = local_cd + 1;
    local_f0 = local_f0 + 1;
  } while (local_cd != 6);
  local_c8 = param_2;
  if (param_1[0x21] != 0) {
    local_98 = FUN_00416740(param_1[0x21]);
  }
  if (param_1[0x22] != 0) {
    local_a0 = FUN_00416740(param_1[0x22]);
  }
  if (param_1[0x11] != 0) {
    local_b0 = FUN_00416740(param_1[0x11]);
  }
  if ((*(uint *)(param_1 + 0x19) & 2) == 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xe4);
    if (uVar3 < 8) {
      uVar4 = (int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)uVar3 & 0x1f);
      puVar5 = (undefined8 *)(ulonglong)uVar4;
      bVar6 = (uVar4 & 0x1f) != 0;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_a8 = *(ulonglong *)(&DAT_01e065e0 + (longlong)(int)uVar3 * 8);
    }
    else {
      local_a8 = (ulonglong)*(ushort *)((longlong)param_1 + 0xe4);
    }
  }
  else {
    local_a8 = FUN_0060ce20(param_1[0x14]);
  }
  local_84 = *(undefined4 *)(&DAT_01e06664 + (ulonglong)*(byte *)(param_1 + 0x15) * 4);
  if (param_1[0x1a] != 0) {
    local_48 = FUN_00416740(param_1[0x1a]);
  }
  if ((*(uint *)(param_1 + 0x19) & 4) == 0) {
    uVar3 = *(uint *)((longlong)param_1 + 0xcc);
    if (uVar3 < 8) {
      bVar6 = ((int)CONCAT71((int7)((ulonglong)puVar5 >> 8),1) << ((byte)uVar3 & 0x1f) & 0x1fU) != 0
      ;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) {
      local_50 = *(ulonglong *)(&DAT_01e065e0 + (longlong)(int)uVar3 * 8);
    }
    else {
      local_50 = (ulonglong)*(ushort *)((longlong)param_1 + 0xcc);
    }
  }
  else {
    local_50 = FUN_0060ce20(param_1[0x13]);
  }
  if (param_1[0x24] != 0) {
    local_70 = FUN_00416740(param_1[0x24]);
  }
  if (param_1[0x18] != 0) {
    local_68 = FUN_00416740(param_1[0x18]);
  }
  if (param_1[0x16] != 0) {
    local_58 = FUN_00416740(param_1[0x16]);
  }
  local_d8 = param_1[0x10];
  local_90 = *(int *)(*(longlong *)(local_d8 + 0x10) + 0x10);
  if (local_90 != 0) {
    local_8c = FUN_0072a5e0();
  }
  if (*(longlong *)(param_1[0x10] + 0x40) != 0) {
    local_84 = *(undefined4 *)(*(longlong *)(param_1[0x10] + 0x40) + 0x2c);
  }
  local_e0 = param_1[0x20];
  local_80 = *(int *)(*(longlong *)(local_e0 + 0x10) + 0x10);
  if (local_80 != 0) {
    local_7c = FUN_0072a5e0();
  }
  if (((*(uint *)(param_1 + 0x19) & 0x4000) == 0) && (*(longlong *)(param_1[0x20] + 0x40) != 0)) {
    local_74 = *(undefined4 *)(*(longlong *)(param_1[0x20] + 0x40) + 0x2c);
  }
  local_40 = FUN_0072ad80;
  local_38 = param_1;
  local_10 = FUN_007f94c0(param_2);
  local_18 = FUN_007f9260();
  iVar1 = FUN_00612160(&local_cc,&local_20,&local_24,&local_2c);
  local_19 = iVar1 == 0;
  *(undefined4 *)(param_1 + 0x1d) = local_20;
  if ((bool)local_19) {
    uVar2 = FUN_0072a690(param_1[0x10],local_20);
    param_1[0xf] = uVar2;
    uVar2 = FUN_0072a690(param_1[0x20],local_24);
    param_1[0x1f] = uVar2;
    if (local_2c == 0) {
      *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) & 0xfffffeff;
    }
    else {
      *(uint *)(param_1 + 0x19) = *(uint *)(param_1 + 0x19) | 0x100;
    }
  }
  FUN_007f95c0(local_10);
  thunk_FUN_04161dbd(param_2);
  FUN_007f9270(local_18);
  FUN_00414480(&local_118);
  return local_19;
}

