/* Ghidra address: 017ce930 */
/* Ghidra symbol: FUN_017ce930 */


void FUN_017ce930(longlong param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 double param_5,longlong param_6,longlong param_7)

{
  char cVar1;
  byte bVar2;
  longlong *plVar3;
  undefined4 uVar4;
  longlong lVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 auStack_138 [32];
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  char local_100;
  undefined8 local_f8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined1 *local_a0;
  undefined8 local_90;
  longlong *local_88;
  longlong local_78;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  undefined8 *local_68;
  longlong *local_60;
  undefined4 local_54;
  int local_50;
  char local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_a0 = auStack_138;
  local_d8 = 0;
  local_e0 = (undefined *)0x0;
  local_c8 = 0;
  local_d0 = (undefined *)0x0;
  local_c0 = 0;
  local_b0 = 0;
  local_b8 = (undefined *)0x0;
  local_a8 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  FUN_00414610(param_6);
  lVar5 = param_6;
  FUN_00414b50(&local_38,param_6);
  local_49 = '\0';
  local_78 = param_1 + 0x5d8;
  cVar1 = *(char *)(param_1 + 0x5db);
  if (cVar1 == '\x01') {
    uVar4 = FUN_0040c770(param_5);
    local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar4);
    local_110 = (undefined *)CONCAT71(local_110._1_7_,*(undefined1 *)(local_78 + 0x430));
    local_108 = (undefined *)((ulonglong)local_108 & 0xffffffffffffff00);
    uVar8 = FUN_017c58f0(*(undefined8 *)(local_78 + 0x418),*(undefined8 *)(local_78 + 0x420),
                         *(undefined8 *)(local_78 + 0x428),*(short *)(local_78 + 0x416) + -1);
    local_118 = (undefined *)CONCAT71(local_118._1_7_,1);
    FUN_00b8fd60(&local_a8,uVar8,*(undefined1 *)(param_1 + 0x12f1),0);
    lVar5 = local_a8;
    FUN_00416ba0(&local_38,local_a8,&DAT_017cf29c);
  }
  else if (cVar1 == '\x02') {
    iVar6 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x470) + 0x10);
    if (iVar6 < 2) {
      uVar4 = FUN_0040c770(param_5);
      local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar4);
      local_110 = (undefined *)CONCAT71(local_110._1_7_,*(undefined1 *)(local_78 + 0x54f));
      local_108 = (undefined *)((ulonglong)local_108 & 0xffffffffffffff00);
      uVar8 = FUN_017c58f0(*(undefined8 *)(local_78 + 0x53d),*(undefined8 *)(local_78 + 0x545),
                           *(undefined8 *)(local_78 + 0x550),*(short *)(local_78 + 0x54d) + -1);
      local_118 = (undefined *)CONCAT71(local_118._1_7_,1);
      FUN_00b8fd60(&local_b0,uVar8,*(undefined1 *)(param_1 + 0x12f1),0);
      FUN_004169a0(&local_b8,local_78 + 0x558);
      lVar5 = 0;
      local_118 = local_b8;
      local_110 = &DAT_017cf2c0;
      FUN_00416cd0(&local_38,4,local_b0,&DAT_017cf2b0);
    }
    else {
      local_50 = 0;
      if (-1 < iVar6 + -1) {
        do {
          local_88 = (longlong *)
                     FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x470),local_50);
          local_60 = local_88;
          if (*local_88 == 0) {
            FUN_004169a0(&local_c0,(longlong)local_88 + 0xc);
            plVar3 = *(longlong **)(*(longlong *)(param_1 + 0xa0) + 0x438);
            local_54 = (**(code **)(*plVar3 + 0xb8))(plVar3,local_c0);
            FUN_004b5390(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 0x438),&local_c8,local_54);
            FUN_004169a0(&local_d0,(longlong)local_88 + 0x22f);
            lVar5 = 0;
            local_118 = &DAT_017cf2b0;
            local_110 = local_d0;
            local_108 = &DAT_017cf2d0;
            FUN_00416cd0(&local_38,5,local_38,local_c8);
          }
          else {
            local_118 = &local_6a;
            local_110 = &local_6b;
            local_68 = (undefined8 *)
                       FUN_01cfde70(*local_88,(char)local_88[1],
                                    *(undefined1 *)((longlong)local_88 + 9),&local_69);
            local_118 = (undefined *)CONCAT71(local_118._1_7_,1);
            FUN_00b8fd60(&local_d8,*local_68,*(undefined1 *)(param_1 + 0x12f1),0);
            FUN_004169a0(&local_e0,(longlong)local_88 + 0x22f);
            lVar5 = 0;
            local_118 = &DAT_017cf2b0;
            local_110 = local_e0;
            local_108 = &DAT_017cf2d0;
            FUN_00416cd0(&local_38,5,local_38,local_d8);
          }
          local_50 = local_50 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  else if ((((byte)(cVar1 - 3U) < 2) && (param_5 == 0.0)) && (*(char *)(param_1 + 0xb74) != '\0')) {
    local_49 = '\x01';
  }
  bVar2 = *(byte *)(local_78 + 3);
  if (bVar2 < 8) {
    bVar7 = ((int)CONCAT71((int7)((ulonglong)lVar5 >> 8),1) << (bVar2 & 0x1f) & 6U) != 0;
  }
  else {
    bVar7 = false;
  }
  if ((bVar7) || (param_6 != 0)) {
    FUN_00414480(&local_20);
    local_118 = (undefined *)((ulonglong)local_118 & 0xffffffff00000000);
    local_110 = PTR_DAT_02004830;
    FUN_00448510(&local_20,param_5 + 1.0,0,0x12);
    FUN_00414b50(&local_40,local_20);
    FUN_00414480(&local_20);
    local_118 = &DAT_017cf2c0;
    FUN_00416cd0(&local_48,3,&DAT_017cf2b0,local_40);
  }
  else if (bVar2 < 8 && (1 << (bVar2 & 0x1f) & 0x18U) != 0) {
    if (local_49 == '\0') {
      if (*(char *)(local_78 + 0x59c) == '\0') {
        FUN_00414480(&local_30);
        local_118 = (undefined *)((ulonglong)local_118 & 0xffffffff00000000);
        local_110 = PTR_DAT_02004830;
        FUN_00448510(&local_30,param_5 + 1.0,0,0x12);
        FUN_00414b50(&local_40,local_30);
        FUN_00414480(&local_30);
      }
      else {
        FUN_00414480(&local_28);
        local_118 = (undefined *)((ulonglong)local_118 & 0xffffffff00000000);
        local_110 = PTR_DAT_02004830;
        FUN_00448510(&local_28,param_5,0,0x12);
        FUN_00414b50(&local_40,local_28);
        FUN_00414480(&local_28);
      }
      local_118 = &DAT_017cf2c0;
      FUN_00416cd0(&local_48,3,&DAT_017cf2b0,local_40);
    }
    else {
      FUN_00414480(&local_40);
      FUN_00414480(&local_48);
    }
  }
  else {
    FUN_00414480(&local_40);
    FUN_00414480(&local_48);
  }
  if (param_7 == 0) {
    param_7 = *(longlong *)(param_1 + 0xb0);
  }
  local_90 = *(undefined8 *)(param_7 + 8);
  local_118 = (undefined *)CONCAT71(local_118._1_7_,param_2);
  local_108 = (undefined *)local_38;
  local_100 = local_49;
  local_f8 = *(undefined8 *)(param_1 + 0x4f0);
  local_110._0_1_ = param_4;
  FUN_01cc2aa0(local_90,*(undefined4 *)(param_1 + 0x691),local_48,param_3);
  local_118 = (undefined *)local_38;
  local_110._0_1_ = local_49;
  FUN_017cd7f0(param_1,local_40,param_3,param_2);
  local_118 = (undefined *)local_38;
  local_110 = (undefined *)CONCAT71(local_110._1_7_,local_49);
  FUN_017ce180(param_1,local_40,param_3,param_2);
  FUN_00414560(&local_e0,8);
  FUN_00414560(&local_48,6);
  FUN_00414480(&param_6);
  return;
}

