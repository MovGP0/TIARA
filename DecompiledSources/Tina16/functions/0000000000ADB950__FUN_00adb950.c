/* Ghidra address: 00adb950 */
/* Ghidra symbol: FUN_00adb950 */


void FUN_00adb950(longlong param_1,char param_2,char param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 *local_f0;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  int local_b0;
  char local_a9;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_50;
  undefined8 local_48;
  byte local_3d;
  int local_3c;
  int local_38;
  uint local_34;
  undefined4 local_30;
  undefined1 local_29;
  longlong local_28;
  undefined8 local_20;
  
  local_f0 = auStack_178;
  local_128 = 0;
  local_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  local_28 = 0;
  local_3d = 0;
  local_38 = 0;
  local_30 = 0xffffffff;
  local_29 = 1;
  iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48) + 0x10);
  local_3c = 0;
  puVar1 = auStack_178;
  if (-1 < iVar5 + -1) {
    do {
      local_f0 = puVar1;
      local_68 = *(undefined8 *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
      local_60 = FUN_004aeac0(local_68,local_3c);
      cVar2 = *(char *)(local_60 + 8);
      if (cVar2 == '\x0e') {
        cVar2 = FUN_00ad6b90(*(undefined8 *)(param_1 + 0x2a0),*(undefined8 *)(local_60 + 0x28));
        if (cVar2 != '\0') {
          local_3d = local_3d | 8;
          local_88 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
          lVar3 = FUN_004aeac0(local_88,*(int *)(local_88 + 0x10) + -1);
          local_29 = *(undefined1 *)(lVar3 + 0x6c);
          local_90 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
          lVar3 = FUN_004aeac0(local_90,*(int *)(local_90 + 0x10) + -1);
          *(undefined4 *)(local_60 + 0x30) = *(undefined4 *)(lVar3 + 0x70);
        }
      }
      else if (cVar2 == '\x13') {
        cVar2 = FUN_00a602d0(*(undefined8 *)(local_60 + 0x28),0,&local_34);
        if (cVar2 != '\0') {
          local_3d = local_3d | 2;
        }
      }
      else if (cVar2 == '\x1b') {
        if (((param_2 != '\x19') && (*(longlong *)(local_60 + 0x28) != 0)) &&
           (FUN_00414b50(&local_28,*(undefined8 *)(local_60 + 0x28)), local_28 != 0)) {
          local_3d = local_3d | 1;
        }
      }
      else if (cVar2 == 'K') {
        local_70 = *(longlong *)(local_60 + 0x28);
        local_74 = 0;
        if (local_70 != 0) {
          local_74 = *(int *)(local_70 + -4);
        }
        if ((1 < local_74) &&
           ((**(short **)(local_60 + 0x28) == 0x2b || (**(short **)(local_60 + 0x28) == 0x2d)))) {
          *(int *)(local_60 + 0x18) =
               *(int *)(local_60 + 0x18) + *(int *)(*(longlong *)(param_1 + 0x2a0) + 0x50);
        }
        local_78 = *(int *)(local_60 + 0x18);
        local_7c = local_78;
        if (7 < local_78) {
          local_7c = 7;
        }
        if (local_7c < 1) {
          local_80 = 1;
        }
        else {
          local_80 = local_7c;
        }
        local_38 = local_80;
        if (param_2 == '\x19') {
          *(int *)(*(longlong *)(param_1 + 0x2a0) + 0x50) = local_80;
        }
        local_3d = local_3d | 4;
      }
      local_3c = local_3c + 1;
      iVar5 = iVar5 + -1;
      puVar1 = local_f0;
    } while (iVar5 != 0);
  }
  local_98 = *(longlong *)(param_1 + 0x2a0);
  local_a0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0x48);
  if (local_a0 == 0) {
    local_158 = 0;
    FUN_00ac0980(*(undefined8 *)(local_98 + 0xe8),0x31,0,0);
  }
  else {
    local_20 = 0;
    local_a8 = 0;
    iVar5 = *(int *)(local_a0 + 0x10);
    local_b0 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar3 = FUN_00a72910(local_a0,local_b0);
        if (*(char *)(lVar3 + 8) == 'P') {
          local_a9 = '\x01';
          local_a8 = FUN_00a72910(local_a0,local_b0);
          goto code_r0x00adbd81;
        }
        local_b0 = local_b0 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
    local_a9 = '\0';
code_r0x00adbd81:
    if (local_a9 != '\0') {
      local_20 = FUN_00a52400(&PTR_FUN_00a4ffc0,1);
      FUN_00a62c40(*(undefined8 *)(local_a8 + 0x28),local_20);
    }
    local_158 = 0;
    FUN_00ac0980(*(undefined8 *)(local_98 + 0xe8),0x31,local_20,local_a0);
    FUN_00410f20(local_20);
  }
  local_c0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
  local_50 = FUN_004aeac0(local_c0,*(int *)(local_c0 + 0x10) + -1);
  FUN_00a557b0(local_50);
  cVar2 = FUN_00a554f0(local_50);
  if (cVar2 != '\0') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    FUN_00aa8ac0(*(undefined8 *)(lVar3 + 0x20),*(undefined4 *)(lVar3 + 0x28),local_50,1);
  }
  if ((local_3d & 2) != 0) {
    local_c8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    uVar4 = FUN_004aeac0(local_c8,*(int *)(local_c8 + 0x10) + -1);
    FUN_00468530(&local_108,local_34 | *(uint *)PTR_DAT_02005078,0xfffffffffffffffc);
    FUN_00a52f40(uVar4,&local_108,7);
  }
  if ((local_3d & 4) != 0) {
    if (param_3 == '\0') {
      local_48 = *(undefined8 *)(PTR_DAT_02001908 + (longlong)local_38 * 8 + -8);
    }
    else {
      local_48 = *(undefined8 *)(PTR_DAT_02002f58 + (longlong)local_38 * 8 + -8);
    }
    local_d0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    uVar4 = FUN_004aeac0(local_d0,*(int *)(local_d0 + 0x10) + -1);
    FUN_00468860(&local_120,local_48);
    FUN_00a52f40(uVar4,&local_120,1);
  }
  if ((local_3d & 1) != 0) {
    local_d8 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    uVar4 = FUN_004aeac0(local_d8,*(int *)(local_d8 + 0x10) + -1);
    FUN_00a5b8c0(&local_128,local_28);
    FUN_00468a10(&local_140,local_128);
    FUN_00a52f40(uVar4,&local_140,0);
  }
  if ((local_3d & 8) != 0) {
    local_e0 = *(longlong *)(*(longlong *)(param_1 + 0x2a0) + 0xe8);
    uVar4 = FUN_004aeac0(local_e0,*(int *)(local_e0 + 0x10) + -1);
    FUN_00a53420(uVar4,local_29,local_30);
  }
  FUN_00460ba0(&local_140);
  FUN_00414480(&local_128);
  FUN_00417840(&local_120,&DAT_004013d8,2);
  FUN_00414480(&local_28);
  return;
}

