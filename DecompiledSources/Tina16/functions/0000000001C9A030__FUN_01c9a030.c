/* Ghidra address: 01c9a030 */
/* Ghidra symbol: FUN_01c9a030 */


undefined1 FUN_01c9a030(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_158 [32];
  ulonglong local_138;
  ulonglong local_130;
  int *local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong local_e8;
  char local_d9;
  undefined8 local_d8 [3];
  undefined4 local_ba;
  undefined1 local_b4;
  undefined4 local_b2;
  undefined1 local_ae;
  undefined4 local_ad;
  undefined1 local_a1;
  undefined1 local_90 [12];
  undefined4 local_84;
  int local_7c;
  ulonglong local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined1 auStack_67 [3];
  undefined1 local_64;
  undefined1 uStack_62;
  undefined3 uStack_63;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined1 local_50 [39];
  undefined1 local_29;
  
  local_100 = auStack_158;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_f0 = 0;
  local_29 = 1;
  local_138 = local_138 & 0xffffffffffffff00;
  local_130 = local_130 & 0xffffffffffff0000;
  local_128 = &local_7c;
  cVar1 = FUN_014b7d50(0xd,*(undefined8 *)(param_1 + 0x2788),1,0);
  if (cVar1 == '\0') {
    uVar3 = FUN_00b89270();
    FUN_00b8e520(uVar3,&local_108,local_7c + 0x86);
    FUN_016fd940(local_108);
    local_29 = 0;
    goto LAB_01c9a8c9;
  }
  puVar6 = (undefined8 *)PTR_DAT_02003ed8;
  puVar7 = local_d8;
  for (lVar5 = 7; lVar5 != 0; lVar5 = lVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  uStack_60 = *(undefined8 *)(PTR_DAT_020034d0 + 0x18);
  local_78 = *(ulonglong *)PTR_DAT_020034d0 & 0xffffffffffffff;
  uStack_70 = *(ulonglong *)(PTR_DAT_020034d0 + 8) & 0xffffffff;
  _local_68 = CONCAT71((int7)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 0x10) >> 8),1);
  uVar3 = _local_68;
  uStack_61 = (undefined1)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 0x10) >> 0x38);
  _local_68 = CONCAT16(*(undefined1 *)(param_1 + 0x2798),(int6)uVar3);
  uVar4 = _local_68;
  _local_68 = CONCAT12(PTR_DAT_020030c0[2],(short)uVar3);
  uVar3 = _local_68;
  uStack_63 = SUB83(uVar4,5);
  _local_68 = CONCAT14(PTR_DAT_020030c0[3],(int)uVar3);
  uVar2 = FUN_01ca40d0(param_1);
  uStack_70._0_3_ = CONCAT12(uVar2,(undefined2)uStack_70);
  local_ba = 0;
  local_b4 = 1;
  local_a1 = *PTR_DAT_020017c0;
  local_ae = *PTR_DAT_020030c0;
  FUN_015fcb30(&local_110,PTR_DAT_02004770);
  FUN_00414ad0(param_1 + 0x2740,local_110);
  uVar3 = FUN_00442620(param_1 + 0x2528,*(undefined8 *)(param_1 + 0x2740));
  uVar4 = FUN_019a4600();
  FUN_015fcc20(uVar3,param_1 + 0x2738,uVar4,0);
  uVar3 = FUN_0154bb80(&DAT_01546f18,1);
  *(undefined8 *)(param_1 + 0x2750) = uVar3;
  uVar4 = FUN_019a4600();
  FUN_01ca2f40(param_1,&local_118,uVar4);
  FUN_01569030(uVar3,local_118);
  local_130 = FUN_019a4600();
  local_138 = 0;
  local_128 = (int *)((ulonglong)local_128 & 0xffffffffffffff00);
  local_120 = 0;
  FUN_0155bbe0(*(undefined8 *)(param_1 + 0x2750),*(undefined8 *)(param_1 + 0x2740),
               *(undefined8 *)(param_1 + 0x2738),&local_78);
  uVar3 = FUN_019a4600();
  FUN_019af590(uVar3,*(undefined8 *)(param_1 + 0x2740));
  uVar3 = FUN_019a4600();
  uVar2 = FUN_019a04e0(uVar3,0xffff,local_50);
  *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5c) = uVar2;
  FUN_00f85560(*(undefined8 *)PTR_DAT_020019c8,*(undefined8 *)(param_1 + 0x2738));
  uVar3 = FUN_019a4600();
  FUN_01603020(uVar3,0,0,0);
  local_b2 = FUN_01566d30(*(undefined8 *)(param_1 + 0x2750),local_90);
  if (*(char *)(*(longlong *)(param_1 + 0x2750) + 0x7b8) != '\0') {
    local_ad = 2;
  }
  local_84 = local_b2;
  uVar3 = FUN_0065b870(DAT_035667b8);
  FUN_015fd070(*(undefined8 *)(param_1 + 0x2740),uVar3,*(undefined8 *)(param_1 + 0x2750),local_d8);
  lVar5 = FUN_019a4600();
  _Param_SetAnalysisParameters(*(undefined8 *)(param_1 + 0x2738),*(undefined8 *)(lVar5 + 0x60a));
  uVar3 = FUN_019a4600();
  local_138 = 0;
  local_130 = *(ulonglong *)(param_1 + 0x2740);
  cVar1 = FUN_015f47a0(*(undefined8 *)(param_1 + 0x2738),uVar3,0,&local_d9);
  if (cVar1 == '\0') {
    FUN_015fcf20(0,*(undefined8 *)(param_1 + 0x2738),1,0);
  }
  local_e8 = FUN_0160bca0(*(undefined8 *)(param_1 + 0x2738),*(longlong *)(param_1 + 0x2750),
                          *(char *)(*(longlong *)(param_1 + 0x2750) + 0x7b8) == '\0');
  FUN_0160f290(*(undefined8 *)(param_1 + 0x2738),*(undefined8 *)(param_1 + 0x2750));
  uVar3 = FUN_019a4600();
  FUN_0156c410(*(undefined8 *)(param_1 + 0x2750),uVar3,*(undefined8 *)(param_1 + 0x2738),1);
  if (local_d9 != '\0') {
    local_29 = 0;
    goto LAB_01c9a8c9;
  }
  if ((local_e8 != 0) && (*(char *)(*(longlong *)(param_1 + 0x2750) + 0x7b8) != '\0')) {
    FUN_01569d70(*(undefined8 *)(param_1 + 0x2750),&local_f0);
    if (*(longlong *)PTR_DAT_02004a90 == 0) {
      FUN_01ba3ce0(local_f0,*(undefined8 *)(param_1 + 0x2738),local_e8);
    }
    if (*(longlong *)PTR_DAT_02004a90 != 0) {
      FUN_01ba41f0(*(undefined8 *)PTR_DAT_02004a90,*(undefined8 *)(param_1 + 0x2738));
    }
  }
  FUN_00f85530(*(undefined8 *)PTR_DAT_020019c8,*(undefined8 *)(param_1 + 0x2750));
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x1550),1);
  local_b4 = 0;
  cVar1 = _initialize_digital_simulation(*(undefined8 *)(param_1 + 0x2738));
  if (cVar1 == '\0') {
    FUN_015fcf20(L"_initialize_digital_simulation failed",0,0,0);
  }
  uVar3 = FUN_019a4600();
  FUN_019af590(uVar3,*(undefined8 *)(param_1 + 0x2740));
  local_f8 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0x2750) + 0x938) == 0) {
LAB_01c9a6ed:
    if (*(longlong *)(*(longlong *)(param_1 + 0x2750) + 0x938) != 0) {
      cVar1 = FUN_01569ce0(*(longlong *)(param_1 + 0x2750));
      if ((cVar1 != '\0') && (PTR_DAT_020030c0[1] != '\0')) {
        cVar1 = _IsASMMode();
        if (cVar1 == '\0') {
          FUN_015fcf20(L"HDL debugger enabled only in ASM mode",0,0,0);
        }
        *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd40) = 0;
        *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) = 0;
        *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5e) = 1;
        local_138 = local_138 & 0xffffffffffffff00;
        FUN_01c99b80(param_1,*(undefined8 *)(param_1 + 0x2750),*(undefined8 *)(param_1 + 0x2740),
                     *(undefined8 *)(param_1 + 0x2738));
        goto LAB_01c9a7ea;
      }
    }
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd40) = 1;
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) = 1;
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5d) = 0;
  }
  else {
    cVar1 = FUN_015f63e0(local_84);
    if ((cVar1 == '\0') || (*PTR_DAT_020030c0 == '\0')) goto LAB_01c9a6ed;
    cVar1 = FUN_01569d50(*(undefined8 *)(param_1 + 0x2750));
    if (cVar1 == '\0') goto LAB_01c9a6ed;
    uVar3 = FUN_019a4600();
    cVar1 = FUN_019a1420(uVar3,&local_f8);
    if (cVar1 != '\0') {
      cVar1 = FUN_0160e910(*(longlong *)(param_1 + 0x2750) + 0x848);
      if (cVar1 == '\0') {
        cVar1 = FUN_0160e940(*(longlong *)(param_1 + 0x2750) + 0x848);
        if (cVar1 == '\0') goto LAB_01c9a671;
      }
      goto LAB_01c9a6ed;
    }
LAB_01c9a671:
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd40) = 0;
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5a) = 0;
    *(undefined1 *)(*(longlong *)PTR_DAT_020019c8 + 0xd5d) = 1;
    local_138 = local_138 & 0xffffffffffffff00;
    local_130 = 0;
    FUN_01c99d60(param_1,*(undefined8 *)(param_1 + 0x2750),*(undefined8 *)(param_1 + 0x2740),
                 *(undefined8 *)(param_1 + 0x2738));
  }
LAB_01c9a7ea:
  cVar1 = FUN_01565440(*(undefined8 *)(param_1 + 0x2750));
  if (cVar1 != '\0') {
    FUN_00f84aa0(*(undefined8 *)PTR_DAT_020019c8);
  }
LAB_01c9a8c9:
  FUN_00414560(&local_118,3);
  FUN_00414480(&local_f0);
  return local_29;
}

