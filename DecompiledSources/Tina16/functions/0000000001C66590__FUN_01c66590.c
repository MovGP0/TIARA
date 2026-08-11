/* Ghidra address: 01c66590 */
/* Ghidra symbol: FUN_01c66590 */


void FUN_01c66590(void)

{
  bool bVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong *plVar17;
  int local_ad8;
  char local_ab6;
  char local_ab5;
  int local_ab4;
  int local_aa4;
  int local_a94;
  undefined8 local_a90;
  undefined8 local_a88;
  undefined8 local_a80;
  undefined8 local_a78;
  undefined8 local_a70;
  undefined8 local_a68;
  undefined8 local_a60;
  undefined8 local_a58;
  undefined8 local_a50;
  undefined8 local_a48;
  undefined8 local_a40;
  undefined8 local_a38;
  undefined8 local_a30;
  undefined8 local_a28;
  undefined8 local_a20;
  undefined8 local_a18;
  undefined8 local_a10;
  undefined8 local_a08;
  undefined8 local_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined8 local_9a0;
  undefined8 local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined1 *local_978;
  undefined8 local_970 [2];
  undefined8 local_960;
  int local_954;
  undefined1 local_950 [256];
  undefined1 local_850 [256];
  ushort local_750 [128];
  undefined1 local_650 [31];
  undefined1 local_631;
  undefined1 local_630 [756];
  undefined2 local_33c;
  undefined1 uStack_33a;
  undefined4 local_23c;
  undefined1 uStack_238;
  undefined1 local_13c [256];
  int local_3c;
  int local_38;
  int local_34;
  undefined1 local_30 [4];
  undefined1 local_2c [4];
  
  local_a80 = 0;
  local_a88 = 0;
  local_a90 = 0;
  local_a60 = 0;
  local_a68 = 0;
  local_a70 = 0;
  local_a78 = 0;
  local_a58 = 0;
  local_a38 = 0;
  local_a40 = 0;
  local_a48 = 0;
  local_a50 = 0;
  local_a28 = 0;
  local_a30 = 0;
  local_a18 = 0;
  local_a20 = 0;
  local_a08 = 0;
  local_a10 = 0;
  local_a00 = 0;
  local_9f0 = 0;
  local_9f8 = 0;
  local_9e8 = 0;
  local_9e0 = 0;
  local_9c8 = 0;
  local_9d0 = 0;
  local_9d8 = 0;
  local_9c0 = 0;
  local_9b8 = 0;
  local_9a8 = 0;
  local_9b0 = 0;
  local_998 = 0;
  local_9a0 = 0;
  local_988 = 0;
  local_990 = 0;
  local_978 = (undefined1 *)0x0;
  local_980 = 0;
  local_970[0] = 0;
  local_960 = 0;
  FUN_00416cd0(local_970,3,&DAT_01c675a4,DAT_035667d0,L".DSF");
  FUN_0040cf10(local_630,local_970[0],0);
  FUN_00409900();
  FUN_0040ca00(local_630);
  FUN_00409900();
  FUN_0040d150(local_630);
  FUN_00409900();
  lVar11 = FUN_004095c0(0x6400);
  uVar12 = FUN_004095c0(0x6400);
  uVar13 = FUN_004095c0(0x6400);
  cVar3 = FUN_01b9e360(*(undefined8 *)PTR_DAT_020040f0,DAT_035667d8,local_650);
  FUN_01b9e510(local_650);
  local_954 = 0;
  FUN_0040ca20(local_630);
  FUN_00409900();
  FUN_01d43440(&local_980,DAT_035667d8);
  FUN_00416cd0(&local_978,3,&DAT_01c675d0,local_980,L" CMOS NEWLIB");
  uVar14 = FUN_0040f200(local_630,local_978);
  FUN_0040f590(uVar14);
  FUN_00409900();
  FUN_0040d150(local_630);
  FUN_00409900();
  lVar2 = DAT_035667e0;
  local_ad8 = -1;
  bVar1 = false;
  do {
    local_ad8 = local_ad8 + 1;
    if (local_ad8 < *(int *)(lVar2 + 0x10)) {
      uVar14 = FUN_00b94e60(lVar2,local_ad8);
      cVar4 = FUN_0198a580(uVar14);
      if (cVar4 == '\x04') {
        uVar14 = FUN_00b94e60(lVar2,local_ad8);
        cVar4 = FUN_01c66290(uVar14);
        if (cVar4 == '\0') {
          uVar14 = FUN_00b94e60(lVar2,local_ad8);
          uVar15 = FUN_00b94e60(lVar2,local_ad8);
          cVar4 = FUN_0198a580(uVar15);
          if ((cVar4 != '\x04') || (sVar5 = FUN_01d03160(uVar14), sVar5 != 0x2901)) {
            uVar14 = FUN_00b94e60(lVar2,local_ad8);
            uVar15 = FUN_00b94e60(lVar2,local_ad8);
            cVar4 = FUN_0198a580(uVar15);
            if ((cVar4 != '\x04') || (sVar5 = FUN_01d03160(uVar14), sVar5 != 0x2902)) {
              uVar14 = FUN_00b94e60(lVar2,local_ad8);
              uVar15 = FUN_00b94e60(lVar2,local_ad8);
              cVar4 = FUN_0198a580(uVar15);
              if ((cVar4 == '\x04') && (sVar5 = FUN_01d03160(uVar14), sVar5 == 0x4b0)) {
                uVar14 = FUN_00b94e60(lVar2,local_ad8);
                lVar16 = FUN_01b4b530(DAT_03566808,uVar14);
                uVar8 = *(undefined4 *)(lVar16 + 0x18);
                FUN_01b4b340(lVar16,&local_960);
                cVar4 = FUN_00daf030(DAT_035667e8,uVar8,&local_34);
                if (cVar4 != '\0') {
                  FUN_00daf0b0(DAT_035667e8,local_13c,local_34);
                  if (cVar3 == '\0') {
                    iVar7 = local_34 + 1;
                  }
                  else {
                    iVar7 = FUN_01b9e3e0(local_650,local_13c,&local_631);
                    if (iVar7 < 1) {
                      FUN_004154b0(&local_988,local_13c,0);
                      FUN_004155b0(&local_988," not found in the label script file");
                      FUN_00416880(&local_990,local_988);
                      FUN_016fd940(local_990);
                    }
                  }
                  FUN_01d43440(&local_9a0,iVar7);
                  FUN_00416ba0(&local_998,&DAT_01c67638,local_9a0);
                  FUN_00416910(&local_23c,local_998,0xff);
                }
                if (((cVar4 == '\0') && (local_ab5 == '\0')) && (local_ab6 == '\0')) {
                  cVar4 = FUN_00dae960(DAT_035667f0,uVar8,&local_954);
                  if (cVar4 == '\0') {
                    FUN_00dae910(DAT_035667f0,uVar8);
                    local_954 = *(int *)(DAT_035667f0 + 0x10) + -1;
                  }
                  FUN_01d43440(&local_9b0,local_954 + 1);
                  FUN_00416ba0(&local_9a8,&DAT_01c67648,local_9b0);
                  FUN_00416910(&local_23c,local_9a8,0xff);
                }
                local_33c = 0x2002;
                uStack_33a = 0x20;
                FUN_004154b0(&local_9b8,&local_33c,0);
                FUN_004155b0(&local_9b8,"PSGVAL");
                FUN_00415560(&local_33c,local_9b8,0xff);
                FUN_004154b0(&local_9c0,&local_33c,0);
                FUN_004155b0(&local_9c0,&DAT_01c67670);
                FUN_00415560(&local_33c,local_9c0,0xff);
                FUN_004154b0(&local_9d0,&local_33c,0);
                FUN_004154b0(&local_9d8,&local_23c,0);
                FUN_00415980(&local_9c8,3,local_9d0,local_9d8,&DAT_01c67680);
                FUN_00415560(&local_33c,local_9c8,0xff);
                FUN_004169a0(&local_9e0,&local_33c);
                FUN_00416ad0(&local_9e0,local_960);
                FUN_00416910(&local_33c,local_9e0,0xff);
                FUN_004154b0(&local_9e8,&local_33c,0);
                FUN_004155b0(&local_9e8,&DAT_01c67690);
                FUN_00415560(&local_33c,local_9e8,0xff);
                FUN_00414ff0(local_950,&local_33c);
              }
              else {
                plVar17 = (longlong *)FUN_00b94e60(lVar2,local_ad8);
                uVar6 = FUN_01d03160();
                local_33c = 0x2002;
                uStack_33a = 0x20;
                FUN_004169a0(&local_9f0,&local_33c);
                FUN_01d3e7b0(&local_9f8,uVar6);
                FUN_00416ad0(&local_9f0,local_9f8);
                FUN_00416910(&local_33c,local_9f0,0xff);
                FUN_004154b0(&local_a00,&local_33c,0);
                FUN_004155b0(&local_a00,&DAT_01c67670);
                FUN_00415560(&local_33c,local_a00,0xff);
                local_ab4 = 0;
                local_a94 = 0;
                iVar7 = (**(code **)(*plVar17 + 0x1c8))();
                local_aa4 = 0;
                if (-1 < iVar7 + -1) {
                  do {
                    uVar8 = (**(code **)(*plVar17 + 0x210))(plVar17,local_aa4);
                    local_ab6 = FUN_00dae960(DAT_035667f8,uVar8,local_2c);
                    local_ab5 = FUN_00dae960(DAT_03566800,uVar8,local_30);
                    cVar4 = FUN_00daf030(DAT_035667e8,uVar8,&local_34);
                    uVar9 = (**(code **)(*plVar17 + 0x1c8))(plVar17);
                    FUN_01d3e8c0(uVar6,uVar9,local_aa4 + 1,&local_38,&local_3c);
                    if (local_ab6 != '\0') {
                      local_23c = 0x52455a04;
                      uStack_238 = 0x4f;
                    }
                    if (local_ab5 != '\0') {
                      local_23c = 0x454e4f03;
                    }
                    if (cVar4 != '\0') {
                      FUN_00daf0b0(DAT_035667e8,local_13c,local_34);
                      if (cVar3 == '\0') {
                        iVar10 = local_34 + 1;
                      }
                      else {
                        iVar10 = FUN_01b9e3e0(local_650,local_13c,&local_631);
                        if (iVar10 < 1) {
                          FUN_004154b0(&local_a08,local_13c,0);
                          FUN_004155b0(&local_a08," not found in the label script file");
                          FUN_00416880(&local_a10,local_a08);
                          FUN_016fd940(local_a10);
                        }
                      }
                      FUN_01d43440(&local_a20,iVar10);
                      FUN_00416ba0(&local_a18,&DAT_01c67638,local_a20);
                      FUN_00416910(&local_23c,local_a18,0xff);
                    }
                    if (((cVar4 == '\0') && (local_ab5 == '\0')) && (local_ab6 == '\0')) {
                      cVar4 = FUN_00dae960(DAT_035667f0,uVar8,&local_954);
                      if (cVar4 == '\0') {
                        FUN_00dae910(DAT_035667f0,uVar8);
                        local_954 = *(int *)(DAT_035667f0 + 0x10) + -1;
                      }
                      FUN_01d43440(&local_a30,local_954 + 1);
                      FUN_00416ba0(&local_a28,&DAT_01c67648,local_a30);
                      FUN_00416910(&local_23c,local_a28,0xff);
                    }
                    if (local_38 != -1) {
                      local_ab4 = local_ab4 + 1;
                      FUN_00414ff0(lVar11 + -0x100 + (longlong)local_38 * 0x100,&local_23c);
                    }
                    if (local_3c != -1) {
                      local_a94 = local_a94 + 1;
                      FUN_00414ff0(lVar11 + -0x100 + (longlong)local_3c * 0x100,&local_23c);
                    }
                    local_aa4 = local_aa4 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                FUN_00414ff0(local_950,&local_33c);
                local_750[0] = 0x2c01;
                iVar10 = 1;
                iVar7 = local_ab4;
                if (0 < local_ab4) {
                  do {
                    if (iVar10 == local_ab4) {
                      local_750[0] = local_750[0] & 0xff00;
                    }
                    else {
                      local_750[0] = 0x2c01;
                    }
                    FUN_004154b0(&local_a40,local_950,0);
                    FUN_004154b0(&local_a48,lVar11 + -0x100 + (longlong)iVar10 * 0x100,0);
                    FUN_004154b0(&local_a50,local_750,0);
                    FUN_00415980(&local_a38,3,local_a40,local_a48,local_a50);
                    FUN_00415560(local_950,local_a38);
                    iVar10 = iVar10 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                FUN_004154b0(&local_a58,local_950,0);
                FUN_004155b0(&local_a58,&DAT_01c67680);
                FUN_00415560(local_950,local_a58,0xff);
                iVar10 = 1;
                iVar7 = local_a94;
                if (0 < local_a94) {
                  do {
                    if (iVar10 == local_a94) {
                      local_750[0] = local_750[0] & 0xff00;
                    }
                    else {
                      local_750[0] = 0x2c01;
                    }
                    FUN_004154b0(&local_a68,local_950,0);
                    FUN_004154b0(&local_a70,lVar11 + -0x100 + (longlong)(local_ab4 + iVar10) * 0x100
                                 ,0);
                    FUN_004154b0(&local_a78,local_750,0);
                    FUN_00415980(&local_a60,3,local_a68,local_a70,local_a78);
                    FUN_00415560(local_950,local_a60);
                    iVar10 = iVar10 + 1;
                    iVar7 = iVar7 + -1;
                  } while (iVar7 != 0);
                }
                uVar14 = FUN_00b94e60(lVar2,local_ad8);
                FUN_01d3eaa0(uVar14,local_850,0xff);
                FUN_004154b0(&local_a88,local_950,0);
                FUN_004154b0(&local_a90,local_850,0);
                FUN_00415980(&local_a80,4,local_a88,&DAT_01c67680,local_a90,&DAT_01c67690);
                FUN_00415560(local_950,local_a80,0xff);
              }
              FUN_0040ca20(local_630);
              FUN_00409900();
              uVar14 = FUN_0040ef50(local_630,local_950);
              FUN_0040f590(uVar14);
              FUN_00409900();
              FUN_0040d150(local_630);
              FUN_00409900();
            }
          }
        }
      }
    }
    else {
      bVar1 = true;
    }
  } while (!bVar1);
  FUN_0040ca20(local_630);
  FUN_00409900();
  uVar14 = FUN_0040f3d0(local_630,0x25);
  FUN_0040f590(uVar14);
  FUN_00409900();
  FUN_0040d150(local_630);
  FUN_00409900();
  FUN_004095f0(lVar11);
  FUN_004095f0(uVar12);
  FUN_004095f0(uVar13);
  FUN_00414590(&local_a90,0xc);
  FUN_00414560(&local_a30,5);
  FUN_00414590(&local_a08,2);
  FUN_00414560(&local_9f8,2);
  FUN_004144d0(&local_9e8);
  FUN_00414480(&local_9e0);
  FUN_00414590(&local_9d8,5);
  FUN_00414560(&local_9b0,5);
  FUN_004144d0(&local_988);
  FUN_00414560(&local_980,3);
  FUN_00414480(&local_960);
  return;
}

