/* Ghidra address: 00635ce0 */
/* Ghidra symbol: FUN_00635ce0 */


void FUN_00635ce0(longlong *param_1,undefined8 *param_2,int param_3,char param_4)

{
  undefined1 auStack_158 [32];
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
  undefined1 *local_d0;
  int local_c4;
  int iStack_c0;
  int local_bc;
  int local_b8;
  int iStack_b4;
  int local_b0;
  int local_ac;
  int iStack_a8;
  int local_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int local_8c;
  int local_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int local_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int iStack_54;
  int local_50;
  int local_4c;
  int iStack_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int local_38;
  int local_34;
  int iStack_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_d0 = auStack_158;
  local_28 = *param_2;
  if (param_1 != (longlong *)0x0) {
    local_20 = FUN_005fdd10(&DAT_005f38c8,1,param_1[0xf]);
    FUN_005fd6d0(param_1[0xf],1);
    local_2c = local_28._4_4_;
    local_34 = (int)local_28;
    iStack_30 = local_28._4_4_;
    iStack_3c = local_28._4_4_ + param_3;
    local_64 = (int)local_28 + param_3;
    iStack_48 = local_28._4_4_ - param_3;
    local_58 = (int)local_28 + param_3 * 3;
    iStack_54 = iStack_48 + -1;
    iStack_60 = iStack_3c + -1;
    iStack_6c = local_28._4_4_ + -2;
    local_70 = (int)local_28 + -1;
    local_100 = local_28;
    local_f8 = CONCAT44(iStack_3c,local_64);
    local_f0 = CONCAT44(iStack_48,local_58);
    local_e8 = CONCAT44(iStack_54,local_58);
    local_e0 = CONCAT44(iStack_60,local_64);
    local_d8 = CONCAT44(iStack_6c,local_70);
    local_68 = iStack_6c;
    local_5c = iStack_60;
    local_50 = iStack_54;
    local_4c = local_58;
    local_44 = iStack_48;
    local_40 = local_64;
    local_38 = iStack_3c;
    (**(code **)(*param_1 + 0xe0))(param_1,&local_100,5);
    if (param_4 != '\0') {
      FUN_005fd4e0(param_1[0xf],0xffffff);
      iStack_78 = local_28._4_4_ + -1;
      local_88 = (int)local_28 + -1;
      local_80 = local_28._4_4_;
      iStack_84 = local_28._4_4_;
      iStack_90 = local_28._4_4_ + 1;
      local_94 = (int)local_28;
      iStack_9c = local_28._4_4_ + param_3 + 1;
      local_a0 = (int)local_28 + param_3;
      iStack_a8 = local_28._4_4_ - param_3;
      local_ac = (int)local_28 + param_3 * 3 + 1;
      iStack_b4 = (local_28._4_4_ - param_3) + -1;
      local_b8 = (int)local_28 + param_3 * 3 + 1;
      iStack_c0 = (local_28._4_4_ - param_3) + -2;
      local_c4 = (int)local_28 + param_3 * 3 + 1;
      local_138 = CONCAT44(iStack_78,local_88);
      local_130 = CONCAT44(local_28._4_4_,local_88);
      local_128 = CONCAT44(iStack_90,(int)local_28);
      local_120 = CONCAT44(iStack_9c,local_a0);
      local_118 = CONCAT44(iStack_a8,local_ac);
      local_110 = CONCAT44(iStack_b4,local_b8);
      local_108 = CONCAT44(iStack_c0,local_c4);
      local_bc = iStack_c0;
      local_b0 = iStack_b4;
      local_a4 = iStack_a8;
      local_98 = iStack_9c;
      local_8c = iStack_90;
      local_7c = local_88;
      local_74 = iStack_78;
      (**(code **)(*param_1 + 0xe0))(param_1,&local_138,6);
    }
    FUN_00410f20(local_20);
  }
  return;
}

