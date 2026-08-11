/* Ghidra address: 01631c60 */
/* Ghidra symbol: FUN_01631c60 */


void FUN_01631c60(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  int local_9bc;
  char local_9b6;
  byte local_9b5;
  int local_9b4;
  undefined8 local_9a0;
  undefined8 *local_998;
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 ***local_978;
  undefined8 ***local_970;
  undefined8 local_968;
  undefined8 local_960;
  undefined8 local_958;
  undefined8 ***local_950;
  undefined8 local_948;
  undefined8 local_940;
  undefined8 ***local_938;
  undefined8 local_930;
  undefined8 *local_928;
  undefined8 *local_920;
  undefined8 local_918;
  undefined8 local_910;
  undefined8 local_908;
  undefined8 *local_900;
  undefined8 *local_8f8;
  undefined8 local_8f0;
  undefined8 *local_8e8;
  undefined8 *local_8e0;
  undefined8 local_8d8;
  undefined8 local_8d0;
  undefined8 *local_8c8;
  undefined8 local_8c0 [2];
  undefined8 local_8b0 [129];
  undefined1 local_4a4 [1027];
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 *local_78;
  longlong local_70;
  undefined8 ***local_68;
  uint local_60;
  uint local_5c [13];
  
  local_998 = (undefined8 *)0x0;
  local_9a0 = 0;
  local_990 = 0;
  local_980 = 0;
  local_988 = 0;
  local_918 = 0;
  local_920 = (undefined8 *)0x0;
  local_928 = (undefined8 *)0x0;
  local_8f0 = 0;
  local_8f8 = (undefined8 *)0x0;
  local_900 = (undefined8 *)0x0;
  local_908 = 0;
  local_910 = 0;
  local_8d8 = 0;
  local_8e0 = (undefined8 *)0x0;
  local_8e8 = (undefined8 *)0x0;
  local_8d0 = 0;
  local_8c0[0] = 0;
  local_8c8 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  lVar1 = *(longlong *)(param_2 + 0x20);
  lVar2 = *(longlong *)(param_2 + 8);
  uVar7 = FUN_0161bc10(*(undefined4 *)(lVar1 + 0x5bc),*(undefined8 *)(lVar2 + 0x48));
  *(undefined8 *)(lVar2 + 0x13980) = uVar7;
  *(undefined4 *)(lVar2 + 0x9c) = 0;
  *(undefined4 *)(lVar2 + 0xa0) = 0;
  *(int *)(lVar2 + 0x84) = *(int *)(lVar2 + 0x84) + 1;
  uVar7 = FUN_00b92140(0);
  if ((*(char *)(lVar2 + 0x139e9) != '\0') && (cVar3 = FUN_0163d0e0(lVar2), cVar3 != '\0')) {
    FUN_0163d1c0(lVar2,L">>ExecuteCode, process name: ");
  }
  if ((*(char *)(lVar2 + 0x139e9) != '\0') && (cVar3 = FUN_0163d0e0(lVar2), cVar3 != '\0')) {
    uVar14 = FUN_016290e0(lVar2);
    FUN_00b8fd60(&local_8c8,uVar14,3,0,1);
    FUN_00416ba0(local_8c0,L">>time: ",local_8c8);
    FUN_0163d1c0(lVar2,local_8c0[0]);
  }
  if ((*(char *)(lVar2 + 0x139e9) == '\0') || (cVar3 = FUN_0163d0e0(lVar2), cVar3 == '\0')) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  *(undefined1 *)(lVar2 + 10) = uVar4;
  local_9b4 = *(int *)(param_1 + 0x1c);
  while (local_9b4 <= *(int *)(param_1 + 0x20)) {
    lVar12 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x38),local_9b4);
    *(undefined4 *)(lVar2 + 0x7c) = *(undefined4 *)(lVar12 + 0x60);
    *(int *)(param_1 + 100) = local_9b4;
    if (*(char *)(lVar12 + 0x48) == '\0') {
      if (*(char *)(lVar2 + 0x13a18) != '\0') {
        local_9b6 = FUN_010a53f0(*(undefined8 *)PTR_DAT_020047b0,*(undefined4 *)(lVar12 + 0x60));
        if ((local_9b6 == '\0') &&
           (cVar3 = FUN_010a56d0(*(undefined8 *)PTR_DAT_020047b0), cVar3 == '\0')) {
          local_9b5 = 0;
        }
        else {
          local_9b5 = 1;
        }
        FUN_010a6760(*(undefined8 *)PTR_DAT_020047b0,1);
      }
      if ((*(char *)(lVar2 + 0x13a18) != '\0') &&
         ((local_9b5 != 0 ||
          ((*(int *)(lVar12 + 0x60) != -1 && (*(int *)(lVar2 + 0x90) != *(int *)(lVar12 + 0x60))))))
         ) {
        *(undefined4 *)(lVar2 + 0x90) = *(undefined4 *)(lVar12 + 0x60);
        FUN_01645a40(*(undefined8 *)(lVar2 + 0x20),*(undefined4 *)(lVar12 + 0x60));
        FUN_010a66d0(*(undefined8 *)PTR_DAT_020047b0);
        *(byte *)(lVar2 + 0x13a19) = *(byte *)(lVar2 + 0x13a19) | local_9b5;
        if ((*(char *)(lVar2 + 0x13a19) != '\0') ||
           (cVar3 = FUN_010a6750(*(undefined8 *)PTR_DAT_020047b0), cVar3 != '\0')) {
          FUN_01649570(lVar2,lVar1);
          FUN_016168c0(&local_8d0,*(undefined1 *)(*(longlong *)(lVar2 + 0x38) + 0x89));
          FUN_010a6d50(*(undefined8 *)PTR_DAT_020047b0,local_8d0);
          FUN_010a3d40(*(undefined8 *)PTR_DAT_020047b0);
          if (*(char *)(lVar2 + 0x13a19) != '\0') {
            FUN_010a5710(*(undefined8 *)PTR_DAT_020047b0);
            if (local_9b6 != '\0') {
              FUN_010a6760(*(undefined8 *)PTR_DAT_020047b0,0);
            }
            FUN_010a66c0(*(undefined8 *)PTR_DAT_020047b0,1);
            FUN_010a6cb0(*(undefined8 *)PTR_DAT_020047b0,L"Stopped");
            *(undefined1 *)(param_1 + 0x1a) = 0;
            while (((*(longlong *)PTR_DAT_020047b0 != 0 &&
                    (cVar3 = FUN_010a66b0(*(undefined8 *)PTR_DAT_020047b0), cVar3 != '\0')) &&
                   (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x49c) == '\0'))) {
              FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
            }
            FUN_010a6cb0(*(undefined8 *)PTR_DAT_020047b0,L"Running");
          }
        }
      }
      cVar3 = *(char *)(lVar12 + 8);
      if ((cVar3 == '1') || (cVar3 == '3')) {
        if (*(char *)(lVar12 + 0x49) == '\0') {
          uVar14 = FUN_0161be50(*(undefined8 *)(lVar12 + 0x58),param_2,local_8b0,1);
          FUN_0162eb40(uVar14,5);
          uVar14 = FUN_01614c70(uVar14);
          FUN_0162f500(param_1,lVar12,lVar2);
          FUN_0162f1f0(param_1,uVar14,lVar12,lVar2,*(undefined1 *)(lVar12 + 0x4d));
          if (*(char *)(lVar2 + 0x139e9) != '\0') {
            FUN_01614ea0(&local_8e0,*(undefined1 *)(lVar12 + 8));
            FUN_00b8fd60(&local_8e8,local_68,3,0,1);
            FUN_00416cd0(&local_8d8,3,local_8e0,&DAT_01633884,local_8e8);
            FUN_01631c00(param_1,local_8d8);
          }
        }
      }
      else if (cVar3 == '2') {
        uVar5 = FUN_0164a440(lVar2,*(undefined4 *)(lVar12 + 0x70));
        uVar6 = FUN_0164a440(lVar2,*(undefined4 *)(lVar12 + 0x78));
        local_68 = (undefined8 ***)FUN_016ee780(uVar5,uVar6,*(undefined8 *)(lVar2 + 0x38));
        lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
        FUN_01615b20(lVar8,local_68);
        if (*(char *)(lVar2 + 0x139e9) != '\0') {
          FUN_01614ea0(&local_8f8,*(undefined1 *)(lVar12 + 8));
          FUN_00b8fd60(&local_900,local_68,3,0,1);
          FUN_0043f750(&local_908,uVar5);
          FUN_0043f750(&local_910,uVar6);
          FUN_00416cd0(&local_8f0,7,local_8f8,&DAT_01633884,local_900,L"  G1: ",local_908,L", G2: ",
                       local_910);
          FUN_01631c00(param_1,local_8f0);
        }
        *(undefined4 *)(lVar8 + 0x14) = 5;
      }
      else if (cVar3 == '4') {
        local_68 = (undefined8 ***)FUN_0162f210(lVar12,lVar2);
        if (*(char *)(lVar12 + 0x4b) != '\0') {
          local_68 = (undefined8 ***)((ulonglong)local_68 ^ 0x8000000000000000);
        }
        lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
        FUN_01615b20(lVar8,local_68);
        if (*(char *)(lVar2 + 0x139e9) != '\0') {
          FUN_01614ea0(&local_920,*(undefined1 *)(lVar12 + 8));
          FUN_00b8fd60(&local_928,local_68,3,0,1);
          FUN_00416cd0(&local_918,3,local_920,&DAT_01633884,local_928);
          FUN_01631c00(param_1,local_918);
        }
        *(undefined4 *)(lVar8 + 0x14) = 5;
      }
      else if (cVar3 == '\x0e') {
        uVar14 = FUN_01612bc0(lVar12,1);
        uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
        uVar9 = FUN_01612bc0(lVar12,2);
        uVar9 = FUN_0161be50(uVar9,param_2,local_8b0,1);
        FUN_0162ec30(param_1,uVar14,uVar9,*(undefined2 *)(lVar12 + 10),lVar12,lVar2);
      }
      else {
        cVar3 = FUN_01615d00(cVar3);
        if (cVar3 == '\0') {
          cVar3 = *(char *)(lVar12 + 8);
          if (cVar3 == '\r') {
            iVar13 = FUN_01614590(lVar12);
            if (iVar13 == 0x3fc) {
              lVar8 = *(longlong *)(lVar2 + 0x20);
              uVar14 = FUN_00442620(local_4a4,*(undefined8 *)(lVar1 + 0x638));
              lVar10 = FUN_01612bc0(lVar12,1);
              uVar14 = _GetDigitalValue(*(undefined8 *)(lVar8 + 0x10b0),uVar14,
                                        *(undefined4 *)(lVar10 + 0xc),*(undefined1 *)(lVar10 + 0x21)
                                        ,lVar1 + 0x5c4,&local_60,local_5c);
              uVar9 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b80(uVar9,uVar14,local_60,local_5c[0]);
            }
            else if (iVar13 == 0x3fd) {
              lVar8 = *(longlong *)(lVar2 + 0x20);
              uVar9 = FUN_016290e0(lVar2);
              uVar14 = FUN_00442620(local_4a4,*(undefined8 *)(lVar1 + 0x638));
              lVar10 = FUN_01612bc0(lVar12,1);
              local_a1 = _GetDigitalEvent(*(undefined8 *)(lVar8 + 0x10b0),uVar14,
                                          *(undefined4 *)(lVar10 + 0xc),
                                          *(undefined1 *)(lVar10 + 0x21),uVar9,lVar1 + 0x5c4,
                                          &local_60,local_5c);
              uVar14 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b80(uVar14,&local_a1,local_60,local_5c[0]);
            }
            else {
              uVar14 = FUN_01612bc0(lVar12,1);
              uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
              FUN_0162efd0(param_1,uVar14,*(undefined2 *)(lVar12 + 10),lVar12,lVar2);
            }
          }
          else if (cVar3 == '5') {
            iVar13 = FUN_01614590(lVar12);
            if (iVar13 == 0x3ed) {
              cVar3 = FUN_01612be0(lVar12);
              if (cVar3 == '\0') {
                dVar16 = *(double *)(*(longlong *)(lVar2 + 0x38) + 0x6a0) + 273.15;
              }
              else {
                uVar14 = FUN_01612bc0(lVar12,1);
                uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                dVar16 = (double)FUN_01614c70(uVar14);
              }
              local_68 = (undefined8 ***)((dVar16 * 1.3806226e-23) / 1.6021917e-19);
              lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b20(lVar8,local_68);
              *(undefined4 *)(lVar8 + 0x14) = 5;
            }
            else if (iVar13 == 0x3ec) {
              local_68 = (undefined8 ***)(*(double *)(*(longlong *)(lVar2 + 0x38) + 0x6a0) + 273.15)
              ;
              lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b20(lVar8,local_68);
              *(undefined4 *)(lVar8 + 0x14) = 5;
            }
            else if (iVar13 == 0x3eb) {
              local_68 = (undefined8 ***)FUN_016290e0(lVar2);
              lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b20(lVar8,local_68);
              *(undefined4 *)(lVar8 + 0x14) = 5;
            }
            else if (iVar13 == 0x3ef) {
              FUN_01630560(param_1,param_2,lVar12,&local_68);
            }
            else if (iVar13 == 0x3ee) {
              FUN_01630e80(param_1,param_2,lVar12,&local_68);
            }
            else if (iVar13 == 0x3f0) {
              FUN_01631540(param_1,param_2,lVar12);
            }
            else if (iVar13 == 0x3ea) {
              local_68 = (undefined8 ****)0x0;
              if (((*(uint *)(lVar12 + 0x20) & 8) == 0) ||
                 ((*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\x01' &&
                  (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\x02')))) {
                if (((*(uint *)(lVar12 + 0x20) & 0x20) == 0) ||
                   (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\b')) {
                  if (((*(uint *)(lVar12 + 0x20) & 0x10) == 0) ||
                     (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\x06')) {
                    if (((*(uint *)(lVar12 + 0x20) & 0x40) == 0) ||
                       (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\f')) {
                      if (((*(uint *)(lVar12 + 0x20) & 4) == 0) ||
                         ((*(byte *)(*(longlong *)(lVar2 + 0x38) + 0x88) & 0x20) == 0)) {
                        if (((*(uint *)(lVar12 + 0x20) & 3) != 0) &&
                           ((*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) == '\a' ||
                            (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) == '\x05')))) {
                          local_68 = (undefined8 ****)0x3ff0000000000000;
                        }
                      }
                      else {
                        local_68 = (undefined8 ****)0x3ff0000000000000;
                      }
                    }
                    else {
                      local_68 = (undefined8 ****)0x3ff0000000000000;
                    }
                  }
                  else {
                    local_68 = (undefined8 ****)0x3ff0000000000000;
                  }
                }
                else {
                  local_68 = (undefined8 ****)0x3ff0000000000000;
                }
              }
              else {
                local_68 = (undefined8 ****)0x3ff0000000000000;
              }
              lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b20(lVar8,local_68);
              *(undefined4 *)(lVar8 + 0x14) = 5;
            }
            else {
              cVar3 = FUN_01614240(lVar12);
              if (cVar3 == '\0') {
                if ((iVar13 != 0x155) && (cVar3 = FUN_0162f340(iVar13), cVar3 == '\0')) {
                  cVar3 = FUN_016265c0(lVar12);
                  if ((cVar3 == '\0') && (iVar13 != 0x3ef)) {
                    uVar14 = FUN_01612bc0(lVar12,1);
                    uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                    local_68 = (undefined8 ***)FUN_01614c70();
                    if (iVar13 == 0x14f) {
                      uVar14 = FUN_01612bc0(lVar12,2);
                      uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                      local_930 = FUN_01614c70(uVar14);
                      local_938 = local_68;
                      FUN_0162f0f0(param_1,&local_938,1,*(undefined2 *)(lVar12 + 10),lVar12,lVar2);
                    }
                    else if (iVar13 == 0x3f2) {
                      uVar14 = FUN_01612bc0(lVar12,2);
                      uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                      uVar9 = FUN_01614c70(uVar14);
                      uVar14 = FUN_01612bc0(lVar12,3);
                      uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                      FUN_01614c70(uVar14);
                      local_940 = FUN_0040c850();
                      local_950 = local_68;
                      local_948 = uVar9;
                      FUN_0162f0f0(param_1,&local_950,2,*(undefined2 *)(lVar12 + 10),lVar12,lVar2);
                    }
                    else if (iVar13 == 0x3f3) {
                      uVar14 = FUN_01612bc0(lVar12,2);
                      uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                      uVar9 = FUN_01614c70(uVar14);
                      uVar14 = FUN_01612bc0(lVar12,3);
                      uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                      uVar15 = FUN_01614c70(uVar14);
                      uVar14 = FUN_01612bc0(lVar12,4);
                      uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                      local_958 = FUN_01614c70(uVar14);
                      local_970 = local_68;
                      local_968 = uVar9;
                      local_960 = uVar15;
                      FUN_0162f0f0(param_1,&local_970,3,*(undefined2 *)(lVar12 + 10),lVar12,lVar2);
                    }
                    else if (iVar13 == 0) {
                      local_68 = (undefined8 ****)0x0;
                      FUN_01615b20(uVar14,0);
                    }
                    else {
                      local_978 = local_68;
                      FUN_0162f0f0(param_1,&local_978,0,*(undefined2 *)(lVar12 + 10),lVar12,lVar2);
                    }
                  }
                  else {
                    FUN_01613110(L"Invalid function");
                  }
                }
              }
              else {
                local_68 = (undefined8 ****)0x0;
                if (iVar13 == 0x3f5) {
                  if (((*(uint *)(lVar12 + 0x20) & 8) == 0) ||
                     ((*(byte *)(*(longlong *)(lVar2 + 0x38) + 0x88) & 2) == 0)) {
                    if (((*(uint *)(lVar12 + 0x20) & 0x20) == 0) ||
                       (*(char *)(*(longlong *)(lVar2 + 0x38) + 0x89) != '\a')) {
                      if (((*(uint *)(lVar12 + 0x20) & 0x10) != 0) &&
                         ((dVar16 = (double)FUN_01629100(lVar2), dVar16 <= 1e-30 ||
                          ((*(byte *)(*(longlong *)(lVar2 + 0x38) + 0x88) & 0x20) != 0)))) {
                        local_68 = (undefined8 ****)0x3ff0000000000000;
                      }
                    }
                    else {
                      local_68 = (undefined8 ****)0x3ff0000000000000;
                    }
                  }
                  else {
                    local_68 = (undefined8 ****)0x3ff0000000000000;
                  }
                }
                else if (iVar13 == 0x3f6) {
                  dVar16 = (double)FUN_016ed780(*(undefined8 *)(lVar2 + 0x38),
                                                *(undefined1 *)(*(longlong *)(lVar2 + 0x38) + 0x89))
                  ;
                  if (*(double *)(*(longlong *)(lVar2 + 0x38) + 0x890) <= dVar16) {
                    local_68 = (undefined8 ****)0x3ff0000000000000;
                  }
                }
                else {
                  FUN_01613110(L"If IsAnalysisEventOp");
                }
                lVar8 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
                FUN_01615b20(lVar8,local_68);
                *(undefined4 *)(lVar8 + 0x14) = 5;
              }
            }
          }
          else if (cVar3 == '\x01') {
            uVar14 = FUN_01612bc0(lVar12,1);
            uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
            uVar9 = FUN_01612bc0(lVar12,2);
            uVar9 = FUN_0161be50(uVar9,param_2,local_8b0,1);
            local_68 = (undefined8 ***)FUN_01614c70(uVar9);
            FUN_0162f1b0(param_1,uVar14,local_68,lVar2);
            lVar8 = FUN_01612bc0(lVar12,1);
            iVar13 = *(int *)(lVar8 + 0xc);
            FUN_0162fb60(iVar13 + 1,local_68,lVar2,1);
            *(longlong *)
             (*(longlong *)(*(longlong *)(lVar2 + 0x13980) + 0x6a0) + (longlong)iVar13 * 0x10) =
                 lVar12;
          }
          else if ((*(char *)(lVar12 + 8) == '\x05') || (*(char *)(lVar12 + 8) == '\x03')) {
            uVar14 = FUN_01612bc0(lVar12,1);
            lVar8 = FUN_0161be50(uVar14,param_2,local_8b0,1);
            uVar14 = FUN_01612bc0(lVar12,2);
            lVar10 = FUN_0161be50(uVar14,param_2,local_8b0,1);
            local_68 = (undefined8 ***)FUN_01614c70(lVar10);
            FUN_0162f1b0(param_1,lVar8,local_68,lVar2);
            *(undefined4 *)(lVar8 + 0x14) = *(undefined4 *)(lVar10 + 0x14);
          }
          else if (*(char *)(lVar12 + 8) == '\x1d') {
            uVar14 = FUN_01612bc0(lVar12,1);
            uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
            local_68 = (undefined8 ***)FUN_01614c70(uVar14);
            if ((double)local_68 <= 0.0) {
              *(undefined1 *)(param_1 + 0x28) = 0;
            }
            else {
              *(undefined1 *)(param_1 + 0x28) = 1;
            }
          }
          else if (*(char *)(lVar12 + 8) == '\x16') {
            if (*(char *)(param_1 + 0x28) == '\0') {
              local_9b4 = local_9b4 + *(int *)(lVar12 + 0x20);
            }
          }
          else if (*(char *)(lVar12 + 8) == '\x17') {
            if (*(char *)(param_1 + 0x28) != '\0') {
              local_9b4 = local_9b4 + *(int *)(lVar12 + 0x20);
            }
          }
          else if (*(char *)(lVar12 + 8) == '\x18') {
            local_9b4 = local_9b4 + *(int *)(lVar12 + 0x20) + -1;
          }
          else if ((((((*(char *)(lVar12 + 8) != '\x11') && (*(char *)(lVar12 + 8) != '$')) &&
                     (*(char *)(lVar12 + 8) != 'J')) &&
                    ((*(char *)(lVar12 + 8) != '\x10' && (*(char *)(lVar12 + 8) != 'K')))) &&
                   ((*(char *)(lVar12 + 8) != 'L' &&
                    ((*(char *)(lVar12 + 8) != '7' && (*(char *)(lVar12 + 8) != '8')))))) &&
                  (*(char *)(lVar12 + 8) != ';')) {
            if (*(char *)(lVar12 + 8) == '6') {
              uVar14 = FUN_01612bc0(lVar12,1);
              uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
              local_68 = (undefined8 ***)FUN_01614c70(uVar14);
              if ((double)local_68 <= 0.0) {
                uVar14 = 3;
              }
              else {
                uVar14 = 2;
              }
              uVar14 = FUN_01612bc0(lVar12,uVar14);
              uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
              local_68 = (undefined8 ***)FUN_01614c70();
              uVar9 = FUN_0162e870(param_1,*(undefined8 *)(lVar12 + 0x58));
              FUN_01615b20(uVar9,local_68);
              FUN_0162ea10(5,uVar9,uVar14);
            }
            else if (*(char *)(lVar12 + 8) == '\x14') {
              if (*(int *)(lVar12 + 0x24) == 0) {
                uVar14 = FUN_01612bc0(lVar12,1);
                lVar8 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                if (*(int *)(lVar8 + 0x14) == 7) {
                  FUN_01614d20(&local_78,lVar8);
                  if (*(int *)(*(longlong *)(lVar12 + 0x50) + 0x10) < 2) {
                    FUN_0043f750(&local_988,*(undefined4 *)(lVar12 + 0x60));
                    FUN_00416ba0(&local_980,L"$display(), missing parameter: lineno: ",local_988);
                    FUN_01613110(local_980);
                  }
                  uVar14 = FUN_01612bc0(lVar12,2);
                  uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
                  local_68 = (undefined8 ***)FUN_01614c70(uVar14);
                  local_938 = &local_68;
                  local_930 = CONCAT71(local_930._1_7_,3);
                  FUN_00442f70(&local_990,local_78,&local_938,0);
                  FUN_00414b50(&local_78,local_990);
                  lVar8 = *(longlong *)(lVar2 + 0x20);
                  if (lVar8 != 0) {
                    if (*(longlong *)(lVar8 + 0x10b0) == 0) {
                      uVar14 = *(undefined8 *)(lVar8 + 0x10a8);
                    }
                    else {
                      uVar14 = *(undefined8 *)(lVar8 + 0x10b0);
                    }
                    *(undefined8 *)(*(longlong *)(lVar2 + 0x38) + 0x1330) = uVar14;
                    *(undefined1 *)(*(longlong *)(lVar2 + 0x38) + 0x1338) = 1;
                    FUN_00414ad0(*(longlong *)(lVar2 + 0x38) + 0x1340,*(undefined8 *)(lVar2 + 0x28))
                    ;
                    uVar9 = FUN_00442620(local_4a4,local_78);
                    _add_report_message(uVar14,uVar9);
                  }
                }
              }
            }
            else {
              FUN_01625c20(2,0xffffffff,lVar2);
            }
          }
        }
        else {
          uVar14 = FUN_01612bc0(lVar12,1);
          uVar14 = FUN_0161be50(uVar14,param_2,local_8b0,1);
          uVar9 = FUN_01612bc0(lVar12,2);
          uVar9 = FUN_0161be50(uVar9,param_2,local_8b0,1);
          uVar5 = FUN_01615d50(*(undefined1 *)(lVar12 + 8));
          *(short *)(lVar12 + 10) = (short)uVar5;
          local_68 = (undefined8 ***)FUN_0162ec30(param_1,uVar14,uVar9,uVar5,lVar12,lVar2);
          if ((double)local_68 == 0.0) {
            local_9b4 = local_9b4 + *(int *)(lVar12 + 0x20);
          }
        }
      }
    }
    if (*(char *)(lVar2 + 0x139e9) != '\0') {
      FUN_0043f750(&local_998,local_9b4);
      FUN_0161cb00(&local_9a0,lVar12,0);
      uVar14 = local_9a0;
      FUN_00416cd0(&local_78,4,&DAT_01633994,local_998,&DAT_016339a4,local_9a0);
      if (*(longlong *)(param_1 + 0x40) != 0) {
        FUN_00416cd0(&local_78,3,local_78,L", DebugStr: ",*(undefined8 *)(param_1 + 0x40),uVar14);
      }
      cVar3 = FUN_0163d0e0(lVar2);
      if (cVar3 != '\0') {
        FUN_0163d1c0(lVar2,local_78);
      }
      if ((*(char *)(param_1 + 0x1a) != '\0') || (*(int *)(lVar12 + 0x60) != local_9bc)) {
        local_9bc = *(int *)(lVar12 + 0x60);
      }
      FUN_00414480(param_1 + 0x40);
    }
    local_9b4 = local_9b4 + 1;
    *(undefined1 *)(param_1 + 0x1a) = 0;
  }
  if (*(char *)(lVar2 + 0x139e9) != '\0') {
    FUN_00414480(&local_78);
    cVar3 = FUN_0163d0e0(lVar2);
    if (cVar3 != '\0') {
      FUN_0163d1c0(lVar2,local_78);
    }
  }
  if (*(char *)(lVar1 + 0x688) != '\0') {
    iVar13 = *(int *)(*(longlong *)(lVar1 + 0x28) + 0x10);
    local_9b4 = 0;
    if (-1 < iVar13 + -1) {
      do {
        plVar11 = (longlong *)FUN_004aeac0(*(undefined8 *)(lVar1 + 0x28),local_9b4);
        (**(code **)(*plVar11 + 0x2d0))(plVar11,0,&local_70);
        lVar12 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(local_70 + 0x38) + 8),0);
        uVar14 = *(undefined8 *)(lVar12 + 0x80);
        cVar3 = FUN_01629120(lVar12);
        if ((cVar3 == '\0') && (*(char *)(lVar12 + 0x49) == '\0')) {
          FUN_016504c0(uVar14,*(undefined8 *)(lVar2 + 0x38),*(undefined1 *)(lVar2 + 0x139b8));
          FUN_0164e990(uVar14,*(undefined8 *)(lVar2 + 0x38),*(undefined1 *)(lVar2 + 0x139b8));
          *(undefined1 *)(lVar12 + 0x4e) = 0;
        }
        local_9b4 = local_9b4 + 1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
  }
  lVar1 = *(longlong *)(lVar2 + 0x38);
  dVar16 = (double)FUN_00b92140(uVar7);
  *(double *)(lVar1 + 0xf50) = dVar16 + *(double *)(lVar1 + 0xf50);
  *(double *)(lVar1 + 0xf68) = *(double *)(lVar1 + 0xf68) + (double)*(int *)(lVar2 + 0x9c);
  *(double *)(lVar1 + 0xf70) = *(double *)(lVar1 + 0xf70) + (double)*(int *)(lVar2 + 0xa0);
  FUN_00414560(&local_9a0,5);
  FUN_00414560(&local_928,0xe);
  FUN_00414560(&local_a0,6);
  return;
}

