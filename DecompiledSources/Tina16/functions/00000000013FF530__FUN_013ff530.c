/* Ghidra address: 013ff530 */
/* Ghidra symbol: FUN_013ff530 */


void FUN_013ff530(longlong param_1,int param_2,int param_3,char param_4,byte param_5,
                 longlong param_6,undefined8 param_7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_148 [32];
  undefined *local_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  undefined4 *local_60;
  undefined8 local_58;
  undefined4 *local_50;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined2 local_34;
  short local_32;
  longlong local_30;
  longlong local_28;
  
  local_70 = auStack_148;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  local_58 = 0;
  FUN_00414610(param_6);
  FUN_00414610(param_7);
  local_28 = param_1;
  if (*(longlong *)(param_1 + 0x510) == 0) {
    uVar4 = FUN_00c3d400(&LAB_00c3a6d0,1);
    *(undefined8 *)(local_28 + 0x510) = uVar4;
  }
  else {
    FUN_00c3f140(*(longlong *)(param_1 + 0x510));
  }
  if (param_6 == 0) {
    local_30 = FUN_00c3c560(&PTR_FUN_00c39d20,1);
    local_44 = 0x60;
    local_48 = FUN_00b905e0(0x10,0x20);
    if ((param_2 < 1) || (param_3 < 1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = 1;
    }
    local_48 = FUN_00b905e0(local_48,param_2 * 8 + param_3 * 0x10 + iVar2 * 8 + 8);
    local_34 = 0x30;
    local_32 = (short)(local_48 / 0x10) * 8;
    iVar2 = (int)local_32;
    uVar3 = FUN_00b92120(0x40,iVar2 + 0x10);
    *(undefined4 *)(local_30 + 0x24) = uVar3;
    uVar3 = FUN_00b92120(0,0);
    *(undefined4 *)(local_30 + 0x28) = uVar3;
    uVar4 = FUN_00b95b20(-(int)((longlong)local_44 / 2),-iVar2,(longlong)local_44 / 2 & 0xffffffff,
                         local_48 - iVar2);
    *(undefined8 *)(local_30 + 0x14) = uVar4;
    *(undefined8 *)(local_30 + 0xc) = *(undefined8 *)(local_30 + 0x14);
    *(short *)(local_30 + 0xc) = *(short *)(local_30 + 0xc) + -8;
    *(short *)(local_30 + 0x10) = *(short *)(local_30 + 0x10) + 8;
    uVar3 = FUN_00b92120(*(short *)(local_30 + 0xc) + 4,*(short *)(local_30 + 0xe) + -0xf);
    *(undefined4 *)(local_30 + 0x2c) = uVar3;
    local_50 = (undefined4 *)FUN_004095c0(0x1f);
    *local_50 = 0x66;
    local_50[1] = 0x105;
    local_50[2] = 0x13;
    local_60 = local_50 + 3;
    *(undefined1 *)local_60 = 0;
    *(undefined8 *)((longlong)local_50 + 0xd) = *(undefined8 *)(local_30 + 0x14);
    uVar3 = FUN_013feb30(auStack_148,L"COL_Object",0x800000);
    *(undefined4 *)((longlong)local_60 + 9) = uVar3;
    uVar3 = FUN_013feb30(auStack_148,L"COL_Fill",0xffff);
    *(undefined4 *)((longlong)local_60 + 0xd) = uVar3;
    *(undefined2 *)((longlong)local_60 + 0x11) = 2;
    FUN_004ae7e0(*(undefined8 *)(local_30 + 0x38),local_50);
    local_3c = *(short *)(local_30 + 0x14) + -8;
    local_40 = *(short *)(local_30 + 0x16) + 8;
    local_38 = 1;
    iVar2 = param_2;
    if (0 < param_2) {
      do {
        FUN_0043f750(&local_80,local_38);
        FUN_00416ba0(&local_78,&DAT_01400030,local_80);
        local_128 = (undefined *)CONCAT44(local_128._4_4_,local_40);
        local_120 = 0;
        local_118 = 1;
        local_110 = 0;
        local_108 = 0;
        FUN_013fed30(auStack_148,local_30,local_78,local_3c);
        local_40 = local_40 + 8;
        local_38 = local_38 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (0 < param_2) {
      local_40 = local_40 + 8;
    }
    local_38 = 1;
    iVar2 = param_3;
    if (0 < param_3) {
      do {
        FUN_013ff240(auStack_148,local_30,local_3c + 8,local_40);
        FUN_0043f750(&local_90,local_38);
        local_128 = &DAT_01400054;
        FUN_00416cd0(&local_88,3,&DAT_01400040,local_90);
        local_128._0_4_ = local_40 + -2;
        FUN_013fee50(auStack_148,local_30,local_88,local_3c + 0x12);
        FUN_0043f750(&local_a0,local_38);
        FUN_00416ba0(&local_98,&DAT_01400064,local_a0);
        local_128 = (undefined *)CONCAT44(local_128._4_4_,local_40);
        local_120 = 0;
        local_118 = 0;
        local_110 = 10;
        local_108 = 4;
        FUN_013fed30(auStack_148,local_30,local_98,local_3c);
        local_40 = local_40 + 8;
        FUN_0043f750(&local_b0,local_38);
        local_128 = &DAT_01400074;
        FUN_00416cd0(&local_a8,3,&DAT_01400064,local_b0);
        local_128 = (undefined *)CONCAT44(local_128._4_4_,local_40);
        local_120 = 0;
        local_118 = 0;
        local_110 = 0;
        local_108 = 0;
        FUN_013fed30(auStack_148,local_30,local_a8,local_3c);
        local_40 = local_40 + 8;
        local_38 = local_38 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    local_3c = *(short *)(local_30 + 0x18) + 8;
    if (param_4 == '\0') {
      FUN_00414b50(&local_58,&DAT_01400098);
    }
    else {
      FUN_00414b50(&local_58,&DAT_01400084);
    }
    if (param_5 == 0) {
      FUN_00416ba0(&local_b8,&DAT_014000ac,local_58);
      FUN_00416ba0(&local_c0,&DAT_014000ac,local_58);
      iVar2 = FUN_013ff060(auStack_148,local_c0);
      local_128._0_4_ = 0xfffffffa;
      FUN_013fee50(auStack_148,local_30,local_b8,(local_3c - iVar2) + -0x1c);
      FUN_00416ba0(&local_c8,&DAT_014000c0,local_58);
      local_128 = (undefined *)CONCAT44(local_128._4_4_,0xfffffff8);
      local_120 = 2;
      local_118 = 0;
      local_110 = 0x10;
      local_108 = 0xfffffff8;
      FUN_013fed30(auStack_148,local_30,local_c8,local_3c);
    }
    else {
      FUN_00416ba0(&local_d0,&DAT_014000ac,local_58);
      FUN_00416ba0(&local_d8,&DAT_014000ac,local_58);
      iVar2 = FUN_013ff060(auStack_148,local_d8);
      local_128._0_4_ = 0xfffffffa;
      FUN_013fee50(auStack_148,local_30,local_d0,(local_3c - iVar2) + -0x1c);
      FUN_00416ba0(&local_e0,&DAT_014000c0,local_58);
      local_128 = (undefined *)CONCAT44(local_128._4_4_,0xfffffff8);
      local_120 = 2;
      local_118 = 0;
      local_110 = 0x10;
      local_108 = 0xfffffff8;
      FUN_013fed30(auStack_148,local_30,local_e0,local_3c);
      local_128 = &DAT_01400074;
      FUN_00416cd0(&local_e8,3,&DAT_014000c0,local_58);
      local_128 = (undefined *)CONCAT44(local_128._4_4_,8);
      local_120 = 2;
      local_118 = 0;
      local_110 = 0;
      local_108 = 0;
      FUN_013fed30(auStack_148,local_30,local_e8,local_3c);
    }
    FUN_013ff310(auStack_148,local_30,local_3c + -8,0xfffffff8);
    *(undefined4 *)(local_30 + 8) = 0;
    FUN_00c3f030(*(undefined8 *)(local_28 + 0x510),local_30);
    FUN_0043f750(&local_f0,0xa1);
    FUN_00414ad0(*(longlong *)(local_28 + 0x510) + 0x10,local_f0);
    *(undefined1 *)(*(longlong *)(local_28 + 0x510) + 0xd) = 1;
    lVar5 = FUN_019a45d0();
    FUN_017bf150(local_28,*(undefined8 *)(lVar5 + 0x210),(longlong)*(short *)(local_30 + 0x2c),
                 (longlong)*(short *)(local_30 + 0x2e));
  }
  else {
    local_128 = (undefined *)param_6;
    FUN_00416cd0(&local_f8,3,param_7,&LAB_014000d0);
    sVar1 = FUN_00c40790(*(undefined8 *)PTR_DAT_02004440,local_f8);
    uVar4 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02004440,(longlong)sVar1);
    FUN_00c3f350(uVar4,*(undefined8 *)(local_28 + 0x510));
  }
  FUN_01d01990(local_28,param_2 + param_3 * 2 + (uint)param_5 + 1);
  FUN_00414560(&local_f8,0x11);
  FUN_00414480(&local_58);
  FUN_00414560(&param_6,2);
  return;
}

