/* Ghidra address: 0065d730 */
/* Ghidra symbol: FUN_0065d730 */


void FUN_0065d730(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  undefined1 auStack_b8 [32];
  int local_98;
  undefined1 *local_80;
  undefined8 local_70;
  uint local_68;
  int local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined8 local_30;
  
  local_80 = auStack_b8;
  if ((*(char *)((longlong)param_1 + 0x31d) != '\0') ||
     (puVar1 = auStack_b8, *(int *)((longlong)param_1 + 0x324) != 0)) {
    uVar6 = FUN_0065b870(param_1);
    local_30 = thunk_FUN_0411fe47(uVar6);
    uVar6 = FUN_0065b870(param_1);
    thunk_FUN_03abe598(uVar6,&local_40);
    uVar6 = FUN_0065b870(param_1);
    thunk_FUN_03e49910(uVar6,&local_50);
    uVar6 = FUN_0065b870(param_1);
    thunk_FUN_0411b3be(0,uVar6,&local_50,2);
    FUN_00423b50(&local_40,-(int)local_50,-local_50._4_4_);
    local_98 = local_34;
    thunk_FUN_041a27b3(local_30,local_40,local_3c,local_38);
    local_60 = local_50;
    uStack_58 = local_48;
    FUN_00423b10(&local_40,*(undefined4 *)((longlong)param_1 + 0x324),
                 *(undefined4 *)((longlong)param_1 + 0x324));
    local_50._0_4_ = local_40;
    local_50._4_4_ = local_3c;
    local_48._0_4_ = local_38;
    local_48._4_4_ = local_34;
    local_70 = FUN_0065b870(param_1);
    local_68 = thunk_FUN_04118143(local_70,0xfffffff0);
    if ((local_68 & 0x200000) != 0) {
      cVar2 = FUN_0064e970(param_1);
      if (cVar2 == '\0') {
        iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0x14);
        local_48._0_4_ = (int)local_48 + iVar3;
      }
      else {
        iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0x14);
        local_50._0_4_ = (int)local_50 - iVar3;
      }
    }
    if ((local_68 & 0x100000) != 0) {
      iVar3 = (**(code **)(*param_1 + 0x1a0))(param_1,0x15);
      local_48._4_4_ = local_48._4_4_ + iVar3;
    }
    if (*(char *)((longlong)param_1 + 0x31d) != '\0') {
      local_64 = 0;
      if (*(char *)((longlong)param_1 + 0x31b) != '\0') {
        local_64 = (int)param_1[100];
      }
      if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
        local_64 = local_64 + (int)param_1[100];
      }
      if ((*(byte *)((longlong)param_1 + 0x31a) & 1) != 0) {
        local_50._0_4_ = (int)local_50 - local_64;
      }
      if ((*(byte *)((longlong)param_1 + 0x31a) & 2) != 0) {
        local_50._4_4_ = local_50._4_4_ - local_64;
      }
      if ((*(byte *)((longlong)param_1 + 0x31a) & 4) != 0) {
        local_48._0_4_ = (int)local_48 + local_64;
      }
      if ((*(byte *)((longlong)param_1 + 0x31a) & 8) != 0) {
        local_48._4_4_ = local_48._4_4_ + local_64;
      }
      cVar2 = FUN_00781870();
      if (cVar2 == '\0') {
        thunk_FUN_03998bad(local_30,&local_50,
                           *(uint *)(&DAT_01df73bc +
                                    (ulonglong)*(byte *)((longlong)param_1 + 0x31b) * 4) |
                           *(uint *)(&DAT_01df73cc +
                                    (ulonglong)*(byte *)((longlong)param_1 + 0x31c) * 4),
                           (uint)*(byte *)((longlong)param_1 + 0x31a) |
                           *(uint *)(&DAT_01df73dc +
                                    (ulonglong)*(byte *)((longlong)param_1 + 0x31d) * 4) |
                           *(uint *)(&DAT_01df73ec + (ulonglong)*(byte *)(param_1 + 0x72) * 4) |
                           0x2000);
      }
      else {
        uVar4 = FUN_00785560(*(uint *)(&DAT_01df73bc +
                                      (ulonglong)*(byte *)((longlong)param_1 + 0x31b) * 4) |
                             *(uint *)(&DAT_01df73cc +
                                      (ulonglong)*(byte *)((longlong)param_1 + 0x31c) * 4));
        uVar4 = FUN_007854e0(uVar4);
        uVar5 = FUN_00785670((uint)*(byte *)((longlong)param_1 + 0x31a) |
                             *(uint *)(&DAT_01df73dc +
                                      (ulonglong)*(byte *)((longlong)param_1 + 0x31d) * 4) |
                             *(uint *)(&DAT_01df73ec + (ulonglong)*(byte *)(param_1 + 0x72) * 4) |
                             0x2000);
        uVar5 = FUN_007855f0(uVar5);
        FUN_00777d60(local_30,&local_50,uVar4,uVar5);
      }
    }
    local_98 = local_48._4_4_;
    FUN_00428be0(local_30,(int)local_50,local_50._4_4_,(int)local_48);
    local_50 = local_60;
    uVar6 = local_50;
    local_48 = uStack_58;
    if (*(longlong *)(param_2 + 8) == 1) {
      local_50._0_4_ = (int)local_60;
      iVar3 = -(int)local_50;
      local_50._4_4_ = (int)((ulonglong)local_60 >> 0x20);
      iVar8 = -local_50._4_4_;
      local_50 = uVar6;
      FUN_00423b50(&local_50,iVar3,iVar8);
    }
    else {
      thunk_FUN_041bfab2(*(longlong *)(param_2 + 8),&local_40);
      uVar6 = FUN_0065b870(param_1);
      thunk_FUN_0411b3be(0,uVar6,&local_40,2);
      FUN_004239d0(&local_50,&local_50,&local_40);
      FUN_00423b50(&local_50,-(int)local_60,-local_60._4_4_);
    }
    cVar2 = FUN_00781870();
    if (cVar2 == '\0') {
      uVar6 = FUN_005fdb10(param_1[0x66]);
      thunk_FUN_03984819(local_30,&local_50,uVar6);
    }
    else {
      uVar6 = FUN_00781840();
      uVar4 = FUN_00779380(uVar6,0x1d);
      FUN_005fdab0(param_1[0x66],uVar4);
      uVar6 = FUN_005fdb10(param_1[0x66]);
      thunk_FUN_03984819(local_30,&local_50,uVar6);
      FUN_005fdab0(param_1[0x66],(int)param_1[0x19]);
    }
    uVar6 = FUN_0065b870(param_1);
    thunk_FUN_041a9b5c(uVar6,local_30);
    puVar1 = local_80;
  }
  local_80 = puVar1;
  (**(code **)(*param_1 + -0x38))(param_1,param_2);
  cVar2 = FUN_00777ce0(param_1);
  if ((cVar2 != '\0') && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)) {
    plVar7 = (longlong *)FUN_00781840();
    (**(code **)(*plVar7 + 0x238))(plVar7,param_1,0);
  }
  return;
}

