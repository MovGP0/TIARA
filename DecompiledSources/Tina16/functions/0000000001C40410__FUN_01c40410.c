/* Ghidra address: 01c40410 */
/* Ghidra symbol: FUN_01c40410 */


longlong FUN_01c40410(longlong param_1,undefined8 *param_2,char param_3,undefined8 *param_4)

{
  longlong *plVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  int *local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 *local_130;
  undefined4 local_118;
  int local_114;
  int local_110;
  int local_10c;
  int local_108;
  undefined1 local_101;
  longlong *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  char local_bf;
  char local_bd;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  ulonglong uStack_a8;
  ulonglong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  longlong local_88;
  longlong local_30;
  
  local_130 = auStack_218;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a0 = 0;
  local_1a8 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_178 = 0;
  local_180 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_f8 = 0;
  local_30 = 0;
  *param_4 = 0;
  cVar2 = FUN_01c3c010(param_1);
  if (cVar2 == '\x01') {
    iVar4 = FUN_00416db0(*param_2,L"~BROW$E");
    if (iVar4 != 0) {
      local_90 = FUN_01c3d280(param_1);
      if (local_90 != 0) {
        uVar6 = FUN_0065b870(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
        local_88 = FUN_0198b200(0,&PTR_FUN_01984d18,0,uVar6);
        FUN_019a3a90(local_88,local_90);
        local_30 = local_88;
      }
    }
    goto LAB_01c4164b;
  }
  cVar2 = FUN_01c3c010(param_1);
  if (cVar2 == '\x02') {
    cVar2 = FUN_01c3c270(param_1);
    if (cVar2 == '\0') {
      FUN_00441920(&local_138,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
      FUN_00414ad0(param_2,local_138);
      uVar6 = FUN_019a45d0();
      local_30 = FUN_0198d3a0(uVar6,1,0);
      goto LAB_01c4164b;
    }
  }
  cVar2 = FUN_01c3c010(param_1);
  if (cVar2 == '\x02') {
    cVar2 = FUN_01c3c270(param_1);
    if (cVar2 != '\0') {
      iVar4 = FUN_00724300(*(undefined8 *)(param_1 + 0xbf0));
      if (iVar4 == *(int *)(param_1 + 0xbc0)) {
LAB_01c406fa:
        uVar3 = 1;
      }
      else {
        iVar4 = FUN_00724300(*(undefined8 *)(param_1 + 0xbf0));
        if (iVar4 == *(int *)(param_1 + 0xbc4)) goto LAB_01c406fa;
        uVar3 = 0;
      }
      *(undefined1 *)(param_1 + 0xbf8) = uVar3;
      iVar4 = FUN_00724300(*(undefined8 *)(param_1 + 0xbf0));
      *(bool *)(param_1 + 0xbf9) = iVar4 == *(int *)(param_1 + 0xbc4);
      FUN_00441920(&local_140,*(undefined8 *)(PTR_DAT_02004010 + 0xb1));
      FUN_00414ad0(param_2,local_140);
      uStack_98 = *(undefined8 *)(PTR_DAT_020034d0 + 0x18);
      local_b0 = (ulonglong)
                 CONCAT16(1,CONCAT15(1,CONCAT14(*(undefined1 *)(param_1 + 0xbfa),0x1010001)));
      uStack_a8 = *(ulonglong *)(PTR_DAT_020034d0 + 8) & 0xffffffff;
      local_a0._3_5_ = (undefined5)((ulonglong)*(undefined8 *)(PTR_DAT_020034d0 + 0x10) >> 0x18);
      local_a0 = CONCAT53(local_a0._3_5_,
                          CONCAT12(PTR_DAT_020030c0[2],
                                   (short)*(undefined8 *)(PTR_DAT_020034d0 + 0x10))) &
                 0xffffffffffffff00;
      uVar6 = FUN_019a45d0();
      cVar2 = FUN_019a02e0(uVar6);
      if (cVar2 == '\0') {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_148,0x51a);
        FUN_015fcf20(local_148,0,0,0);
      }
      uVar6 = FUN_019a45d0();
      local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
      local_1f0 = (undefined8 *)((ulonglong)local_1f0 & 0xffffffffffff0000);
      local_1e8 = &local_b8;
      local_bd = FUN_014b7d50(0xd,uVar6,0,0);
      if (local_bd == '\0') {
        uVar6 = FUN_00b89270();
        FUN_00b8e520(uVar6,&local_150,local_b8 + 0x86);
        FUN_015fcf20(local_150,0,0,0);
      }
      FUN_015fcb30(&local_158,PTR_DAT_02004770);
      FUN_00414ad0(param_1 + 0x9a0,local_158);
      uVar6 = FUN_00442620(param_1 + 0x9a8,*(undefined8 *)(param_1 + 0x9a0));
      uVar7 = FUN_019a45d0();
      FUN_015fcc20(uVar6,param_1 + 0x998,uVar7,0);
      uVar6 = FUN_0154bb80(&DAT_01546f18,1);
      *(undefined8 *)(param_1 + 0x990) = uVar6;
      uVar7 = FUN_019a45d0();
      FUN_01ca2f40(*(undefined8 *)PTR_DAT_02004e40,&local_160,uVar7);
      FUN_01569030(uVar6,local_160);
      local_1f0 = (undefined8 *)FUN_019a45d0();
      local_1f8 = (undefined8 *)0x0;
      local_1e8 = (int *)((ulonglong)local_1e8 & 0xffffffffffffff00);
      local_1e0 = 0;
      FUN_0155bbe0(*(undefined8 *)(param_1 + 0x990),*(undefined8 *)(param_1 + 0x9a0),
                   *(undefined8 *)(param_1 + 0x998),&local_b0);
      if (*(char *)(param_1 + 0xbfa) != '\0') {
        FUN_015eed30(*(undefined8 *)(param_1 + 0x990));
      }
      local_30 = FUN_015ec7f0(*(undefined8 *)(param_1 + 0x990),*(undefined8 *)(param_1 + 0x9a0),
                              *(undefined8 *)(param_1 + 0x998));
      goto LAB_01c4164b;
    }
  }
  FUN_00441920(&local_168,*(undefined8 *)(param_1 + 0xbd0));
  FUN_00414ad0(param_2,local_168);
  iVar4 = FUN_00724300(*(undefined8 *)(param_1 + 0xbf0));
  if (iVar4 == *(int *)(param_1 + 0xbc0)) {
LAB_01c40c1d:
    uVar3 = 1;
  }
  else {
    iVar4 = FUN_00724300(*(undefined8 *)(param_1 + 0xbf0));
    if (iVar4 == *(int *)(param_1 + 0xbc4)) goto LAB_01c40c1d;
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0xbf8) = uVar3;
  iVar4 = FUN_00724300(*(undefined8 *)(param_1 + 0xbf0));
  *(bool *)(param_1 + 0xbf9) = iVar4 == *(int *)(param_1 + 0xbc4);
  cVar2 = FUN_01d44920(*param_2);
  if (cVar2 != '\0') {
    cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0xbd0),1);
    if (cVar2 != '\0') {
      local_30 = FUN_014af1b0(*(undefined8 *)(param_1 + 0xbd0),0);
    }
    goto LAB_01c4164b;
  }
  cVar2 = FUN_01c3ff70(param_1,*param_2,&local_101,&local_bc);
  if (cVar2 == '\0') {
    cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0xbd0),1);
    if (cVar2 != '\0') {
      if (param_3 != '\0') {
        iVar4 = FUN_01c273c0(*(undefined8 *)(param_1 + 0x920));
        if (1 < iVar4) {
          local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          cVar2 = FUN_00ee5290(*(undefined8 *)(param_1 + 0xbd0),0,0,0);
          if (cVar2 == '\0') {
            local_100 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
            (**(code **)(*local_100 + 0x88))
                      (local_100,*(undefined8 *)(*(longlong *)(param_1 + 0x920) + 8));
            iVar4 = FUN_01c3cb30(param_1);
            if (0 < iVar4) {
              uVar5 = FUN_01c3cb30(param_1);
              local_10c = FUN_01c284f0(*(undefined8 *)(param_1 + 0x920),uVar5);
              uVar5 = FUN_01c3cb30(param_1);
              local_110 = FUN_01c28500(*(undefined8 *)(param_1 + 0x920),uVar5);
              local_114 = 0;
              local_108 = local_10c;
              if (local_10c <= local_110) {
                iVar4 = (local_110 - local_10c) + 1;
                do {
                  (**(code **)(*local_100 + 0x18))(local_100,&local_1b8,local_108);
                  (**(code **)(*local_100 + 200))(local_100,local_114,local_1b8);
                  (**(code **)(*local_100 + 0x98))(local_100,local_108 + 1);
                  local_114 = local_114 + 1;
                  local_108 = local_108 + 1;
                  iVar4 = iVar4 + -1;
                } while (iVar4 != 0);
              }
            }
            (**(code **)(*local_100 + 0x100))(local_100,*(undefined8 *)(param_1 + 0xbd0));
            FUN_00410f20(local_100);
          }
        }
      }
      FUN_00415dd0(&local_1c0,*(undefined8 *)(param_1 + 0xbd0),0);
      local_30 = FUN_00ee61d0(local_1c0,param_1 + 0xbe0,param_4);
      if (local_30 == 0) {
        FUN_00415dd0(&local_1c8,*(undefined8 *)(param_1 + 0xbd0),0);
        local_1f8 = (undefined8 *)0x0;
        local_1f0 = (undefined8 *)((ulonglong)local_1f0 & 0xffffffff00000000);
        local_30 = FUN_00ee5950(local_1c8,0,param_1 + 0xbe0,0);
        if (param_3 != '\0') {
          FUN_01c3c530(param_1,&local_1d0);
          local_1f8 = (undefined8 *)((ulonglong)local_1f8 & 0xffffffffffffff00);
          cVar2 = FUN_00ee5290(*(undefined8 *)(param_1 + 0xbd0),local_1d0,1,1);
          if (cVar2 == '\0') {
            local_30 = 0;
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xbe6) = 1;
      }
    }
    goto LAB_01c4164b;
  }
  *(bool *)(param_1 + 0xbfa) = (local_bc & 0x10) != 0;
  if (((local_bc & 0x10) == 0) && ((local_bc & 0x20) == 0)) {
    local_bf = '\0';
  }
  else {
    local_bf = '\x01';
  }
  if (local_bf == '\0') {
LAB_01c40d80:
    cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0xbd0),1);
    if (cVar2 == '\0') goto LAB_01c4164b;
  }
  else {
    cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0xbd0),1);
    if (cVar2 == '\0') goto LAB_01c40d80;
    FUN_004414c0(&local_170,*(undefined8 *)(param_1 + 0xbd0),L".VHD");
    cVar2 = FUN_00440a20(local_170,1);
    if (cVar2 == '\0') goto LAB_01c40d80;
  }
  FUN_00414ad0(param_1 + 0xc00,*(undefined8 *)(param_1 + 0xbd0));
  *(undefined8 *)(param_1 + 0x990) = 0;
  *(undefined8 *)(param_1 + 0x998) = 0;
  FUN_00441a10(&local_180,*(undefined8 *)(param_1 + 0xbd0));
  FUN_0043e130(&local_178,local_180);
  iVar4 = FUN_00416db0(local_178,&DAT_01c4177c);
  *(bool *)(param_1 + 0xbfb) = iVar4 == 0;
  if (local_bf != '\0') {
    FUN_004414c0(&local_188,*(undefined8 *)(param_1 + 0xbd0),L".VHD");
    FUN_00414ad0(param_1 + 0xbd0,local_188);
  }
  if (*(char *)(param_1 + 0xbfb) != '\0') {
    if (*PTR_DAT_02004648 == '\0') {
      FUN_015fcf20(L"TINA SystemVerilog extension not installed",0,0,0);
    }
    if (*PTR_DAT_020030d8 == '\0') {
      FUN_015fcf20(L"TINA SystemC extension not installed",0,0,0);
    }
    cVar2 = FUN_015ea390();
    if (cVar2 == '\0') {
      FUN_015fcf20(L"Microsoft Visual Studio not installed",0,0,0);
    }
    cVar2 = FUN_015ea4c0(&local_d8);
    if (cVar2 == '\0') {
      FUN_015fcf20(L"MSBuild not installed",0,0,0);
    }
    FUN_004414c0(&local_190,*(undefined8 *)(param_1 + 0xbd0),L".txt");
    FUN_00414ad0(param_1 + 0xbd0,local_190);
    cVar2 = FUN_00440a20(*(undefined8 *)(param_1 + 0xbd0),1);
    if (cVar2 == '\0') {
      FUN_00441920(&local_1a8,*(undefined8 *)(param_1 + 0xbd0));
      FUN_00416ba0(&local_1a0,L"Interface file not found: ",local_1a8);
      FUN_015fcf20(local_1a0,0,0,0);
    }
    else {
      local_1f8 = &local_f8;
      local_1f0 = *(undefined8 **)(param_1 + 3000);
      FUN_013a7dd0(&local_198,*(undefined8 *)(param_1 + 0xbd0),&local_e8,&local_f0);
      FUN_00414ad0(param_1 + 0xbd0,local_198);
    }
    if (*(char *)(param_1 + 0x952) == '\0') {
      local_1f8 = &local_e0;
      local_1f0 = &local_d0;
      local_1e8 = &local_118;
      cVar2 = FUN_013a85f0(*(undefined8 *)(param_1 + 0xc00),local_e8,local_f0,local_f8);
      if (cVar2 == '\0') {
        FUN_015fcfd0(local_e0,local_118,*(undefined8 *)(param_1 + 0xc00));
      }
      cVar2 = FUN_013a96f0(local_d0);
      if (cVar2 == '\0') {
        FUN_015fcf20(L"Failed to prepare the macro",0,0,0);
      }
      *(undefined1 *)(param_1 + 0x952) = 1;
    }
  }
  FUN_015fcb30(&local_1b0,PTR_DAT_02004770);
  FUN_00414ad0(param_1 + 0x9a0,local_1b0);
  uVar6 = FUN_00442620(param_1 + 0x9a8,*(undefined8 *)(param_1 + 0x9a0));
  uVar7 = FUN_019a45d0();
  FUN_015fcc20(uVar6,param_1 + 0x998,uVar7,0);
  lVar8 = FUN_0154bb80(&DAT_01546f18,1);
  *(longlong *)(param_1 + 0x990) = lVar8;
  (**(code **)(**(longlong **)(lVar8 + 0x8f8) + 0xd8))
            (*(longlong **)(lVar8 + 0x8f8),*(undefined8 *)(param_1 + 0xbd0));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x990) + 0x900);
  (**(code **)(*plVar1 + 0xd8))(plVar1,*(undefined8 *)(param_1 + 0xc00));
  FUN_01565240(*(undefined8 *)(param_1 + 0x990),*(undefined8 *)(param_1 + 0xc00));
  if (*(char *)(param_1 + 0xbfb) == '\0') {
    FUN_015651e0(*(undefined8 *)(param_1 + 0x990),*(undefined8 *)(param_1 + 0xbd0));
  }
  else {
    FUN_015651e0(*(undefined8 *)(param_1 + 0x990),0);
    FUN_01565310(*(undefined8 *)(param_1 + 0x990),3);
  }
  local_b4 = FUN_016024b0(*(undefined8 *)(param_1 + 0xc00),*(undefined1 *)(param_1 + 0xbf8));
  FUN_01566d10(*(undefined8 *)(param_1 + 0x990),local_b4);
  local_30 = FUN_015ec7f0(*(undefined8 *)(param_1 + 0x990),*(undefined8 *)(param_1 + 0x9a0),
                          *(undefined8 *)(param_1 + 0x998));
LAB_01c4164b:
  FUN_00414480(&local_1d0);
  FUN_00414590(&local_1c8,2);
  FUN_00414560(&local_1b8,0x11);
  FUN_00414560(&local_f8,7);
  return local_30;
}

