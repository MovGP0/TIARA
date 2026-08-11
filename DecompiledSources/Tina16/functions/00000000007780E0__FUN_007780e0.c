/* Ghidra address: 007780e0 */
/* Ghidra symbol: FUN_007780e0 */


void FUN_007780e0(longlong param_1,int *param_2,byte param_3,uint param_4)

{
  bool bVar1;
  byte local_res18;
  uint local_res20;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined1 *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_70 = auStack_a8;
  local_28 = *(undefined8 *)param_2;
  local_20 = *(undefined8 *)(param_2 + 2);
  local_88 = 0;
  FUN_00423010(&local_60,0,0,0);
  local_48 = local_60;
  local_40 = uStack_58;
  local_50 = FUN_00781840();
  if ((param_4 & 0x100) == 0) {
    local_res20 = param_4;
    if ((param_4 & 0x10) != 0) {
      local_res20 = param_4 | 3;
    }
    if ((local_res20 & 0x20) != 0) {
      local_res20 = local_res20 | 6;
    }
    if ((local_res20 & 0x40) != 0) {
      local_res20 = local_res20 | 9;
    }
    if ((local_res20 & 0x80) != 0) {
      local_res20 = local_res20 | 0xc;
    }
  }
  else {
    local_res20 = param_4 | 0xf;
  }
  local_res18 = param_3;
  if ((param_3 & 0x10) != 0) {
    local_res18 = 6;
  }
  if ((local_res18 & 0x20) != 0) {
    local_res18 = 9;
  }
  if ((local_res18 & 0x40) != 0) {
    local_res18 = 5;
  }
  if ((local_res18 & 0x80) != 0) {
    local_res18 = 10;
  }
  local_38 = FUN_0079bb80(&PTR_FUN_0077f5a0,1);
  FUN_005fd6d0(*(undefined8 *)(param_1 + 0x78),1);
  local_20 = CONCAT44(local_20._4_4_ + -1,(int)local_20 + -1);
  if ((local_res18 & 4) == 0) {
    local_30 = FUN_007793c0(local_50,0xff000010);
    local_2c = FUN_007793c0(local_50,0xff000014);
  }
  else {
    local_30 = FUN_007793c0(local_50,0xff000015);
    local_2c = FUN_007793c0(local_50,0xff000016);
  }
  bVar1 = (local_res18 & 4) != 0;
  if ((bVar1) || ((local_res18 & 8) != 0)) {
    FUN_00777e00(auStack_a8,bVar1,(local_res18 & 8) != 0);
    if ((local_res20 & 0x10000) != 0) {
      if ((local_res20 & 1) != 0) {
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 1);
      }
      if ((local_res20 & 4) != 0) {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 + 1);
      }
      if ((local_res20 & 2) != 0) {
        local_48 = CONCAT44(local_48._4_4_ + 1,(int)local_48);
      }
      if ((local_res20 & 8) != 0) {
        local_40 = CONCAT44(local_40._4_4_ + 1,(int)local_40);
      }
    }
    FUN_00423b10(&local_28,0xffffffff,0xffffffff);
  }
  if (((local_res18 & 1) != 0) || ((local_res18 & 2) != 0)) {
    if (((local_res18 & 4) != 0) && ((local_res18 & 1) != 0)) {
      local_30 = FUN_007793c0(local_50,0xff000010);
      local_2c = FUN_007793c0(local_50,0xff000014);
    }
    FUN_00777e00(auStack_a8,(local_res18 & 1) != 0,(local_res18 & 2) != 0);
    if ((local_res20 & 0x10000) != 0) {
      if ((local_res20 & 1) != 0) {
        local_48 = CONCAT44(local_48._4_4_,(int)local_48 + 1);
      }
      if ((local_res20 & 4) != 0) {
        local_40 = CONCAT44(local_40._4_4_,(int)local_40 + 1);
      }
      if ((local_res20 & 2) != 0) {
        local_48 = CONCAT44(local_48._4_4_ + 1,(int)local_48);
      }
      if ((local_res20 & 8) != 0) {
        local_40 = CONCAT44(local_40._4_4_ + 1,(int)local_40);
      }
    }
    FUN_00423b10(&local_28,0xffffffff,0xffffffff);
  }
  local_20 = CONCAT44(local_20._4_4_ + 1,(int)local_20 + 1);
  FUN_00410f20(local_38);
  if ((local_res20 & 0x10000) != 0) {
    *param_2 = *param_2 + (int)local_48;
    param_2[1] = param_2[1] + local_48._4_4_;
    param_2[2] = param_2[2] - (int)local_40;
    param_2[3] = param_2[3] - local_40._4_4_;
  }
  return;
}

