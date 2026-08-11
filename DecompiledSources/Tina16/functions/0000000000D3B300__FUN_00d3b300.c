/* Ghidra address: 00d3b300 */
/* Ghidra symbol: FUN_00d3b300 */


void FUN_00d3b300(longlong *param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int extraout_var;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong local_res10;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f0;
  undefined4 local_e8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_99;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined8 local_88;
  undefined8 local_7c;
  undefined8 local_74;
  undefined1 local_6c [12];
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_c0 = auStack_128;
  if (*(char *)((longlong)param_1 + 0x7d) == '\0') {
    return;
  }
  local_60 = param_2;
  FUN_00d3c580(param_1,&local_7c);
  local_8c = FUN_00d3c3b0(param_1);
  FUN_00d3c3b0(param_1);
  local_90 = extraout_var;
  iVar2 = FUN_004230a0(&local_7c);
  if (0 < iVar2) {
    local_58 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_res10 = param_2;
    if (param_2 == 0) {
      local_res10 = thunk_FUN_0411fe47(param_1[1]);
    }
    if (*(char *)((longlong)param_1 + 0x7c) != '\0') {
      cVar1 = FUN_00d3cfa0(param_1);
      if (cVar1 == '\0') {
        local_a0 = (int)local_74;
        local_a4 = local_7c._4_4_;
        local_ac = (int)local_74;
        uStack_a8 = local_7c._4_4_;
        local_30 = CONCAT44(local_7c._4_4_,(int)local_74);
        uVar6 = FUN_00d3ae30(param_1,&local_30);
        local_30._0_4_ = (int)uVar6;
        local_30._4_4_ = (int)(uVar6 >> 0x20);
        iVar2 = local_30._4_4_;
        iVar3 = (int)local_30 + local_8c;
        local_108 = CONCAT44(local_108._4_4_,local_30._4_4_ + local_90);
        local_30 = uVar6;
        FUN_004238d0(&local_d0,uVar6 & 0xffffffff,iVar2,iVar3);
        (**(code **)(*param_1 + 0xb0))(param_1,local_res10,&local_d0);
      }
      else {
        local_b0 = local_7c._4_4_;
        local_b8 = (int)local_7c;
        uStack_b4 = local_7c._4_4_;
        uVar6 = FUN_00d3ae30(param_1,&local_30);
        local_30._0_4_ = (int)uVar6;
        local_30._4_4_ = (int)(uVar6 >> 0x20);
        iVar2 = local_30._4_4_;
        iVar3 = (int)local_30 - local_8c;
        local_108 = CONCAT44(local_108._4_4_,local_30._4_4_ + local_90);
        local_30 = uVar6;
        FUN_004238d0(&local_d0,iVar3,iVar2,uVar6 & 0xffffffff);
        uVar4 = FUN_00788c10(param_1);
        FUN_00d36e50(local_res10,&local_d0,uVar4);
      }
    }
    uVar4 = FUN_004230a0(&local_7c);
    uVar5 = FUN_004230c0(&local_7c);
    (**(code **)(*local_58 + 0xe0))(local_58,uVar4,uVar5);
    uVar7 = FUN_00609e10(local_58);
    local_88 = FUN_005ffa40(uVar7);
    local_99 = 0x23;
    cVar1 = FUN_00787c60(param_1[3]);
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cf70(param_1), cVar1 != '\0')) {
      local_99 = 0x26;
    }
    uVar4 = (**(code **)(*local_58 + 0x60))(local_58);
    uVar5 = (**(code **)(*local_58 + 0x48))(local_58);
    local_108 = CONCAT44(local_108._4_4_,uVar5);
    FUN_004238d0(&local_7c,0,0,uVar4);
    plVar8 = (longlong *)FUN_00781840();
    (**(code **)(*plVar8 + 0x198))(plVar8,local_6c,local_99);
    uVar7 = FUN_00781840();
    local_108 = 0;
    local_100 = (ulonglong)local_100._4_4_ << 0x20;
    FUN_00778dc0(uVar7,local_88,local_6c,&local_7c);
    local_99 = *(undefined1 *)((longlong)param_1 + 0xb2);
    cVar1 = FUN_00787c60(param_1[3]);
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cf70(param_1), cVar1 != '\0')) {
      local_99 = 0xd;
    }
    local_108 = CONCAT44(local_108._4_4_,local_90);
    FUN_004238d0(&local_7c,0,0,local_8c);
    plVar8 = (longlong *)FUN_00781840();
    (**(code **)(*plVar8 + 0x198))(plVar8,local_6c,local_99);
    uVar7 = FUN_00781840();
    local_108 = 0;
    local_100 = local_100 & 0xffffffff00000000;
    FUN_00778dc0(uVar7,local_88,local_6c,&local_7c);
    local_99 = *(undefined1 *)((longlong)param_1 + 0xb4);
    cVar1 = FUN_00787c60(param_1[3]);
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cf70(param_1), cVar1 != '\0')) {
      local_99 = 0x19;
    }
    local_94 = FUN_00d3c670(param_1);
    local_98 = FUN_00d3c830(param_1);
    if (*(char *)((longlong)param_1 + 0xac) == '\0') {
      local_108 = CONCAT44(local_108._4_4_,local_90);
      FUN_004238d0(&local_7c,local_8c + local_94,0,local_90 + local_94 + local_98);
    }
    else {
      local_7c = *(undefined8 *)((longlong)param_1 + 0x9c);
      local_74 = *(undefined8 *)((longlong)param_1 + 0xa4);
    }
    if ((int)local_7c < local_8c) {
      local_108 = CONCAT44(local_108._4_4_,local_90);
      FUN_004238d0(&local_7c,local_8c,0,local_8c + local_98);
    }
    iVar2 = (**(code **)(*local_58 + 0x60))(local_58);
    if (iVar2 - local_8c < (int)local_74) {
      iVar2 = (**(code **)(*local_58 + 0x60))(local_58);
      iVar3 = (**(code **)(*local_58 + 0x60))(local_58);
      local_108 = CONCAT44(local_108._4_4_,local_90);
      FUN_004238d0(&local_7c,(iVar2 - local_8c) - local_98,0,iVar3 - local_8c);
    }
    plVar8 = (longlong *)FUN_00781840();
    (**(code **)(*plVar8 + 0x198))(plVar8,local_6c,local_99);
    cVar1 = FUN_00d3cf70(param_1);
    if (cVar1 == '\0') {
      uVar7 = FUN_00781840();
      local_108 = 0;
      local_100 = local_100 & 0xffffffff00000000;
      FUN_00778dc0(uVar7,local_88,local_6c,&local_7c);
    }
    local_99 = *(undefined1 *)((longlong)param_1 + 0xb3);
    cVar1 = FUN_00787c60(param_1[3]);
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cf70(param_1), cVar1 != '\0')) {
      local_99 = 0x11;
    }
    iVar2 = (**(code **)(*local_58 + 0x60))(local_58);
    uVar4 = (**(code **)(*local_58 + 0x60))(local_58);
    local_108 = CONCAT44(local_108._4_4_,local_90);
    FUN_004238d0(&local_7c,iVar2 - local_8c,0,uVar4);
    plVar8 = (longlong *)FUN_00781840();
    (**(code **)(*plVar8 + 0x198))(plVar8,local_6c,local_99);
    uVar7 = FUN_00781840();
    local_108 = 0;
    local_100 = local_100 & 0xffffffff00000000;
    FUN_00778dc0(uVar7,local_88,local_6c,&local_7c);
    FUN_00d3c580(param_1,&local_d0);
    local_30 = CONCAT44(local_30._4_4_,local_d0);
    FUN_00d3c580(param_1,&local_d0);
    local_30 = CONCAT44(local_cc,(int)local_30);
    local_30 = FUN_00d3ae30(param_1,&local_30);
    FUN_00d3c580(param_1,local_40);
    uVar4 = FUN_004230a0(local_40);
    FUN_00d3c580(param_1,local_50);
    uVar5 = FUN_004230c0(local_50);
    uVar7 = FUN_00609e10(local_58);
    local_100 = FUN_005ffa40(uVar7);
    local_108 = CONCAT44(local_108._4_4_,uVar5);
    local_f8 = 0;
    local_f0 = 0;
    local_e8 = 0xcc0020;
    thunk_FUN_0415fcd2(local_res10,local_30 & 0xffffffff,local_30._4_4_,uVar4);
    FUN_00410f20(local_58);
    if (local_60 == 0) {
      thunk_FUN_041a9b5c(param_1[1],local_res10);
    }
    return;
  }
  return;
}

