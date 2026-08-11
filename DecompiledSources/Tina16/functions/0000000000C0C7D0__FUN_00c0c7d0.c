/* Ghidra address: 00c0c7d0 */
/* Ghidra symbol: FUN_00c0c7d0 */


void FUN_00c0c7d0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  undefined8 local_a4;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  longlong local_70;
  undefined1 local_61;
  undefined8 local_60;
  undefined8 local_58 [2];
  int local_44;
  longlong local_40;
  longlong local_38 [2];
  int local_24;
  undefined8 local_20;
  
  local_b0 = auStack_f8;
  local_b8 = 0;
  local_38[0] = 0;
  local_61 = *(undefined1 *)(param_1 + 0x5f5);
  local_58[0] = FUN_00bfaa10(param_1);
  local_40 = 0;
  cVar3 = FUN_00bf2c80(param_1);
  if (cVar3 != '\0') {
    local_60 = FUN_00bf2b30(param_1);
    uVar4 = FUN_00bf2b90(param_1);
    local_20._0_4_ = (int)uVar4;
    local_20._4_4_ = (int)(uVar4 >> 0x20);
    local_20 = uVar4;
    if ((int)local_20 == 1) {
      local_74 = local_20._4_4_ + -1;
      local_78 = 1;
    }
    else {
      local_74 = local_20._4_4_;
      uVar4 = FUN_00c09df0(param_1);
      if ((uVar4 & 0x2000000) == 0) {
        local_78 = *(int *)(param_1 + 0x4c4) + 1;
      }
      else {
        local_78 = *(int *)(param_1 + 0x4c4) + *(int *)(param_1 + 0x618);
      }
    }
    uVar4 = FUN_00c09df0(param_1);
    if ((uVar4 & 0x2000000) == 0) {
      local_80 = (local_74 - local_60._4_4_) * 3 + 2;
      local_70 = FUN_007111e0(local_80);
      local_40 = local_70;
      FUN_00414b50(local_38,&DAT_00c0cd84);
    }
    else {
      local_80 = (*(int *)(param_1 + 0x618) + 2) * (local_74 - local_60._4_4_) +
                 *(int *)(param_1 + 0x618) + 1;
      local_70 = FUN_007111e0(local_80);
      local_40 = local_70;
      FUN_00bd1750(local_38,0x20,*(undefined4 *)(param_1 + 0x618));
    }
    local_7c = local_60._4_4_;
    if (local_60._4_4_ <= local_74 + -1) {
      iVar6 = ((local_74 + -1) - local_60._4_4_) + 1;
      do {
        FUN_00416ba0(&local_b8,local_38[0],&LAB_00c0cd94);
        uVar5 = FUN_00416740(local_b8);
        FUN_00711300(local_70,uVar5);
        local_90 = 0;
        if (local_38[0] != 0) {
          local_90 = *(int *)(local_38[0] + -4);
        }
        local_70 = local_70 + (longlong)(local_90 + 2) * 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    uVar5 = FUN_00416740(local_38[0]);
    FUN_00711300(local_70,uVar5);
    FUN_00bd0f90(*(undefined8 *)(param_1 + 0x550));
    uVar1 = local_60._4_4_;
    local_84 = local_60._4_4_;
    if (*(char *)(param_1 + 0x5f5) == '\x02') {
      if ((int)local_60 < (int)local_20) {
        local_94 = (int)local_60;
      }
      else {
        local_94 = (int)local_20;
      }
      local_88 = local_94;
    }
    else {
      local_88 = 1;
    }
    local_d8 = CONCAT71(local_d8._1_7_,1);
    FUN_00bff8e0(param_1,&local_88,&local_88,local_40);
    local_d8 = 0;
    local_d0 = 2;
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),6,&local_60,&local_20);
    lVar2 = local_38[0];
    local_98 = 0;
    if (local_38[0] != 0) {
      local_98 = *(int *)(local_38[0] + -4);
    }
    local_a4 = FUN_00bb7750((int)local_60 + local_98,uVar1);
    local_9c = 0;
    if (lVar2 != 0) {
      local_9c = *(int *)(lVar2 + -4);
    }
    local_c0 = FUN_00bb7750((int)local_20 + local_9c,local_20 >> 0x20);
    local_d8 = 0;
    local_d0 = 2;
    FUN_00bd0e70(*(undefined8 *)(param_1 + 0x550),6,&local_a4,&local_c0);
    FUN_00bd1000(*(undefined8 *)(param_1 + 0x550));
    local_58[0] = CONCAT44(local_58[0]._4_4_,local_78);
    if (1 < (int)local_20) {
      local_24 = 0;
      if (local_38[0] != 0) {
        local_24 = *(int *)(local_38[0] + -4);
      }
      local_20 = CONCAT44(local_20._4_4_,(int)local_20 + local_24);
    }
    FUN_00711270(local_40);
    local_44 = 0;
    if (local_38[0] != 0) {
      local_44 = *(int *)(local_38[0] + -4);
    }
    local_c0 = FUN_00bb7750((int)local_60 + local_44,local_60._4_4_);
    FUN_00c0a5f0(param_1,local_58,&local_c0,&local_20);
    FUN_00c086e0(param_1,local_61);
  }
  FUN_00414480(&local_b8);
  FUN_00414480(local_38);
  return;
}

