/* Ghidra address: 0067e1a0 */
/* Ghidra symbol: FUN_0067e1a0 */


void FUN_0067e1a0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_188 [32];
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_158;
  undefined4 local_150;
  longlong local_148;
  longlong local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  longlong local_f8;
  undefined1 *local_f0;
  undefined8 local_e0;
  undefined4 local_d4;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_bc;
  longlong local_b8;
  undefined8 local_b0;
  undefined4 local_a4;
  longlong local_a0;
  longlong *local_98;
  undefined1 local_90 [15];
  undefined1 local_81;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78 [4];
  int local_74;
  undefined4 local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  int local_44;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_f0 = auStack_188;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_30[0] = 0;
  local_38 = 0;
  local_40 = 0;
  local_98 = (longlong *)param_1[0x92];
  FUN_005ff880(local_98,param_1[0x17]);
  cVar1 = FUN_00777ce0(param_1);
  if (cVar1 == '\0') {
    local_44 = FUN_005fdfd0(local_98,&LAB_0067ea40);
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,*(undefined4 *)((longlong)param_1 + 0x9c));
    FUN_004238d0(&local_54,0,local_44 / 2 + -1,(int)param_1[0x13]);
    if ((char)param_1[0x72] == '\0') {
      FUN_005fdab0(local_98[0x10],0xff000006);
    }
    else {
      local_54 = CONCAT44(local_54._4_4_ + 1,(int)local_54 + 1);
      FUN_005fdab0(local_98[0x10],0xff000014);
      (**(code **)(*local_98 + 0xb8))(local_98,&local_54);
      FUN_00423b50(&local_54,0xffffffff,0xffffffff);
      FUN_005fdab0(local_98[0x10],0xff000010);
    }
    (**(code **)(*local_98 + 0xb8))(local_98,&local_54);
    FUN_0064dd90(param_1,&local_120);
    if (local_120 != 0) {
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar4)(param_1);
      if (cVar1 == '\0') {
        local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_44);
        FUN_004238d0(&local_54,8,0,0);
      }
      else {
        FUN_0064dd90(param_1,&local_138);
        iVar2 = FUN_005fdff0(param_1[0x92],local_138);
        local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_44);
        FUN_004238d0(&local_130,((int)local_4c - iVar2) + -8,0,0);
        local_54 = local_130;
        local_4c = uStack_128;
      }
      local_58 = FUN_006520b0(param_1,0x20);
      local_c8 = FUN_005ffa40(local_98);
      local_38 = 0;
      FUN_0064dd90(param_1,&local_38);
      FUN_0064dd90(param_1,&local_140);
      local_b8 = local_140;
      local_bc = 0;
      if (local_140 != 0) {
        local_bc = *(undefined4 *)(local_140 + -4);
      }
      uVar3 = FUN_00416740(local_38);
      local_168 = (undefined4 *)(CONCAT44(local_168._4_4_,local_58) | 0x400);
      thunk_FUN_041a24be(local_c8,uVar3,local_bc,&local_54);
      FUN_00414480(&local_38);
      FUN_005fdab0(local_98[0x10],(int)param_1[0x19]);
      local_e0 = FUN_005ffa40(local_98);
      local_40 = 0;
      FUN_0064dd90(param_1,&local_40);
      FUN_0064dd90(param_1,&local_148);
      local_d0 = local_148;
      local_d4 = 0;
      if (local_148 != 0) {
        local_d4 = *(undefined4 *)(local_148 + -4);
      }
      uVar3 = FUN_00416740(local_40);
      local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_58);
      thunk_FUN_041a24be(local_e0,uVar3,local_d4,&local_54);
      FUN_00414480(&local_40);
    }
  }
  else {
    FUN_0064dd90(param_1,&local_f8);
    if (local_f8 == 0) {
      local_168 = (undefined4 *)((ulonglong)local_168 & 0xffffffff00000000);
      FUN_004238d0(&local_68,0,0,0);
    }
    else {
      local_b0 = FUN_005ffa40(local_98);
      local_30[0] = 0;
      FUN_0064dd90(param_1,local_30);
      FUN_0064dd90(param_1,&local_100);
      local_a0 = local_100;
      local_a4 = 0;
      if (local_100 != 0) {
        local_a4 = *(undefined4 *)(local_100 + -4);
      }
      uVar3 = FUN_00416740(local_30[0]);
      thunk_FUN_0418ae1a(local_b0,uVar3,local_a4,&local_80);
      FUN_00414480(local_30);
      local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_7c);
      FUN_004238d0(&local_68,0,0,local_80);
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar4)(param_1);
      if (cVar1 == '\0') {
        FUN_00423b50(&local_68,8,0);
      }
      else {
        FUN_00423b50(&local_68,((int)param_1[0x13] - local_60) + -8,0);
      }
    }
    (**(code **)(*param_1 + 0xe0))(param_1,local_78);
    local_74 = (local_5c - local_64) / 2;
    uVar3 = FUN_005ffa40(local_98,(longlong)(local_5c - local_64) % 2 & 0xffffffff);
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_5c);
    thunk_FUN_041a27b3(uVar3,local_68,local_64,local_60);
    cVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
    if (cVar1 == '\0') {
      local_81 = 0x25;
    }
    else {
      local_81 = 0x24;
    }
    plVar5 = (longlong *)FUN_00777cd0();
    (**(code **)(*plVar5 + 200))(plVar5,local_90,local_81);
    uVar3 = FUN_00777cd0();
    uVar6 = FUN_005ffa40(local_98);
    local_168 = (undefined4 *)0x0;
    local_160 = 0;
    FUN_00778dc0(uVar3,uVar6,local_90,local_78);
    uVar3 = FUN_005ffa40(local_98);
    thunk_FUN_039bba01(uVar3,0);
    FUN_005fdcb0(local_98[0x10],1);
    FUN_0064dd90(param_1,&local_108);
    if (local_108 != 0) {
      cVar1 = FUN_0064e910(param_1);
      if (cVar1 == '\0') {
        uVar3 = FUN_00777cd0();
        uVar6 = FUN_005ffa40(local_98);
        FUN_0064dd90(param_1,&local_118);
        local_168 = &local_68;
        local_160 = 0x100;
        local_158 = 0x1fffffff;
        local_150 = 0;
        FUN_00778f70(uVar3,uVar6,local_90,local_118);
      }
      else {
        local_58 = FUN_006520b0(param_1,0x20);
        uVar3 = FUN_00777cd0();
        uVar6 = FUN_005ffa40(local_98);
        FUN_0064dd90(param_1,&local_110);
        local_168 = &local_68;
        local_160 = local_58;
        local_158 = 0;
        local_150 = 0;
        FUN_00778ef0(uVar3,uVar6,local_90,local_110);
      }
    }
  }
  FUN_00414560(&local_148,3);
  FUN_00414560(&local_120,6);
  return;
}

