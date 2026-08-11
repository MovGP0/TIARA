/* Ghidra address: 01c78950 */
/* Ghidra symbol: FUN_01c78950 */


void FUN_01c78950(undefined8 param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 auStack_1e8 [32];
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_158;
  longlong *local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 local_e0 [88];
  undefined1 local_88 [48];
  undefined8 local_58;
  undefined8 local_50;
  longlong local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  local_140 = (undefined *)0x0;
  local_148 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_108 = 0;
  local_118 = 0;
  local_120 = (undefined *)0x0;
  local_110 = 0;
  local_100 = 0;
  local_30 = 0;
  local_38 = 0;
  local_50 = 0;
  local_58 = 0;
  local_20 = 0;
  local_28 = 0;
  local_158 = param_1;
  local_150 = param_2;
  lVar2 = FUN_01c7acf0(param_1);
  if (lVar2 != 0) {
    uVar1 = FUN_01b1d2f0();
    local_40 = 0;
    local_48._0_4_ = uVar1;
    FUN_00442f70(&local_38,L"%15d",&local_48,0);
    local_48._0_4_ = *(undefined4 *)(lVar2 + 0x14);
    local_40 = 0;
    FUN_00442f70(&local_50,L"%15d",&local_48,0);
    local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(lVar2 + 0x18));
    local_40 = 0;
    FUN_00442f70(&local_58,L"%15d",&local_48,0);
    local_1c8 = (undefined *)local_50;
    local_1c0 = local_58;
    FUN_00416cd0(&local_30,4,&DAT_01c79034,local_38);
    uVar3 = (**(code **)(*local_150 + 200))(local_150,local_30);
    if (*(byte *)(lVar2 + 0x1c) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(lVar2 + 0x1c) & 0x1f) &
              0x18U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      local_48 = lVar2 + 0x1e;
      local_40 = 4;
      FUN_00442f70(&local_130,&DAT_01c79078,&local_48,0);
      FUN_004169a0(&local_138,lVar2 + 0x47);
      local_40 = 0;
      local_48._0_4_ = *(int *)(lVar2 + 0xf8) + 1;
      FUN_00442f70(&local_140,&DAT_01c790d8,&local_48,0);
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(lVar2 + 0xfc));
      local_40 = 0;
      FUN_00442f70(&local_148,&DAT_01c790ec,&local_48,0);
      local_1c8 = &LAB_01c7913c;
      local_1c0 = local_138;
      local_1b8 = &DAT_01c790c4;
      local_1b0 = local_140;
      local_1a8 = local_148;
      local_1a0 = &DAT_01c79100;
      local_198 = *(undefined8 *)(lVar2 + 0x108);
      local_190 = &DAT_01c7912c;
      FUN_00416cd0(&local_128,10,&DAT_01c79064,local_130);
      (**(code **)(*local_150 + 200))(local_150,local_128);
    }
    else {
      if (*(char *)(lVar2 + 0xc2) == '\0') {
        FUN_004169a0(&local_20,lVar2 + 0x47);
        FUN_004169a0(&local_28,lVar2 + 0x99);
      }
      else {
        FUN_00414ff0(local_88,lVar2 + 0x47);
        FUN_00415110(local_88,&DAT_01c79053,0x29);
        FUN_00414ff0(local_e0,local_88);
        FUN_00415110(local_e0,lVar2 + 0x70,0x51);
        FUN_004169a0(&local_20,local_e0);
        FUN_00414ff0(local_88,lVar2 + 0x99);
        FUN_00415110(local_88,&DAT_01c79053,0x29);
        FUN_00414ff0(local_e0,local_88);
        FUN_00415110(local_e0,lVar2 + 0xc2,0x51);
        FUN_004169a0(&local_28,local_e0);
      }
      local_48 = lVar2 + 0x1e;
      local_40 = 4;
      FUN_00442f70(&local_f0,&DAT_01c79078,&local_48,0);
      FUN_01c786a0(auStack_1e8,&local_100,local_20);
      local_48 = local_100;
      local_40 = 0x11;
      FUN_00442f70(&local_f8,L"%28s",&local_48,0);
      FUN_01c786a0(auStack_1e8,&local_110,local_28);
      local_48 = local_110;
      local_40 = 0x11;
      FUN_00442f70(&local_108,L"%28s",&local_48,0);
      local_40 = 0;
      local_48._0_4_ = *(int *)(lVar2 + 0xf8) + 1;
      FUN_00442f70(&local_118,&DAT_01c790d8,&local_48,0);
      local_48 = CONCAT44(local_48._4_4_,*(undefined4 *)(lVar2 + 0xfc));
      local_40 = 0;
      FUN_00442f70(&local_120,&DAT_01c790ec,&local_48,0);
      local_1c8 = &DAT_01c7908c;
      local_1c0 = local_f8;
      local_1b8 = &DAT_01c790b4;
      local_1b0 = &DAT_01c7908c;
      local_1a8 = local_108;
      local_1a0 = &DAT_01c790c4;
      local_198 = local_118;
      local_190 = local_120;
      local_188 = &DAT_01c79100;
      local_180 = *(undefined8 *)(lVar2 + 0x108);
      local_178 = &DAT_01c79118;
      local_170 = *(undefined8 *)(lVar2 + 0x110);
      local_168 = &DAT_01c7912c;
      FUN_00416cd0(&local_e8,0xf,&DAT_01c79064,local_f0);
      (**(code **)(*local_150 + 200))(local_150,local_e8);
    }
  }
  FUN_00414560(&local_148,0xd);
  FUN_00414560(&local_58,2);
  FUN_00414560(&local_38,4);
  return;
}

