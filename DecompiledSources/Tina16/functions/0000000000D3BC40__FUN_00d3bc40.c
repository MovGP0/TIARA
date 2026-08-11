/* Ghidra address: 00d3bc40 */
/* Ghidra symbol: FUN_00d3bc40 */


void FUN_00d3bc40(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int extraout_var;
  undefined8 uVar6;
  longlong *plVar7;
  longlong local_res10;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 *local_b0;
  undefined1 local_99;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined1 local_6c [12];
  longlong local_60;
  longlong *local_58;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  
  local_b0 = auStack_118;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    return;
  }
  local_60 = param_2;
  FUN_00d3ca40(param_1,&local_7c);
  local_8c = FUN_00d3c3b0(param_1);
  FUN_00d3c3b0(param_1);
  local_90 = extraout_var;
  iVar2 = FUN_004230a0(&local_7c);
  if (0 < iVar2) {
    local_58 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    local_res10 = param_2;
    if (param_2 == 0) {
      local_res10 = thunk_FUN_0411fe47(*(undefined8 *)(param_1 + 8));
    }
    uVar3 = FUN_004230a0(&local_7c);
    uVar4 = FUN_004230c0(&local_7c);
    (**(code **)(*local_58 + 0xe0))(local_58,uVar3,uVar4);
    uVar6 = FUN_00609e10(local_58);
    local_88 = FUN_005ffa40(uVar6);
    uVar3 = (**(code **)(*local_58 + 0x60))(local_58);
    uVar4 = (**(code **)(*local_58 + 0x48))(local_58);
    local_f8 = CONCAT44(local_f8._4_4_,uVar4);
    FUN_004238d0(&local_7c,0,0,uVar3);
    local_99 = 0x2d;
    cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cfd0(param_1), cVar1 != '\0')) {
      local_99 = 0x26;
    }
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x198))(plVar7,local_6c,local_99);
    uVar6 = FUN_00781840();
    local_f8 = 0;
    local_f0 = (ulonglong)local_f0._4_4_ << 0x20;
    FUN_00778dc0(uVar6,local_88,local_6c,&local_7c);
    local_f8 = CONCAT44(local_f8._4_4_,local_90);
    FUN_004238d0(&local_7c,0,0,local_8c);
    local_99 = *(undefined1 *)(param_1 + 0xaf);
    cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cfd0(param_1), cVar1 != '\0')) {
      local_99 = 5;
    }
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x198))(plVar7,local_6c,local_99);
    uVar6 = FUN_00781840();
    local_f8 = 0;
    local_f0 = local_f0 & 0xffffffff00000000;
    FUN_00778dc0(uVar6,local_88,local_6c,&local_7c);
    local_94 = FUN_00d3ccb0(param_1);
    local_98 = FUN_00d3ce70(param_1);
    if (*(char *)(param_1 + 0xac) == '\0') {
      local_f8 = CONCAT44(local_f8._4_4_,local_90 + local_94 + local_98);
      FUN_004238d0(&local_7c,0,local_90 + local_94,local_8c);
    }
    else {
      local_7c = *(undefined8 *)(param_1 + 0x9c);
      uStack_74 = *(undefined8 *)(param_1 + 0xa4);
    }
    if (local_7c._4_4_ < local_90) {
      local_f8 = CONCAT44(local_f8._4_4_,local_90 + local_98);
      FUN_004238d0(&local_7c,0,local_90,local_8c);
    }
    iVar2 = (**(code **)(*local_58 + 0x48))(local_58);
    if (iVar2 - local_90 < uStack_74._4_4_) {
      iVar2 = (**(code **)(*local_58 + 0x48))(local_58);
      iVar5 = (**(code **)(*local_58 + 0x48))(local_58);
      local_f8 = CONCAT44(local_f8._4_4_,iVar5 - local_90);
      FUN_004238d0(&local_7c,0,(iVar2 - local_90) - local_98,local_8c);
    }
    local_99 = *(undefined1 *)(param_1 + 0xb1);
    cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cfd0(param_1), cVar1 != '\0')) {
      local_99 = 0x1d;
    }
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x198))(plVar7,local_6c,local_99);
    cVar1 = FUN_00d3cfd0(param_1);
    if (cVar1 == '\0') {
      uVar6 = FUN_00781840();
      local_f8 = 0;
      local_f0 = local_f0 & 0xffffffff00000000;
      FUN_00778dc0(uVar6,local_88,local_6c,&local_7c);
    }
    iVar2 = (**(code **)(*local_58 + 0x48))(local_58);
    uVar3 = (**(code **)(*local_58 + 0x48))(local_58);
    local_f8 = CONCAT44(local_f8._4_4_,uVar3);
    FUN_004238d0(&local_7c,0,iVar2 - local_90,local_8c);
    local_99 = *(undefined1 *)(param_1 + 0xb0);
    cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
    if ((cVar1 == '\0') || (cVar1 = FUN_00d3cfd0(param_1), cVar1 != '\0')) {
      local_99 = 9;
    }
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x198))(plVar7,local_6c,local_99);
    uVar6 = FUN_00781840();
    local_f8 = 0;
    local_f0 = local_f0 & 0xffffffff00000000;
    FUN_00778dc0(uVar6,local_88,local_6c,&local_7c);
    FUN_00d3ca40(param_1,&local_c0);
    local_30 = CONCAT44(local_30._4_4_,local_c0);
    FUN_00d3ca40(param_1,&local_c0);
    local_30 = CONCAT44(local_bc,(undefined4)local_30);
    local_30 = FUN_00d3ae30(param_1,&local_30);
    FUN_00d3ca40(param_1,local_40);
    uVar3 = FUN_004230a0(local_40);
    FUN_00d3ca40(param_1,local_50);
    uVar4 = FUN_004230c0(local_50);
    uVar6 = FUN_00609e10(local_58);
    local_f0 = FUN_005ffa40(uVar6);
    local_f8 = CONCAT44(local_f8._4_4_,uVar4);
    local_e8 = 0;
    local_e0 = 0;
    local_d8 = 0xcc0020;
    thunk_FUN_0415fcd2(local_res10,local_30 & 0xffffffff,local_30._4_4_,uVar3);
    FUN_00410f20(local_58);
    if (local_60 == 0) {
      thunk_FUN_041a9b5c(*(undefined8 *)(param_1 + 8),local_res10);
    }
    return;
  }
  return;
}

