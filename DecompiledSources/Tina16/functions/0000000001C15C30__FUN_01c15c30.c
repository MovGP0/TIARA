/* Ghidra address: 01c15c30 */
/* Ghidra symbol: FUN_01c15c30 */


void FUN_01c15c30(longlong *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined1 auStack_138 [32];
  int *local_118;
  int local_110;
  longlong local_100;
  longlong lStack_f8;
  undefined1 local_f0 [16];
  undefined1 *local_e0;
  int local_d8;
  int local_d4;
  int local_d0;
  undefined1 local_c4 [12];
  int local_b8;
  int local_b4;
  int local_b0;
  int local_a4;
  int local_a0;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74 [2];
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_e0 = auStack_138;
  local_30 = thunk_FUN_04137b5f(0);
  local_d8 = (**(code **)(*param_1 + 0x288))(param_1);
  if (local_d8 == *(int *)(*(longlong *)PTR_DAT_02005950 + 0x98)) {
    local_40 = (longlong *)0x0;
  }
  else {
    local_40 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  }
  if (local_40 == (longlong *)0x0) {
    uVar4 = FUN_005fc8c0(*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110));
    local_38 = thunk_FUN_041a19a1(local_30,uVar4);
  }
  else {
    (**(code **)(*local_40 + 0x10))(local_40,*(undefined8 *)(*(longlong *)PTR_DAT_02005950 + 0x110))
    ;
    uVar2 = thunk_FUN_03f3ed25(*(undefined4 *)(local_40[3] + 0x28),local_d8,
                               *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98));
    FUN_005fcc80(local_40,uVar2);
    uVar4 = FUN_005fc8c0(local_40);
    local_38 = thunk_FUN_041a19a1(local_30,uVar4);
  }
  FUN_01bea390(param_1);
  local_5c = 0;
  local_60 = 0;
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,(&DAT_01fe48b8)[uVar6 & 0xff]);
  local_118 = &local_6c;
  local_110 = local_d8;
  FUN_00779290(uVar4,local_30,local_f0,1);
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,(&DAT_01fe48b8)[uVar6 & 0xff]);
  local_118 = &local_94;
  local_110 = local_d8;
  FUN_00779130(uVar4,local_30,local_f0,1);
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,0x1b);
  local_118 = local_74;
  local_110 = 0;
  FUN_00779290(uVar4,local_30,local_f0,1);
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,0x1b);
  local_118 = &local_a4;
  local_110 = 0;
  FUN_00779130(uVar4,local_30,local_f0,0);
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,0x1c);
  local_118 = &local_b4;
  local_110 = local_d8;
  FUN_00779130(uVar4,local_30,local_f0,0);
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,(&DAT_01fe48ba)[uVar6 & 0xff]);
  local_118 = &local_84;
  local_110 = local_d8;
  FUN_00779290(uVar4,local_30,local_f0,1);
  uVar4 = FUN_00781840();
  plVar5 = (longlong *)FUN_00781840();
  uVar6 = (**(code **)(*param_1 + 0xf0))(param_1);
  (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,(&DAT_01fe48ba)[uVar6 & 0xff]);
  local_118 = &local_d4;
  local_110 = 0;
  FUN_00779130(uVar4,local_30,local_f0,1);
  uVar4 = (**(code **)(*param_1 + 0x210))(param_1);
  local_58._4_4_ = (int)((ulonglong)uVar4 >> 0x20);
  if (local_68 < local_58._4_4_) {
    local_68 = local_58._4_4_;
  }
  local_58._0_4_ = (int)uVar4;
  if (local_6c < (int)local_58) {
    local_6c = (int)local_58;
  }
  local_5c = local_5c + local_68 + local_8c + local_88;
  local_60 = local_60 + local_6c + local_94 + local_90;
  local_58 = uVar4;
  local_118._0_4_ = local_68 + local_88 * 2;
  FUN_004238d0(&local_100,0,0,local_6c + local_90 * 2);
  param_1[0x72] = local_100;
  param_1[0x73] = lStack_f8;
  local_60 = local_60 + local_a4;
  *(int *)(param_1 + 0x74) = local_60;
  *(int *)(param_1 + 0x75) = local_60 + local_74[0];
  local_60 = local_60 + local_74[0] + local_a0 + local_b4 + local_b0;
  local_64 = (local_60 - *(int *)((longlong)param_1 + 0x34c)) - local_b0;
  local_50 = *(undefined8 *)((longlong)param_1 + 0x34c);
  local_48 = *(undefined8 *)((longlong)param_1 + 0x354);
  FUN_00423b50(&local_50,local_64,0xffffffff);
  *(undefined8 *)((longlong)param_1 + 0x34c) = local_50;
  *(undefined8 *)((longlong)param_1 + 0x354) = local_48;
  local_60 = local_60 + local_84 + local_d4 + local_d0;
  uVar6 = (longlong)(*(int *)((longlong)param_1 + 0x9c) - local_80) / 2;
  local_118 = (int *)CONCAT44(local_118._4_4_,(int)uVar6 + local_80);
  FUN_004238d0(&local_100,-local_d0 - local_84,uVar6 & 0xffffffff,-local_d0);
  param_1[0x78] = local_100;
  param_1[0x79] = lStack_f8;
  if (param_1[100] == 0) {
    local_50 = *(undefined8 *)((longlong)param_1 + 0x374);
    local_48 = *(undefined8 *)((longlong)param_1 + 0x37c);
  }
  else {
    local_118 = (int *)((ulonglong)local_118 & 0xffffffff00000000);
    FUN_004238d0(&local_50,0,0,0);
    local_118 = (int *)CONCAT44(local_118._4_4_,0x500);
    FUN_01c167d0(param_1,local_30,*(undefined8 *)(param_1[100] + 0x98),&local_50);
  }
  local_64 = (((int)param_1[0x78] - (int)local_48) - local_b0) - local_d4;
  FUN_00423b50(&local_50,local_64,0);
  *(undefined8 *)((longlong)param_1 + 0x374) = local_50;
  *(undefined8 *)((longlong)param_1 + 0x37c) = local_48;
  local_60 = local_60 + local_b4 + local_b0;
  cVar1 = (**(code **)(*param_1 + 0x238))(param_1);
  if (cVar1 == '\0') {
    iVar3 = FUN_004230c0((longlong)param_1 + 0x34c);
    if (local_5c <= iVar3) {
      iVar3 = FUN_004230c0((longlong)param_1 + 0x34c);
      local_5c = iVar3 + local_8c + local_88;
    }
  }
  else {
    uVar4 = FUN_00781840();
    plVar5 = (longlong *)FUN_00781840();
    (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,0x20);
    local_118 = &local_7c;
    local_110 = 0;
    FUN_00779290(uVar4,local_30,local_f0,1);
    uVar4 = FUN_00781840();
    plVar5 = (longlong *)FUN_00781840();
    (**(code **)(*plVar5 + 0x158))(plVar5,local_f0,0x20);
    local_118 = (int *)local_c4;
    local_110 = 0;
    FUN_00779130(uVar4,local_30,local_f0,0);
    local_5c = local_78 + local_b8;
    local_60 = local_7c;
    *(int *)(param_1 + 0x7a) = local_78;
  }
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0;
  *(int *)((longlong)param_1 + 0x3ac) = local_5c;
  local_118 = (int *)CONCAT44(local_118._4_4_,local_5c);
  (**(code **)(*param_1 + 400))
            (param_1,(int)param_1[0x12],*(undefined4 *)((longlong)param_1 + 0x94),
             (((local_60 + *(int *)((longlong)param_1 + 0x354)) -
              *(int *)((longlong)param_1 + 0x34c)) + *(int *)((longlong)param_1 + 0x37c)) -
             *(int *)((longlong)param_1 + 0x374));
  thunk_FUN_041a19a1(local_30,local_38);
  thunk_FUN_041a2fd8(local_30);
  if (local_40 != (longlong *)0x0) {
    FUN_00410f20(local_40);
  }
  return;
}

