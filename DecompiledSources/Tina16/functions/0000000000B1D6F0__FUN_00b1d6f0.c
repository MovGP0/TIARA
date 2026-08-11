/* Ghidra address: 00b1d6f0 */
/* Ghidra symbol: FUN_00b1d6f0 */


undefined8 FUN_00b1d6f0(longlong param_1,undefined8 param_2,double param_3)

{
  int iVar1;
  undefined1 auStack_1a8 [32];
  undefined *local_188;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a0;
  uint local_94;
  longlong local_90;
  uint local_84;
  longlong local_80;
  int local_78;
  uint local_74;
  longlong local_70;
  uint local_64;
  longlong local_60;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  int local_34;
  double local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_b0 = auStack_1a8;
  local_178 = 0;
  local_170 = 0;
  local_140 = 0;
  local_148 = 0;
  local_150 = 0;
  local_158 = 0;
  local_168 = 0;
  local_160 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = (undefined *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = param_3;
  iVar1 = FUN_00416420(*(undefined8 *)(param_1 + 0x98),0);
  if (iVar1 == 0) {
    FUN_00414480(local_20);
    FUN_00448450(local_20,local_30,PTR_DAT_02004830);
    FUN_004168e0(param_2,local_20[0]);
    FUN_00414480(local_20);
  }
  else {
    local_60 = *(longlong *)(param_1 + 0x98);
    local_64 = 0;
    if (local_60 != 0) {
      local_64 = *(uint *)(local_60 + -4) >> 1;
    }
    FUN_00416430(&local_b8,*(undefined8 *)(param_1 + 0x98),local_64,1);
    iVar1 = FUN_00416420(local_b8,&DAT_00b1e4a8);
    if (iVar1 == 0) {
      FUN_00b15430(&local_c0,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e4a8,&DAT_00b1e4b0);
      FUN_00414be0(param_1 + 0x98,local_c0);
      local_30 = local_30 * 100.0;
    }
    if (local_30 < 0.0) {
      local_34 = FUN_00417170(&DAT_00b1e4bc,*(undefined8 *)(param_1 + 0x98),1);
      if (0 < local_34) {
        local_70 = *(longlong *)(param_1 + 0x98);
        local_74 = 0;
        if (local_70 != 0) {
          local_74 = *(uint *)(local_70 + -4) >> 1;
        }
        FUN_00416430(param_1 + 0x98,*(undefined8 *)(param_1 + 0x98),local_34 + 1,local_74 - local_34
                    );
        local_34 = FUN_00417170(&DAT_00b1e4bc,*(undefined8 *)(param_1 + 0x98),1);
        if (0 < local_34) {
          FUN_00416430(param_1 + 0x98,*(undefined8 *)(param_1 + 0x98),1,local_34 + -1);
        }
      }
      iVar1 = FUN_00417170(&DAT_00b1e4c4,*(undefined8 *)(param_1 + 0x98),1);
      if ((0 < iVar1) &&
         (iVar1 = FUN_00417170(&DAT_00b1e4cc,*(undefined8 *)(param_1 + 0x98),1), 0 < iVar1)) {
        local_30 = local_30 * -1.0;
      }
    }
    else {
      local_34 = FUN_00417170(&DAT_00b1e4bc,*(undefined8 *)(param_1 + 0x98),1);
      if (0 < local_34) {
        FUN_00416430(param_1 + 0x98,*(undefined8 *)(param_1 + 0x98),1,local_34 + -1);
      }
    }
    FUN_00415dd0(&local_50,*(undefined8 *)PTR_DAT_02004830,0);
    FUN_004144d0(&local_48);
    local_78 = 0;
    if (local_50 != 0) {
      local_78 = *(int *)(local_50 + -4);
    }
    local_34 = 1;
    iVar1 = local_78;
    if (0 < local_78) {
      do {
        FUN_004153d0(&local_c8,*(undefined1 *)(local_50 + -1 + (longlong)local_34),0);
        local_188 = local_c8;
        FUN_00415980(&local_48,3,local_48,&DAT_00b1e4dc);
        local_34 = local_34 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_00415f40(&local_d8,local_48);
    FUN_00b15430(&local_d0,*(undefined8 *)(param_1 + 0x98),local_d8,&DAT_00b1e4e4);
    FUN_00414be0(param_1 + 0x98,local_d0);
    FUN_00b15430(&local_e0,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e4ec,0);
    FUN_00414be0(param_1 + 0x98,local_e0);
    FUN_00b15430(&local_e8,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e4f8,0);
    FUN_00414be0(param_1 + 0x98,local_e8);
    FUN_00b15430(&local_f0,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e504,0);
    FUN_00414be0(param_1 + 0x98,local_f0);
    FUN_00b15430(&local_f8,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e510,&DAT_00b1e518);
    FUN_00414be0(param_1 + 0x98,local_f8);
    FUN_00b15430(&local_100,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e524,0);
    FUN_00414be0(param_1 + 0x98,local_100);
    FUN_00b15430(&local_108,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e52c,0);
    FUN_00414be0(param_1 + 0x98,local_108);
    FUN_00b15430(&local_110,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e538,0);
    FUN_00414be0(param_1 + 0x98,local_110);
    FUN_00b15430(&local_118,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e540,&DAT_00b1e4c4);
    FUN_00414be0(param_1 + 0x98,local_118);
    iVar1 = FUN_00417170(&DAT_00b1e4c4,*(undefined8 *)(param_1 + 0x98),1);
    if ((0 < iVar1) &&
       (iVar1 = FUN_00417170(&DAT_00b1e4cc,*(undefined8 *)(param_1 + 0x98),1), iVar1 == 0)) {
      FUN_00b15430(&local_120,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e4c4,0);
      FUN_00414be0(param_1 + 0x98,local_120);
    }
    iVar1 = FUN_00417170(&DAT_00b1e4c4,*(undefined8 *)(param_1 + 0x98),1);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_00417170(&DAT_00b1e4cc,*(undefined8 *)(param_1 + 0x98),1), 0 < iVar1)) {
      FUN_00b15430(&local_128,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e4cc,0);
      FUN_00414be0(param_1 + 0x98,local_128);
    }
    local_34 = FUN_00417170(&DAT_00b1e54c,*(undefined8 *)(param_1 + 0x98),1);
    while (local_34 == 1) {
      local_34 = FUN_00417170(&DAT_00b1e554,*(undefined8 *)(param_1 + 0x98),1);
      if (0 < local_34) {
        local_80 = *(longlong *)(param_1 + 0x98);
        local_84 = 0;
        if (local_80 != 0) {
          local_84 = *(uint *)(local_80 + -4) >> 1;
        }
        FUN_00416430(param_1 + 0x98,*(undefined8 *)(param_1 + 0x98),local_34 + 1,local_84 - local_34
                    );
      }
      local_34 = FUN_00417170(&DAT_00b1e54c,*(undefined8 *)(param_1 + 0x98),1);
    }
    local_34 = FUN_00417170(&DAT_00b1e55c,*(undefined8 *)(param_1 + 0x98),1);
    if (0 < local_34) {
      local_90 = *(longlong *)(param_1 + 0x98);
      local_94 = 0;
      if (local_90 != 0) {
        local_94 = *(uint *)(local_90 + -4) >> 1;
      }
      FUN_00415530(&local_130,*(undefined8 *)(param_1 + 0x98),0);
      FUN_00415ad0(&local_40,local_130,local_34 + 2,local_94 - local_34);
      FUN_004156b0(&local_138,local_40,&DAT_00b1e570);
      local_34 = FUN_00417250(&DAT_00b1e570,local_138,1);
      FUN_00415ad0(&local_40,local_40,1,local_34 + -1);
      FUN_004156b0(&local_148,&DAT_00b1e580,local_40);
      FUN_00415f40(&local_150,local_148);
      FUN_00b1cb30(param_1,&local_160,local_30,local_40);
      local_188 = &DAT_00b1e590;
      FUN_00415980(&local_158,3,&DAT_00b1e590,local_160);
      FUN_00415f40(&local_168,local_158);
      FUN_00b15430(&local_140,*(undefined8 *)(param_1 + 0x98),local_150,local_168);
      FUN_00414be0(param_1 + 0x98,local_140);
      FUN_00b15430(&local_170,*(undefined8 *)(param_1 + 0x98),&DAT_00b1e598,0);
      FUN_00414be0(param_1 + 0x98,local_170);
    }
    FUN_00414480(&local_28);
    FUN_004168b0(&local_178,*(undefined8 *)(param_1 + 0x98));
    local_a0 = local_178;
    FUN_004485a0(&local_28,local_178,local_30,PTR_DAT_02004830);
    FUN_004168e0(param_2,local_28);
    FUN_00414480(&local_28);
  }
  FUN_00414480(&local_178);
  FUN_004145c0(&local_170,2);
  FUN_00414590(&local_160,2);
  FUN_00414520(&local_150);
  FUN_004144d0(&local_148);
  FUN_00414520(&local_140);
  FUN_00414590(&local_138,2);
  FUN_004145c0(&local_128,0xc);
  FUN_004144d0(&local_c8);
  FUN_004145c0(&local_c0,2);
  FUN_00414590(&local_50,3);
  FUN_00414560(&local_28,2);
  return param_2;
}

