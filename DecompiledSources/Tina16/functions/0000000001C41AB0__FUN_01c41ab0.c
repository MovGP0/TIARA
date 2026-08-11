/* Ghidra address: 01c41ab0 */
/* Ghidra symbol: FUN_01c41ab0 */


undefined1 FUN_01c41ab0(longlong param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined1 uVar10;
  bool bVar11;
  undefined1 auStack_288 [32];
  undefined8 local_268;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
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
  undefined1 local_160 [48];
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
  longlong local_c0;
  undefined1 local_b4 [4];
  longlong *local_b0;
  undefined4 local_98;
  int local_94;
  longlong *local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  char local_6a;
  undefined1 local_69;
  longlong local_68;
  undefined8 *local_60;
  undefined8 *local_48;
  longlong *local_20;
  
  local_d0 = auStack_288;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_238 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_210 = 0;
  local_218 = 0;
  local_200 = 0;
  local_208 = 0;
  local_1f0 = 0;
  local_1f8 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_190 = 0;
  local_198 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_130 = 0;
  local_120 = 0;
  local_128 = 0;
  local_110 = 0;
  local_118 = 0;
  local_100 = 0;
  local_108 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_78 = 0;
  local_80 = 0;
  local_68 = 0;
  local_69 = 0;
  FUN_01c3c530(param_1,&local_d8);
  FUN_00414ad0(param_1 + 0xbd0,local_d8);
  iVar3 = FUN_01c3cb30(param_1);
  if (((-1 < iVar3) && (*(longlong *)(param_1 + 0x920) != 0)) &&
     (iVar3 = FUN_01c273c0(*(undefined8 *)(param_1 + 0x920)), 1 < iVar3)) {
    local_b0 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    uVar4 = FUN_01c3cb30(param_1);
    iVar3 = FUN_01c284f0(*(undefined8 *)(param_1 + 0x920),uVar4);
    uVar4 = FUN_01c3cb30(param_1);
    iVar5 = FUN_01c28500(*(undefined8 *)(param_1 + 0x920),uVar4);
    local_94 = iVar3;
    if (iVar3 <= iVar5) {
      iVar3 = (iVar5 - iVar3) + 1;
      do {
        plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x920) + 8);
        (**(code **)(*plVar8 + 0x18))(plVar8,&local_e0,local_94);
        (**(code **)(*local_b0 + 0x78))(local_b0,local_e0);
        local_94 = local_94 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    uVar4 = FUN_01c3cb30(param_1);
    FUN_01c273d0(*(undefined8 *)(param_1 + 0x920),&local_e8,uVar4);
    FUN_00414ad0(param_1 + 0xbd0,local_e8);
    local_94 = 1;
    while( true ) {
      local_c0 = *(longlong *)(param_1 + 0xbd0);
      local_c4 = 0;
      if (local_c0 != 0) {
        local_c4 = *(int *)(local_c0 + -4);
      }
      if (local_c4 < local_94) break;
      uVar2 = *(short *)(*(longlong *)(param_1 + 0xbd0) + -2 + (longlong)local_94 * 2) - 0x20;
      if (uVar2 < 0x60) {
        bVar11 = ((byte)(&DAT_01c43664)[(longlong)(int)(uVar2 & 0x7f) >> 3] >> (uVar2 & 7) & 1) != 0
        ;
      }
      else {
        bVar11 = false;
      }
      if (bVar11) {
        FUN_00416e20(param_1 + 0xbd0,local_94,1);
      }
      else {
        local_94 = local_94 + 1;
      }
    }
    local_268 = *(undefined8 *)(param_1 + 0xbd0);
    FUN_00416cd0(param_1 + 0xbd0,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01c4367c);
    (**(code **)(*local_b0 + 0x100))(local_b0,*(undefined8 *)(param_1 + 0xbd0));
  }
  FUN_0043e130(&local_f0,local_78);
  iVar3 = FUN_004170c0(L".TSC",local_f0,1);
  if (iVar3 < 1) {
    FUN_0043e130(&local_f8,local_78);
    iVar3 = FUN_004170c0(L".SCH",local_f8,1);
    if (0 < iVar3) goto LAB_01c41f98;
    *(undefined1 *)(param_1 + 0xbe6) = 2;
  }
  else {
LAB_01c41f98:
    *(undefined1 *)(param_1 + 0xbe6) = 1;
  }
  local_60 = (undefined8 *)FUN_01c40410(param_1,&local_78,1,&local_68);
  cVar1 = FUN_01c3c010(param_1);
  if ((((cVar1 == '\x01') || (cVar1 = FUN_01c3c010(param_1), cVar1 == '\x02')) ||
      (cVar1 = FUN_01d44920(local_78), cVar1 != '\0')) &&
     (cVar1 = FUN_01c3c270(param_1), cVar1 == '\0')) {
    local_6a = '\x01';
  }
  else {
    cVar1 = FUN_01c3c010(param_1);
    if ((((cVar1 == '\x01') || (cVar1 = FUN_01c3c010(param_1), cVar1 == '\x02')) ||
        (cVar1 = FUN_01d44920(local_78), cVar1 != '\0')) &&
       (cVar1 = FUN_01c3c270(param_1), cVar1 != '\0')) {
      local_6a = '\x03';
    }
    else {
      local_6a = *(char *)(param_1 + 0xbe6);
    }
  }
  FUN_01c3ff70(param_1,local_78,&local_6a,local_b4);
  if (((local_6a == '\x01') || (local_6a == '\x03')) || (local_6a == '\x04')) {
    if (local_60 == (undefined8 *)0x0) {
      uVar6 = FUN_00b89270();
      FUN_00b8e520(uVar6,&local_100,0x85b);
      uVar6 = FUN_00416740(local_100);
      uVar7 = FUN_00b89270();
      FUN_00b8e520(uVar7,&local_108,0x3e2);
      uVar7 = FUN_00416740(local_108);
      FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar6,uVar7,0x2000);
      goto LAB_01c431fe;
    }
  }
  else if ((local_60 == (undefined8 *)0x0) || (*(int *)(param_1 + 0xbe0) == 0)) {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_110,0x85c);
    uVar6 = FUN_00416740(local_110);
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_118,0x3e2);
    uVar7 = FUN_00416740(local_118);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar6,uVar7,0x2000);
    if (local_60 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*local_60)(local_60);
      FUN_00418590(uVar6,&DAT_01984da0);
    }
    goto LAB_01c431fe;
  }
  if (local_68 == 0) {
    cVar1 = FUN_01c3d390(param_1);
    if (cVar1 == '\0') {
      uVar6 = FUN_01c3d280(param_1);
      local_68 = FUN_00c3f320(uVar6);
    }
    else {
      uVar6 = FUN_01c3d280(param_1);
      local_68 = FUN_00c3f320(uVar6);
    }
  }
  else {
    local_68 = FUN_00c3f320(local_68);
  }
  if (local_68 == 0) {
    uVar6 = FUN_00b89270();
    FUN_00b8e520(uVar6,&local_120,0x85d);
    uVar6 = FUN_00416740(local_120);
    uVar7 = FUN_00b89270();
    FUN_00b8e520(uVar7,&local_128,0x3e2);
    uVar7 = FUN_00416740(local_128);
    FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar6,uVar7,0x2000);
    if (local_60 != (undefined8 *)0x0) {
      uVar6 = (**(code **)*local_60)(local_60);
      FUN_00418590(uVar6,&DAT_01984da0);
    }
    goto LAB_01c431fe;
  }
  local_90 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_88 = FUN_004aeac0(*(undefined8 *)(local_68 + 0x38),0);
  if (*(longlong *)(*(longlong *)(param_1 + 0x900) + 0x588) == 0) {
    cVar1 = FUN_01c3c010(param_1);
    if ((cVar1 == '\x01') ||
       ((cVar1 = FUN_01c3c010(param_1), cVar1 == '\x02' &&
        (cVar1 = FUN_01c3c270(param_1), cVar1 == '\0')))) {
LAB_01c4240c:
      iVar3 = *(int *)(*(longlong *)(local_88 + 0x30) + 0x10);
      local_94 = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_00c3d330(local_88,local_160,(undefined2)local_94);
          FUN_004169a0(&local_168,local_160);
          (**(code **)(*local_90 + 0x78))(local_90,local_168);
          local_94 = local_94 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      cVar1 = FUN_01c3c010(param_1);
      if ((cVar1 == '\x03') || (cVar1 = FUN_01c3c010(param_1), cVar1 == '\x04')) {
        FUN_01c3c530(param_1,&local_130);
        cVar1 = FUN_01d44920(local_130);
        if (cVar1 != '\0') goto LAB_01c4240c;
      }
      lVar9 = *(longlong *)(param_1 + 0x920);
      if (lVar9 != 0) {
        uVar4 = FUN_01c3cb30(param_1);
        cVar1 = FUN_01c28560(lVar9,uVar4);
        if (cVar1 != '\0') goto LAB_01c4240c;
      }
      cVar1 = FUN_01c3c270(param_1);
      if (cVar1 == '\0') {
        uVar4 = FUN_01c3cb30(param_1);
        iVar3 = FUN_01c28540(*(undefined8 *)(param_1 + 0x920),uVar4);
        local_94 = 0;
        if (-1 < iVar3 + -1) {
          do {
            uVar4 = FUN_01c3cb30(param_1);
            FUN_01c28600(*(undefined8 *)(param_1 + 0x920),&local_80,uVar4,local_94);
            plVar8 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x8e0),0);
            local_98 = (**(code **)(*plVar8 + 0xb0))(plVar8,local_80);
            FUN_0084e320(*(undefined8 *)(param_1 + 0x8e0),&local_170,1,local_98);
            (**(code **)(*local_90 + 0x78))(local_90,local_170);
            local_94 = local_94 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      else {
        iVar3 = *(int *)(*(longlong *)(local_88 + 0x30) + 0x10);
        local_94 = 0;
        if (-1 < iVar3 + -1) {
          do {
            FUN_00c3d330(local_88,local_160,(undefined2)local_94);
            FUN_004169a0(&local_80,local_160);
            plVar8 = (longlong *)FUN_0084e370(*(undefined8 *)(param_1 + 0x8e0),1);
            local_98 = (**(code **)(*plVar8 + 0xb0))(plVar8,local_80);
            FUN_0084e320(*(undefined8 *)(param_1 + 0x8e0),&local_178,0,local_98);
            (**(code **)(*local_90 + 0x78))(local_90,local_178);
            local_94 = local_94 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
    }
  }
  else {
    cVar1 = FUN_01c3c270(param_1);
    if (cVar1 == '\0') {
      iVar3 = FUN_01c232b0();
      local_94 = 0;
      if (-1 < iVar3 + -1) {
        do {
          lVar9 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_94);
          if (*(longlong *)(lVar9 + 8) == 0) {
            (**(code **)(*local_90 + 0x78))(local_90,0);
          }
          else {
            lVar9 = FUN_01c233d0(*(undefined8 *)(param_1 + 0x900),local_94);
            FUN_004169a0(&local_180,*(longlong *)(lVar9 + 8) + 8);
            (**(code **)(*local_90 + 0x78))(local_90,local_180);
          }
          local_94 = local_94 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else {
      iVar3 = *(int *)(*(longlong *)(local_88 + 0x30) + 0x10);
      local_94 = 0;
      if (-1 < iVar3 + -1) {
        do {
          FUN_00c3d330(local_88,local_160,(undefined2)local_94);
          FUN_004169a0(&local_80,local_160);
          FUN_01c41970(auStack_288,&local_188,local_80);
          (**(code **)(*local_90 + 0x78))(local_90,local_188);
          local_94 = local_94 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_004414c0(&local_198,local_78,L".TSM");
  local_268 = local_198;
  FUN_00416cd0(&local_190,3,*(undefined8 *)PTR_DAT_02005010,L"\\MacroLib\\");
  FUN_00724380(*(undefined8 *)(param_1 + 0xbe8),local_190);
  if (((local_6a == '\x01') || (local_6a == '\x02')) && (cVar1 = FUN_01b23030(), cVar1 == '\0')) {
    uVar10 = 1;
  }
  else {
    uVar10 = 0;
  }
  plVar8 = *(longlong **)(param_1 + 0xbe8);
  *(undefined1 *)((longlong)plVar8 + 0x411) = uVar10;
  cVar1 = (**(code **)(*plVar8 + 0xa8))(plVar8);
  if (cVar1 != '\0') {
    local_48 = (undefined8 *)FUN_01cf1750(0,&PTR_FUN_01cf10a8,0x39);
    *(char *)(local_48 + 0x34) = local_6a;
    FUN_00724270(*(undefined8 *)(param_1 + 0xbe8),&local_1a0);
    FUN_00414ad0(param_1 + 0xc08,local_1a0);
    if (local_6a == '\x01') {
      local_20 = (longlong *)FUN_0176a5d0(&PTR_FUN_017611c0,1,local_48);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_1a8);
      (**(code **)*local_20)(local_20,local_1a8);
      FUN_01768da0(local_20,local_68);
      plVar8 = local_20;
      FUN_0176a870(local_20,*(undefined8 *)(param_1 + 0xbd0),local_60,0);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_1b0);
      FUN_00414ad0(local_20 + 10,local_1b0);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_1b8);
      (**(code **)(*local_20 + 0x10))(local_20,local_1b8);
      *(undefined1 *)(plVar8 + 0x16) = *(undefined1 *)(*(longlong *)(param_1 + 0xbe8) + 0x413);
      FUN_00724270(*(undefined8 *)(param_1 + 0xbe8),&local_1c0);
      (**(code **)(*local_20 + 0x30))(local_20,local_1c0,0,*PTR_DAT_02002038);
      local_69 = 1;
      FUN_00410f20(local_20);
    }
    if (local_6a == '\x02') {
      local_20 = (longlong *)FUN_0176c970(&PTR_FUN_01761b48,1,local_48);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_1c8);
      (**(code **)*local_20)(local_20,local_1c8);
      FUN_01768da0(local_20,local_68);
      plVar8 = local_20;
      FUN_0176ece0(local_20,*(undefined8 *)(param_1 + 0xbd0),
                   *(int *)(*(longlong *)(param_1 + 0x8c0) + 0x4a8) == 1);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_1d0);
      FUN_00414ad0(local_20 + 10,local_1d0);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_1d8);
      (**(code **)(*local_20 + 0x10))(local_20,local_1d8);
      *(undefined1 *)(plVar8 + 0x22) = 1;
      (**(code **)(*(longlong *)plVar8[0x18] + 0x10))((longlong *)plVar8[0x18],local_90);
      *(undefined1 *)((longlong)plVar8 + 0x115) =
           *(undefined1 *)(*(longlong *)(param_1 + 0xbe8) + 0x413);
      FUN_00724270(*(undefined8 *)(param_1 + 0xbe8),&local_1e0);
      (**(code **)(*local_20 + 0x30))(local_20,local_1e0,0,*PTR_DAT_02002038);
      local_69 = 1;
      FUN_00410f20(local_20);
    }
    if (local_6a == '\x03') {
      local_20 = (longlong *)FUN_01771870(&PTR_FUN_01763148,1,local_48);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_1e8);
      (**(code **)*local_20)(local_20,local_1e8);
      FUN_01768da0(local_20,local_68);
      FUN_00441a10(&local_1f8,*(undefined8 *)(param_1 + 0xbd0));
      FUN_0043e130(&local_1f0,local_1f8);
      uVar6 = FUN_00416db0(local_1f0,&DAT_01c436f8);
      if ((int)uVar6 == 0) {
LAB_01c42d42:
        uVar4 = (undefined4)CONCAT71((int7)((ulonglong)uVar6 >> 8),1);
      }
      else {
        FUN_00441a10(&local_208,*(undefined8 *)(param_1 + 0xbd0));
        FUN_0043e130(&local_200,local_208);
        uVar6 = FUN_00416db0(local_200,L".VHD");
        if ((int)uVar6 == 0) goto LAB_01c42d42;
        FUN_00441a10(&local_218,*(undefined8 *)(param_1 + 0xbd0));
        FUN_0043e130(&local_210,local_218);
        uVar6 = FUN_00416db0(local_210,L".AMS");
        if ((int)uVar6 == 0) goto LAB_01c42d42;
        uVar4 = 0;
      }
      FUN_01772110(local_20,*(undefined8 *)(param_1 + 0xbd0),
                   CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x8c0) >> 8),
                            *(int *)(*(longlong *)(param_1 + 0x8c0) + 0x4a8) == 1),uVar4);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_220);
      FUN_00414ad0(local_20 + 10,local_220);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_228);
      (**(code **)(*local_20 + 0x10))(local_20,local_228);
      FUN_0156b140(*(undefined8 *)(param_1 + 0x990),*(undefined8 *)(param_1 + 3000));
      plVar8 = local_20;
      FUN_01774e00(local_20,*(undefined8 *)(param_1 + 0x990));
      (**(code **)(*(longlong *)plVar8[0x34] + 0x10))((longlong *)plVar8[0x34],local_90);
      FUN_00724270(*(undefined8 *)(param_1 + 0xbe8),&local_230);
      (**(code **)(*local_20 + 0x30))(local_20,local_230,0,*PTR_DAT_02002038);
      local_69 = 1;
      if (*(longlong *)(param_1 + 0x990) != 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x990));
      }
      *(undefined8 *)(param_1 + 0x990) = 0;
      lVar9 = *(longlong *)(param_1 + 0x998);
      if (lVar9 != 0) {
        uVar6 = FUN_00442620(param_1 + 0x9a8,*(undefined8 *)(param_1 + 0x9a0));
        FUN_015fcd60(lVar9,uVar6,0);
        *(undefined8 *)(param_1 + 0x998) = 0;
      }
      FUN_015fcbd0(PTR_DAT_02004770,0);
      FUN_00410f20(local_20);
    }
    if (local_6a == '\x04') {
      local_20 = (longlong *)FUN_01776df0(&PTR_FUN_017649b8,1,local_48);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x788),&local_238);
      (**(code **)*local_20)(local_20,local_238);
      FUN_01768da0(local_20,local_68);
      plVar8 = local_20;
      FUN_017771b0(local_20,*(undefined8 *)(param_1 + 0xbd0),
                   *(int *)(*(longlong *)(param_1 + 0x8c0) + 0x4a8) == 1);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_240);
      FUN_00414ad0(local_20 + 10,local_240);
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x760),&local_248);
      (**(code **)(*local_20 + 0x10))(local_20,local_248);
      FUN_01777c80(plVar8,*(undefined8 *)(param_1 + 0x990));
      plVar8 = (longlong *)plVar8[0x20];
      (**(code **)(*plVar8 + 0x10))(plVar8,local_90);
      FUN_00724270(*(undefined8 *)(param_1 + 0xbe8),&local_250);
      (**(code **)(*local_20 + 0x30))(local_20,local_250,0,*PTR_DAT_02002038);
      local_69 = 1;
      if (*(longlong *)(param_1 + 0x990) != 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x990));
      }
      *(undefined8 *)(param_1 + 0x990) = 0;
      lVar9 = *(longlong *)(param_1 + 0x998);
      if (lVar9 != 0) {
        uVar6 = FUN_00442620(param_1 + 0x9a8,*(undefined8 *)(param_1 + 0x9a0));
        FUN_015fcd60(lVar9,uVar6,0);
        *(undefined8 *)(param_1 + 0x998) = 0;
      }
      FUN_015fcbd0(PTR_DAT_02004770,0);
      FUN_00410f20(local_20);
    }
    uVar6 = (**(code **)*local_48)(local_48);
    FUN_00418590(uVar6,&DAT_01cf1390);
  }
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x990));
    *(undefined8 *)(param_1 + 0x990) = 0;
    lVar9 = *(longlong *)(param_1 + 0x998);
    if (lVar9 != 0) {
      uVar6 = FUN_00442620(param_1 + 0x9a8,*(undefined8 *)(param_1 + 0x9a0));
      FUN_015fcd60(lVar9,uVar6,0);
      *(undefined8 *)(param_1 + 0x998) = 0;
    }
    FUN_015fcbd0(PTR_DAT_02004770,0);
  }
  if (local_60 != (undefined8 *)0x0) {
    uVar6 = (**(code **)*local_60)(local_60);
    FUN_00418590(uVar6,&DAT_01984da0);
  }
  FUN_00410f20(local_68);
LAB_01c431fe:
  FUN_00414480(&local_250);
  FUN_00414560(&local_248,3);
  FUN_00414480(&local_230);
  FUN_00414560(&local_228,2);
  FUN_00414560(&local_218,6);
  FUN_00414480(&local_1e8);
  FUN_00414480(&local_1e0);
  FUN_00414560(&local_1d8,3);
  FUN_00414480(&local_1c0);
  FUN_00414560(&local_1b8,3);
  FUN_00414480(&local_1a0);
  FUN_00414560(&local_198,7);
  FUN_00414560(&local_130,0xc);
  FUN_00414560(&local_80,2);
  return local_69;
}

