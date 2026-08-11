/* Ghidra address: 01abfbd0 */
/* Ghidra symbol: FUN_01abfbd0 */


void FUN_01abfbd0(longlong param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  double dVar7;
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
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined1 local_140 [16];
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
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
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
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_110 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  dVar7 = (double)FUN_0040c850(*(undefined8 *)(param_1 + 0x80));
  if (dVar7 < 1e-13) {
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if ((*(longlong *)PTR_DAT_02003f68 != 0) && (*(char *)(param_1 + 0x91) != '\0')) {
    if (*(char *)(param_1 + 0x90) == '\0') {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        uVar4 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
        cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01cba688);
        if (cVar2 != '\0') {
          FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe00),
                       *(undefined8 *)(param_1 + 0x70));
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf18) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf10) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xed0) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xed8) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf18) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf10) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xed0) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xed8) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_28,local_20);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,1);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf38) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf30) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xef0) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xef8) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf38) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf30) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xef0) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xef8) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_48,local_40);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,2);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf48) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf40) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf00) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf08) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf48) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf40) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf00) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf08) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_58,local_50);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,3);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf28) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf20) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xee0) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xee8) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf28) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xf20) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xee0) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xee8) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_38,local_30);
          uVar4 = FUN_01abdb20(lVar5);
          *(undefined8 *)PTR_DAT_02005620 = uVar4;
          uVar4 = FUN_01abda80(lVar5);
          *(undefined8 *)PTR_DAT_020041f8 = uVar4;
          uVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xe38) + 0x260))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xe38));
          lVar5 = FUN_01abdad0(lVar5);
          FUN_00c44cb0(uVar3,local_28,local_48,local_38,local_58,*(undefined8 *)(lVar5 + 0x20),
                       &local_68,&local_88,&local_78,&local_98);
          FUN_00b8fd60(&local_160,local_68,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf18),local_160);
          FUN_00b8fd60(&local_168,local_60,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf10),local_168);
          uVar4 = FUN_00c44590(&local_68);
          FUN_00b8fd60(&local_170,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xed0),local_170);
          dVar7 = (double)FUN_00c445d0(&local_68);
          FUN_00b8fd60(&local_178,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xed8),local_178);
          FUN_00b8fd60(&local_180,local_78,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf28),local_180);
          FUN_00b8fd60(&local_188,local_70,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf20),local_188);
          uVar4 = FUN_00c44590(&local_78);
          FUN_00b8fd60(&local_190,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xee0),local_190);
          dVar7 = (double)FUN_00c445d0(&local_78);
          FUN_00b8fd60(&local_198,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xee8),local_198);
          FUN_00b8fd60(&local_1a0,local_88,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf38),local_1a0);
          FUN_00b8fd60(&local_1a8,local_80,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf30),local_1a8);
          uVar4 = FUN_00c44590(&local_88);
          FUN_00b8fd60(&local_1b0,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xef0),local_1b0);
          dVar7 = (double)FUN_00c445d0(&local_88);
          FUN_00b8fd60(&local_1b8,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xef8),local_1b8);
          FUN_00b8fd60(&local_1c0,local_98,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf48),local_1c0);
          FUN_00b8fd60(&local_1c8,local_90,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf40),local_1c8);
          uVar4 = FUN_00c44590(&local_98);
          FUN_00b8fd60(&local_1d0,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf00),local_1d0);
          dVar7 = (double)FUN_00c445d0(&local_98);
          FUN_00b8fd60(&local_1d8,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xf08),local_1d8);
          goto code_r0x01ac1c6e;
        }
      }
      if (*(longlong *)(param_1 + 0x58) != 0) {
        uVar4 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
        cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01cb9c30);
        if (cVar2 != '\0') {
          FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd60),
                       *(undefined8 *)(param_1 + 0x70));
          iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0) + 0x4a8);
          if (iVar1 == 0) {
            FUN_00b8fd60(&local_1e0,*(undefined8 *)(param_1 + 0x78),*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd58),local_1e0);
            FUN_00b8fd60(&local_1e8,*(undefined8 *)(param_1 + 0x80),*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd48),local_1e8);
          }
          else if (iVar1 == 1) {
            FUN_00c44460(local_140,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
            uVar4 = FUN_00c44590(local_140);
            FUN_00b8fd60(&local_1f0,uVar4,*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd58),local_1f0);
            FUN_00c44460(local_140,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
            dVar7 = (double)FUN_00c445d0(local_140);
            FUN_00b8fd60(&local_1f8,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd48),local_1f8);
          }
          goto code_r0x01ac1c6e;
        }
      }
      uVar4 = FUN_01abfb00(param_1);
      FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc70),uVar4);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xc78) + 0x128))
                  (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xc78),1);
        FUN_00b8fd60(&local_200,*(undefined8 *)(param_1 + 0x80),*PTR_DAT_02005310,0,1);
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc78),local_200);
      }
      else {
        (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xc78) + 0x128))
                  (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xc78),0);
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_208,0x826);
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xc78),local_208);
      }
    }
    else {
      if (*(longlong *)(param_1 + 0x58) != 0) {
        uVar4 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
        cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01cba688);
        if (cVar2 != '\0') {
          FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xdc8),
                       *(undefined8 *)(param_1 + 0x70));
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,0);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe98) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe90) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe50) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe58) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe98) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe90) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe50) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe58) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_28,local_20);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,1);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xeb8) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xeb0) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe70) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe78) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xeb8) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xeb0) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe70) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe78) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_48,local_40);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,2);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xec8) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xec0) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe80) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe88) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xec8) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xec0) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe80) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe88) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_58,local_50);
          plVar6 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x58) + 0x78) + 0x80);
          lVar5 = (**(code **)(*plVar6 + 0x30))(plVar6,3);
          if (*(longlong *)(param_1 + 0x58) == lVar5) {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xea8) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xea0) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe60) + 0xb8),1);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe68) + 0xb8),1);
          }
          else {
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xea8) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xea0) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe60) + 0xb8),0);
            FUN_005fce70(*(undefined8 *)
                          (*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xe68) + 0xb8),0);
          }
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          uVar4 = FUN_01abdb20(lVar5);
          (**(code **)(*plVar6 + 0x10))(plVar6,uVar4,1);
          plVar6 = (longlong *)FUN_01abda80(lVar5);
          (**(code **)(*plVar6 + 0x90))(plVar6,*(undefined8 *)(param_1 + 0x70),local_38,local_30);
          uVar4 = FUN_01abdb20(lVar5);
          *(undefined8 *)PTR_DAT_02005620 = uVar4;
          uVar4 = FUN_01abda80(lVar5);
          *(undefined8 *)PTR_DAT_020041f8 = uVar4;
          uVar3 = (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xe38) + 0x260))
                            (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xe38));
          lVar5 = FUN_01abdad0(lVar5);
          FUN_00c44cb0(uVar3,local_28,local_48,local_38,local_58,*(undefined8 *)(lVar5 + 0x20),
                       &local_68,&local_88,&local_78,&local_98);
          FUN_00b8fd60(&local_a0,local_68,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe98),local_a0);
          FUN_00b8fd60(&local_a8,local_60,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe90),local_a8);
          uVar4 = FUN_00c44590(&local_68);
          FUN_00b8fd60(&local_b0,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe50),local_b0);
          dVar7 = (double)FUN_00c445d0(&local_68);
          FUN_00b8fd60(&local_b8,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe58),local_b8);
          FUN_00b8fd60(&local_c0,local_78,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea8),local_c0);
          FUN_00b8fd60(&local_c8,local_70,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xea0),local_c8);
          uVar4 = FUN_00c44590(&local_78);
          FUN_00b8fd60(&local_d0,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe60),local_d0);
          dVar7 = (double)FUN_00c445d0(&local_78);
          FUN_00b8fd60(&local_d8,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe68),local_d8);
          FUN_00b8fd60(&local_e0,local_88,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb8),local_e0);
          FUN_00b8fd60(&local_e8,local_80,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xeb0),local_e8);
          uVar4 = FUN_00c44590(&local_88);
          FUN_00b8fd60(&local_f0,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe70),local_f0);
          dVar7 = (double)FUN_00c445d0(&local_88);
          FUN_00b8fd60(&local_f8,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe78),local_f8);
          FUN_00b8fd60(&local_100,local_98,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec8),local_100);
          FUN_00b8fd60(&local_108,local_90,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xec0),local_108);
          uVar4 = FUN_00c44590(&local_98);
          FUN_00b8fd60(&local_110,uVar4,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe80),local_110);
          dVar7 = (double)FUN_00c445d0(&local_98);
          FUN_00b8fd60(&local_118,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
          FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xe88),local_118);
          goto code_r0x01ac1c6e;
        }
      }
      if (*(longlong *)(param_1 + 0x58) != 0) {
        uVar4 = FUN_01abda80(*(longlong *)(param_1 + 0x58));
        cVar2 = FUN_004113d0(uVar4,&PTR_FUN_01cb9c30);
        if (cVar2 != '\0') {
          FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd28),
                       *(undefined8 *)(param_1 + 0x70));
          iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02001e00 + 0xcf0) + 0x4a8);
          if (iVar1 == 0) {
            FUN_00b8fd60(&local_120,*(undefined8 *)(param_1 + 0x78),*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd20),local_120);
            FUN_00b8fd60(&local_128,*(undefined8 *)(param_1 + 0x80),*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd10),local_128);
          }
          else if (iVar1 == 1) {
            FUN_00c44460(local_140,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
            uVar4 = FUN_00c44590(local_140);
            FUN_00b8fd60(&local_130,uVar4,*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd20),local_130);
            FUN_00c44460(local_140,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
            dVar7 = (double)FUN_00c445d0(local_140);
            FUN_00b8fd60(&local_148,dVar7 * 57.29577951308232,*PTR_DAT_02005310,0,1);
            FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xd10),local_148);
          }
          goto code_r0x01ac1c6e;
        }
      }
      uVar4 = FUN_01abfb00(param_1);
      FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcd8),uVar4);
      if (*(longlong *)(param_1 + 0x50) == 0) {
        (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xcd0) + 0x128))
                  (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xcd0),1);
        FUN_00b8fd60(&local_150,*(undefined8 *)(param_1 + 0x80),*PTR_DAT_02005310,0,1);
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcd0),local_150);
      }
      else {
        (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xcd0) + 0x128))
                  (*(longlong **)(*(longlong *)PTR_DAT_02001e00 + 0xcd0),0);
        uVar4 = FUN_00b89270();
        FUN_00b8e520(uVar4,&local_158,0x826);
        FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xcd0),local_158);
      }
    }
  }
code_r0x01ac1c6e:
  FUN_00414560(&local_208,0x19);
  FUN_00414560(&local_130,0x13);
  return;
}

