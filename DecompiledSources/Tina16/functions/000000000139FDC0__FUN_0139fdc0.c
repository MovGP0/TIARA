/* Ghidra address: 0139fdc0 */
/* Ghidra symbol: FUN_0139fdc0 */


void FUN_0139fdc0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  int *piVar7;
  undefined8 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined8 local_res10 [3];
  undefined4 uVar13;
  undefined8 in_stack_fffffffffffffd40;
  undefined4 uVar14;
  undefined8 in_stack_fffffffffffffd48;
  undefined8 in_stack_fffffffffffffd50;
  undefined8 in_stack_fffffffffffffd68;
  undefined4 uVar15;
  int local_268;
  int local_264;
  undefined4 local_260;
  undefined4 local_25c;
  longlong local_258;
  int local_250;
  undefined2 local_24c;
  ushort local_24a;
  undefined4 local_248;
  undefined2 local_244;
  ushort local_242;
  undefined2 local_240;
  ushort local_23e;
  undefined4 local_23c;
  undefined4 local_238;
  undefined4 local_234;
  undefined4 local_230;
  int local_22c;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210 [2];
  undefined1 local_1fe [210];
  undefined4 local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined8 local_100 [15];
  undefined2 local_84 [15];
  int local_66 [7];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  ushort local_1e;
  int local_1c;
  
  uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffd68 >> 0x20);
  local_228 = 0;
  local_218 = 0;
  local_220 = 0;
  local_210[0] = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414b50(&local_108,local_res10[0]);
  local_1c = 0;
  local_1e = 0;
  piVar10 = &local_1c;
  FUN_0139f810(param_1,&local_110,&local_108,&local_1e,piVar10);
  iVar3 = FUN_00416db0(local_110,L"InsertPart");
  uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd50 >> 0x20);
  uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
  if (iVar3 == 0) {
    FUN_019a4600();
    FUN_01396fa0();
    if (local_1c == 0) {
      FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    if (local_1c == 0) {
      local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    if (local_1c == 0) {
      local_24 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    if (local_1c == 0) {
      local_28 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    if (local_1c == 0) {
      FUN_0139fc90(param_1,&local_24,&local_28);
    }
    if (local_1c == 0) {
      local_244 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    if (local_1c == 0) {
      local_24a = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    uVar11 = (uint)local_24a;
    if (-1 < (int)(uVar11 - 1)) {
      piVar7 = local_66;
      do {
        if (local_1c == 0) {
          uVar2 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
          *(undefined2 *)piVar7 = uVar2;
        }
        piVar7 = (int *)((longlong)piVar7 + 2);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (local_1c == 0) {
      local_242 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
    uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd50 >> 0x20);
    uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
    uVar11 = (uint)local_242;
    if (-1 < (int)(uVar11 - 1)) {
      puVar8 = local_100;
      do {
        if (local_1c == 0) {
          uVar12 = FUN_0139fbf0(param_1,&local_108,&local_1e,&local_1c);
          *puVar8 = uVar12;
        }
        uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
        uVar5 = (undefined4)((ulonglong)in_stack_fffffffffffffd50 >> 0x20);
        uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd48 >> 0x20);
        puVar8 = puVar8 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    if (local_1c == 0) {
      uVar11 = 0;
      if (local_108 != 0) {
        uVar11 = *(uint *)(local_108 + -4);
      }
      if ((local_1e != uVar11) || (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
        local_1c = 3;
      }
    }
    if (local_1c == 0) {
      piVar10 = local_66;
      FUN_0139c260(local_24c,local_244,local_24a,local_242,piVar10,local_100,
                   CONCAT44(uVar4,local_24),CONCAT44(uVar5,local_28));
      uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
    }
  }
  else {
    iVar3 = FUN_00416db0(local_110,L"AddComponent");
    if (iVar3 == 0) {
      FUN_019a4600();
      FUN_01396fa0();
      if (local_1c == 0) {
        FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      if (local_1c == 0) {
        local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      if (local_1c == 0) {
        local_24 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      if (local_1c == 0) {
        local_28 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      if (local_1c == 0) {
        FUN_0139fc90(param_1,&local_24,&local_28);
      }
      if (local_1c == 0) {
        local_244 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      if (local_1c == 0) {
        local_24a = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      uVar11 = (uint)local_24a;
      if (-1 < (int)(uVar11 - 1)) {
        piVar7 = local_66;
        do {
          if (local_1c == 0) {
            uVar2 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            *(undefined2 *)piVar7 = uVar2;
          }
          piVar7 = (int *)((longlong)piVar7 + 2);
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (local_1c == 0) {
        local_242 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      uVar11 = (uint)local_242;
      if (-1 < (int)(uVar11 - 1)) {
        puVar8 = local_100;
        do {
          if (local_1c == 0) {
            uVar12 = FUN_0139fbf0(param_1,&local_108,&local_1e,&local_1c);
            *puVar8 = uVar12;
          }
          puVar8 = puVar8 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      if (local_1c == 0) {
        local_23e = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      uVar11 = (uint)local_23e;
      if (-1 < (int)(uVar11 - 1)) {
        puVar9 = local_84;
        do {
          if (local_1c == 0) {
            uVar2 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            *puVar9 = uVar2;
          }
          puVar9 = puVar9 + 1;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
      }
      uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
      if (local_1c == 0) {
        uVar11 = 0;
        if (local_108 != 0) {
          uVar11 = *(uint *)(local_108 + -4);
        }
        if ((local_1e != uVar11) || (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d))
        {
          local_1c = 3;
        }
      }
      if (local_1c == 0) {
        uVar12 = CONCAT62((int6)((ulonglong)piVar10 >> 0x10),local_23e);
        FUN_0139c610(local_24c,local_244,local_24a,local_242,uVar12,local_66,local_100,local_84,
                     local_24,local_28,&local_12c);
        uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
      }
    }
    else {
      iVar3 = FUN_00416db0(local_110,L"SetParameters");
      uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
      if (iVar3 == 0) {
        if (local_1c == 0) {
          FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          local_244 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          local_24a = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
        }
        uVar11 = (uint)local_24a;
        if (-1 < (int)(uVar11 - 1)) {
          piVar7 = local_66;
          do {
            if (local_1c == 0) {
              uVar2 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
              *(undefined2 *)piVar7 = uVar2;
            }
            piVar7 = (int *)((longlong)piVar7 + 2);
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (local_1c == 0) {
          local_242 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
        }
        uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
        uVar11 = (uint)local_242;
        if (-1 < (int)(uVar11 - 1)) {
          puVar8 = local_100;
          do {
            if (local_1c == 0) {
              uVar12 = FUN_0139fbf0(param_1,&local_108,&local_1e,&local_1c);
              *puVar8 = uVar12;
            }
            uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
            puVar8 = puVar8 + 1;
            uVar11 = uVar11 - 1;
          } while (uVar11 != 0);
        }
        if (local_1c == 0) {
          uVar11 = 0;
          if (local_108 != 0) {
            uVar11 = *(uint *)(local_108 + -4);
          }
          if ((local_1e != uVar11) || (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)
             ) {
            local_1c = 3;
          }
        }
        if (local_1c == 0) {
          piVar10 = local_66;
          FUN_0139cd60(local_24c,local_244,local_24a,local_242,piVar10,local_100);
          uVar13 = (undefined4)((ulonglong)piVar10 >> 0x20);
        }
        if (*(char *)(param_1 + 0x6f3) != '\0') {
          uVar12 = FUN_019a4600();
          FUN_01396fa0(uVar12);
        }
      }
      else {
        iVar3 = FUN_00416db0(local_110,L"MovePart");
        if (iVar3 == 0) {
          if (local_1c == 0) {
            FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
          }
          if (local_1c == 0) {
            local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
          }
          if (local_1c == 0) {
            local_24 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
          }
          if (local_1c == 0) {
            local_28 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
          }
          if (local_1c == 0) {
            FUN_0139fc90(param_1,&local_24,&local_28);
          }
          if (local_1c == 0) {
            uVar11 = 0;
            if (local_108 != 0) {
              uVar11 = *(uint *)(local_108 + -4);
            }
            if ((local_1e != uVar11) ||
               (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
              local_1c = 3;
            }
          }
          if (local_1c == 0) {
            FUN_0139c950(local_24c,local_24,local_28);
          }
        }
        else {
          iVar3 = FUN_00416db0(local_110,L"LocalisePart");
          uVar14 = (undefined4)((ulonglong)in_stack_fffffffffffffd40 >> 0x20);
          if (iVar3 == 0) {
            if (local_1c == 0) {
              FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_24 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_28 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              FUN_0139fc90(param_1,&local_24,&local_28);
            }
            if (local_1c == 0) {
              local_24a = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd40 >> 0x20);
            uVar11 = (uint)local_24a;
            if (-1 < (int)(uVar11 - 1)) {
              piVar10 = local_66;
              do {
                if (local_1c == 0) {
                  uVar2 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                  *(undefined2 *)piVar10 = uVar2;
                }
                uVar4 = (undefined4)((ulonglong)in_stack_fffffffffffffd40 >> 0x20);
                piVar10 = (int *)((longlong)piVar10 + 2);
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (local_1c == 0) {
              uVar11 = 0;
              if (local_108 != 0) {
                uVar11 = *(uint *)(local_108 + -4);
              }
              if ((local_1e != uVar11) ||
                 (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                local_1c = 3;
              }
            }
            cVar1 = '\0';
            if (local_1c == 0) {
              cVar1 = FUN_0139ca60(local_24c,local_24,local_28,local_24a,local_66,
                                   CONCAT44(uVar4,0xe),&local_12c);
            }
            FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
            if (cVar1 == '\0') {
              FUN_0043f750(&local_218,local_24c);
              FUN_0043f750(&local_220,local_12c);
              uVar13 = 0;
              FUN_00416cd0(&local_110,5,L"[LocaliseFailed(0,",local_218,&DAT_013a2ba0,local_220,
                           &PTR_DAT_013a2bb4);
              FUN_013a40d0(param_1,&local_110);
            }
            else {
              FUN_0043f750(local_210,local_24c);
              uVar13 = 0;
              FUN_00416cd0(&local_110,3,L"[Localised(0,",local_210[0],L",0)]");
              FUN_013a40d0(param_1,&local_110);
            }
          }
          else {
            iVar3 = FUN_00416db0(local_110,L"InsertWire");
            if (iVar3 != 0) {
              iVar3 = FUN_00416db0(local_110,L"RefreshWire");
              if (iVar3 != 0) {
                iVar3 = FUN_00416db0(local_110,L"DeleteWire");
                if (iVar3 == 0) {
                  uVar12 = FUN_019a4600();
                  FUN_01396fa0(uVar12);
                  if (local_1c == 0) {
                    FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                  }
                  if (local_1c == 0) {
                    local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                  }
                  if (local_1c == 0) {
                    uVar11 = 0;
                    if (local_108 != 0) {
                      uVar11 = *(uint *)(local_108 + -4);
                    }
                    if ((local_1e != uVar11) ||
                       (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                      local_1c = 3;
                    }
                  }
                  if (local_1c == 0) {
                    FUN_00f49310(*(undefined8 *)PTR_DAT_02004ec8,local_24c,1);
                  }
                }
                else {
                  iVar3 = FUN_00416db0(local_110,L"NewCircuit");
                  if (iVar3 == 0) {
                    uVar12 = FUN_019a4600();
                    FUN_01396fa0(uVar12);
                    if (local_1c == 0) {
                      FUN_01c77470(*(undefined8 *)PTR_DAT_02004e40,1);
                    }
                    uVar12 = FUN_00b89270();
                    FUN_00b8e520(uVar12,&local_228,0x8c);
                    FUN_0064de00(*(undefined8 *)PTR_DAT_02004e40,local_228);
                    FUN_0080c630(*(undefined8 *)PTR_DAT_02004030,L"Edison");
                    uVar12 = FUN_0198d430(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0x27a8));
                    FUN_01a98210(uVar12,&local_128);
                    FUN_01c67df0(*(undefined8 *)PTR_DAT_02004e40,0x9c4 - (local_120 - local_128) / 2
                                 ,0x9c4 - (local_11c - local_124) / 2,0);
                    if (local_1c == 0) {
                      FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                    }
                    if (local_1c == 0) {
                      uVar12 = FUN_0139fbf0(param_1,&local_108,&local_1e,&local_1c);
                      *(undefined8 *)(PTR_DAT_02004010 + 0x7e0) = uVar12;
                    }
                    FUN_00b90440(*(undefined8 *)(*(longlong *)PTR_DAT_02002da0 + 0x6c8),
                                 *(undefined8 *)(PTR_DAT_02004010 + 0x7e0));
                    FUN_0132abf0(*(undefined8 *)PTR_DAT_02002da0,0);
                    *(undefined1 *)(param_1 + 0x6f0) = 1;
                    FUN_0132bb80(*(undefined8 *)PTR_DAT_02002da0,L" t =  0",0);
                  }
                  else {
                    iVar3 = FUN_00416db0(local_110,L"DeletePart");
                    if (iVar3 == 0) {
                      uVar12 = FUN_019a4600();
                      FUN_01396fa0(uVar12);
                      if (local_1c == 0) {
                        FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                      }
                      if (local_1c == 0) {
                        local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                      }
                      if (local_1c == 0) {
                        uVar11 = 0;
                        if (local_108 != 0) {
                          uVar11 = *(uint *)(local_108 + -4);
                        }
                        if ((local_1e != uVar11) ||
                           (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                          local_1c = 3;
                        }
                      }
                      if (local_1c == 0) {
                        FUN_0139d2d0(local_24c);
                      }
                    }
                    else {
                      iVar3 = FUN_00416db0(local_110,L"ExchangePartID");
                      if (iVar3 == 0) {
                        if (local_1c == 0) {
                          FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                        }
                        if (local_1c == 0) {
                          local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                        }
                        if (local_1c == 0) {
                          local_240 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                        }
                        if (local_1c == 0) {
                          uVar11 = 0;
                          if (local_108 != 0) {
                            uVar11 = *(uint *)(local_108 + -4);
                          }
                          if ((local_1e != uVar11) ||
                             (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                            local_1c = 3;
                          }
                        }
                        if (local_1c == 0) {
                          FUN_0139d060(local_24c,local_240);
                        }
                      }
                      else {
                        iVar3 = FUN_00416db0(local_110,L"ChangeTerminalID");
                        if (iVar3 == 0) {
                          if (local_1c == 0) {
                            FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                          }
                          if (local_1c == 0) {
                            local_23c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                          }
                          if (local_1c == 0) {
                            local_238 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                          }
                          if (local_1c == 0) {
                            uVar11 = 0;
                            if (local_108 != 0) {
                              uVar11 = *(uint *)(local_108 + -4);
                            }
                            if ((local_1e != uVar11) ||
                               (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                              local_1c = 3;
                            }
                          }
                          if (local_1c == 0) {
                            FUN_0139d200(local_23c,local_238);
                          }
                        }
                        else {
                          iVar3 = FUN_00416db0(local_110,L"StartDragging");
                          if (iVar3 == 0) {
                            if (local_1c == 0) {
                              FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                            }
                            if (local_1c == 0) {
                              local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                            }
                            if (local_1c == 0) {
                              uVar11 = 0;
                              if (local_108 != 0) {
                                uVar11 = *(uint *)(local_108 + -4);
                              }
                              if ((local_1e != uVar11) ||
                                 (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                                local_1c = 3;
                              }
                            }
                            if (local_1c == 0) {
                              FUN_0139d420(local_24c);
                            }
                          }
                          else {
                            iVar3 = FUN_00416db0(local_110,L"TinaRefreshRequest");
                            if (iVar3 == 0) {
                              if (local_1c == 0) {
                                local_268 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                              }
                              if (local_1c == 0) {
                                uVar11 = 0;
                                if (local_108 != 0) {
                                  uVar11 = *(uint *)(local_108 + -4);
                                }
                                if ((local_1e != uVar11) ||
                                   (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                                  local_1c = 3;
                                }
                              }
                              (**(code **)(**(longlong **)PTR_DAT_02004e40 + 600))
                                        (*(longlong **)PTR_DAT_02004e40);
                              FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
                              if (local_268 != 0) {
                                uVar12 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
                                uVar4 = thunk_FUN_039b6ab1(uVar12,0);
                                uVar5 = thunk_FUN_039b6ab1(local_258,0);
                                thunk_FUN_03aa44e1(uVar4,uVar5,0xffffffff);
                                thunk_FUN_03c244fb(local_258);
                                uVar12 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
                                uVar4 = thunk_FUN_039b6ab1(uVar12,0);
                                uVar5 = thunk_FUN_039b6ab1(local_258,0);
                                thunk_FUN_03aa44e1(uVar4,uVar5,0);
                              }
                            }
                            else {
                              iVar3 = FUN_00416db0(local_110,L"ACAnalysisRequest");
                              if (iVar3 == 0) {
                                if (local_1c == 0) {
                                  FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                }
                                if (local_1c == 0) {
                                  local_268 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                }
                                if (local_1c == 0) {
                                  uVar11 = 0;
                                  if (local_108 != 0) {
                                    uVar11 = *(uint *)(local_108 + -4);
                                  }
                                  if ((local_1e != uVar11) ||
                                     (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d))
                                  {
                                    local_1c = 3;
                                  }
                                }
                                if (local_1c == 0) {
                                  if ((*(int *)(param_1 + 0x6e8) == 0) &&
                                     (*(char *)(param_1 + 0x6d8) == '\0')) {
                                    FUN_013a4350(param_1);
                                    FUN_013a3d80(param_1,0);
                                    FUN_013a4380(param_1);
                                  }
                                  else if (local_268 == 0) {
                                    uVar12 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
                                    thunk_FUN_0413e052(uVar12,0x1234,2,0);
                                  }
                                  else {
                                    uVar12 = FUN_0065b870(*(undefined8 *)PTR_DAT_02004e40);
                                    thunk_FUN_0413e052(uVar12,0x1234,1,0);
                                  }
                                }
                              }
                              else {
                                iVar3 = FUN_00416db0(local_110,L"Invalidate3D");
                                if (iVar3 == 0) {
                                  if (local_1c == 0) {
                                    FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                  }
                                  if (local_1c == 0) {
                                    uVar11 = 0;
                                    if (local_108 != 0) {
                                      uVar11 = *(uint *)(local_108 + -4);
                                    }
                                    if ((local_1e != uVar11) ||
                                       (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d
                                       )) {
                                      local_1c = 3;
                                    }
                                  }
                                  if (local_1c == 0) {
                                    FUN_013a3fe0(param_1);
                                  }
                                }
                                else {
                                  iVar3 = FUN_00416db0(local_110,L"SignalAnalyserMode");
                                  if (iVar3 == 0) {
                                    if (local_1c == 0) {
                                      FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                    }
                                    if (local_1c == 0) {
                                      local_268 = FUN_0139fab0(param_1,&local_108,&local_1e,
                                                               &local_1c);
                                    }
                                    if (local_1c == 0) {
                                      FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                    }
                                    if (local_1c == 0) {
                                      uVar11 = 0;
                                      if (local_108 != 0) {
                                        uVar11 = *(uint *)(local_108 + -4);
                                      }
                                      if ((local_1e != uVar11) ||
                                         (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) !=
                                          0x5d)) {
                                        local_1c = 3;
                                      }
                                    }
                                    if (local_1c == 0) {
                                      if (local_268 == 1) {
                                        FUN_017d3e40();
                                      }
                                      else {
                                        FUN_017d42c0();
                                      }
                                    }
                                  }
                                  else {
                                    iVar3 = FUN_00416db0(local_110,L"RequestDiagram");
                                    if (iVar3 == 0) {
                                      uVar12 = FUN_019a4600();
                                      FUN_01396fa0(uVar12);
                                      if (local_1c == 0) {
                                        FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                      }
                                      if (local_1c == 0) {
                                        local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,
                                                                 &local_1c);
                                      }
                                      if (local_1c == 0) {
                                        uVar11 = 0;
                                        if (local_108 != 0) {
                                          uVar11 = *(uint *)(local_108 + -4);
                                        }
                                        if ((local_1e != uVar11) ||
                                           (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) !=
                                            0x5d)) {
                                          local_1c = 3;
                                        }
                                      }
                                      if (local_1c == 0) {
                                        FUN_013a4be0(param_1,local_24c);
                                      }
                                    }
                                    else {
                                      iVar3 = FUN_00416db0(local_110,L"RequestSymbolicResult");
                                      if (iVar3 == 0) {
                                        uVar12 = FUN_019a4600();
                                        FUN_01396fa0(uVar12);
                                        if (local_1c == 0) {
                                          FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                        }
                                        if (local_1c == 0) {
                                          local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,
                                                                   &local_1c);
                                        }
                                        if (local_1c == 0) {
                                          uVar11 = 0;
                                          if (local_108 != 0) {
                                            uVar11 = *(uint *)(local_108 + -4);
                                          }
                                          if ((local_1e != uVar11) ||
                                             (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2)
                                              != 0x5d)) {
                                            local_1c = 3;
                                          }
                                        }
                                        if (local_1c == 0) {
                                          FUN_0145f5b0(local_24c);
                                        }
                                      }
                                      else {
                                        iVar3 = FUN_00416db0(local_110,L"SetACTransientMode");
                                        if (iVar3 == 0) {
                                          if (local_1c == 0) {
                                            FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                                          }
                                          if (local_1c == 0) {
                                            local_268 = FUN_0139fab0(param_1,&local_108,&local_1e,
                                                                     &local_1c);
                                          }
                                          if (local_1c == 0) {
                                            uVar11 = 0;
                                            if (local_108 != 0) {
                                              uVar11 = *(uint *)(local_108 + -4);
                                            }
                                            if ((local_1e != uVar11) ||
                                               (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2)
                                                != 0x5d)) {
                                              local_1c = 3;
                                            }
                                          }
                                          if (local_1c == 0) {
                                            if (local_268 == 1) goto LAB_013a29dd;
                                            *(undefined4 *)(param_1 + 0x6e8) = 0;
                                            FUN_0082a6c0(*(undefined8 *)
                                                          (*(longlong *)PTR_DAT_02002da0 + 0x6d8),1)
                                            ;
                                            FUN_0132b2d0(*(undefined8 *)PTR_DAT_02002da0,0);
                                          }
                                        }
                                        else {
                                          iVar3 = FUN_00416db0(local_110,L"Destroy");
                                          if (iVar3 == 0) {
                                            FUN_00414b50(&local_118,L"[TINAStopped(0)]");
                                            FUN_013a40d0(param_1,&local_118);
                                            DAT_01f39fc8 = 0;
                                            FUN_013a43b0(param_1,param_1);
                                          }
                                          else {
                                            iVar3 = FUN_00416db0(local_110,L"CloseQueryReceived");
                                            if (iVar3 == 0) {
                                              *(undefined4 *)(param_1 + 0x6ec) = 0;
                                            }
                                            else {
                                              iVar3 = FUN_00416db0(local_110,L"SetWindowPlacement");
                                              if (iVar3 == 0) {
                                                if (local_1c == 0) {
                                                  local_2c = FUN_0139fab0(param_1,&local_108,
                                                                          &local_1e,&local_1c);
                                                }
                                                if (local_1c == 0) {
                                                  local_30 = FUN_0139fab0(param_1,&local_108,
                                                                          &local_1e,&local_1c);
                                                }
                                                if (local_1c == 0) {
                                                  local_34 = FUN_0139fab0(param_1,&local_108,
                                                                          &local_1e,&local_1c);
                                                }
                                                if (local_1c == 0) {
                                                  local_38 = FUN_0139fab0(param_1,&local_108,
                                                                          &local_1e,&local_1c);
                                                }
                                                if (local_1c == 0) {
                                                  uVar11 = 0;
                                                  if (local_108 != 0) {
                                                    uVar11 = *(uint *)(local_108 + -4);
                                                  }
                                                  if ((local_1e != uVar11) ||
                                                     (*(short *)(local_108 + -2 +
                                                                (ulonglong)local_1e * 2) != 0x5d)) {
                                                    local_1c = 3;
                                                  }
                                                }
                                                if (local_1c == 0) {
                                                  FUN_007fdf50(*(undefined8 *)PTR_DAT_02004e40,0);
                                                  if (*(char *)(*(longlong *)
                                                                 (*(longlong *)PTR_DAT_02004e40 +
                                                                 0x890) + 0x80) != '\0') {
                                                    FUN_01c67dc0(*(undefined8 *)PTR_DAT_02004e40,0);
                                                  }
                                                  if (*(char *)(*(longlong *)
                                                                 (*(longlong *)PTR_DAT_02004e40 +
                                                                 0x898) + 0x80) != '\0') {
                                                    FUN_01c67d50(*(undefined8 *)PTR_DAT_02004e40,0);
                                                  }
                                                  if (*(char *)(*(longlong *)
                                                                 (*(longlong *)PTR_DAT_02004e40 +
                                                                 0xc90) + 0x80) != '\0') {
                                                    FUN_01c83d30(*(undefined8 *)PTR_DAT_02004e40,0);
                                                  }
                                                  FUN_00800700(*(undefined8 *)PTR_DAT_02004e40,0);
                                                  FUN_00806af0(*(undefined8 *)PTR_DAT_02004e40,
                                                               local_2c);
                                                  FUN_00806b40(*(undefined8 *)PTR_DAT_02004e40,
                                                               local_30);
                                                  FUN_0064cbf0(*(undefined8 *)PTR_DAT_02004e40,
                                                               local_34 - local_2c);
                                                  FUN_0064cc50(*(undefined8 *)PTR_DAT_02004e40,
                                                               local_38 - local_30);
                                                  FUN_007fdf50(*(undefined8 *)PTR_DAT_02004e40,1);
                                                  FUN_0132be00(*(undefined8 *)PTR_DAT_02002da0);
                                                  FUN_00414b50(&local_118,L"[TINASetupComplete(0)]")
                                                  ;
                                                  *PTR_DAT_020037c0 = 1;
                                                  FUN_013a40d0(param_1,&local_118);
                                                }
                                              }
                                              else {
                                                iVar3 = FUN_00416db0(local_110,L"StringMessage");
                                                if (iVar3 == 0) {
                                                  if (local_1c == 0) {
                                                    FUN_0139fab0(param_1,&local_108,&local_1e,
                                                                 &local_1c);
                                                  }
                                                  if (local_1c == 0) {
                                                    local_268 = FUN_0139fab0(param_1,&local_108,
                                                                             &local_1e,&local_1c);
                                                  }
                                                  if (local_1c == 0) {
                                                    local_260 = FUN_0139fb50(param_1,&local_108,
                                                                             &local_1e,&local_1c);
                                                  }
                                                  if (local_1c == 0) {
                                                    piVar10 = &local_1c;
                                                    FUN_0139f970(param_1,&local_118,&local_108,
                                                                 &local_1e,piVar10);
                                                    uVar13 = (undefined4)
                                                             ((ulonglong)piVar10 >> 0x20);
                                                  }
                                                  if (local_1c == 0) {
                                                    uVar11 = 0;
                                                    if (local_108 != 0) {
                                                      uVar11 = *(uint *)(local_108 + -4);
                                                    }
                                                    if ((local_1e != uVar11) ||
                                                       (*(short *)(local_108 + -2 +
                                                                  (ulonglong)local_1e * 2) != 0x5d))
                                                    {
                                                      local_1c = 3;
                                                    }
                                                  }
                                                  if (local_1c == 0) {
                                                    if (local_268 == 1000) {
                                                      FUN_0132b6c0(*(undefined8 *)PTR_DAT_02002da0,
                                                                   &local_118);
                                                      FUN_013a4f70(param_1);
                                                    }
                                                    else if (local_268 == 0x44c) {
                                                      FUN_01aed930(*(undefined8 *)PTR_DAT_020041a8,
                                                                   local_118);
                                                      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
                                                    }
                                                    else if (local_268 == 0x4b0) {
                                                      FUN_01aee490(*(undefined8 *)PTR_DAT_020041a8,
                                                                   local_118,local_260);
                                                      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
                                                    }
                                                  }
                                                }
                                                else {
                                                  iVar3 = FUN_00416db0(local_110,L"MacroPlayBack");
                                                  if (iVar3 == 0) {
                                                    if (local_1c == 0) {
                                                      local_268 = FUN_0139fab0(param_1,&local_108,
                                                                               &local_1e,&local_1c);
                                                    }
                                                    if (local_1c == 0) {
                                                      uVar11 = 0;
                                                      if (local_108 != 0) {
                                                        uVar11 = *(uint *)(local_108 + -4);
                                                      }
                                                      if ((local_1e != uVar11) ||
                                                         (*(short *)(local_108 + -2 +
                                                                    (ulonglong)local_1e * 2) != 0x5d
                                                         )) {
                                                        local_1c = 3;
                                                      }
                                                    }
                                                    if (local_1c == 0) {
                                                      FUN_01aed330(*(undefined8 *)PTR_DAT_020041a8,
                                                                   local_268);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_013a23cc;
              }
            }
            iVar3 = FUN_00416db0(local_110,L"InsertWire");
            if (iVar3 == 0) {
              uVar12 = FUN_019a4600();
              FUN_01396fa0(uVar12);
            }
            if (local_1c == 0) {
              FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_24c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_23c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_238 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_234 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_3c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_40 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              FUN_0139fc90(param_1,&local_3c,&local_40);
            }
            if (local_1c == 0) {
              local_44 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_48 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              FUN_0139fc90(param_1,&local_44,&local_48);
            }
            if (local_1c == 0) {
              local_2c = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_30 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              FUN_0139fc90(param_1,&local_2c,&local_30);
            }
            if (local_1c == 0) {
              local_34 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              local_38 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              FUN_0139fc90(param_1,&local_34,&local_38);
            }
            if (local_1c == 0) {
              local_230 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
            }
            if (local_1c == 0) {
              uVar11 = 0;
              if (local_108 != 0) {
                uVar11 = *(uint *)(local_108 + -4);
              }
              if ((local_1e != uVar11) ||
                 (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                local_1c = 3;
              }
            }
            if (local_1c == 0) {
              iVar3 = FUN_00416db0(local_110,L"InsertWire");
              if (iVar3 == 0) {
                uVar12 = CONCAT44(uVar13,local_234);
                FUN_00f474f0(*(undefined8 *)PTR_DAT_02004ec8,local_24c,local_23c,local_238,uVar12,
                             CONCAT44(uVar14,local_3c),CONCAT44(uVar4,local_40),
                             CONCAT44(uVar5,local_44),local_48,local_2c,CONCAT44(uVar15,local_30),
                             local_34,local_38,local_230);
                uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
              }
              else {
                uVar12 = CONCAT44(uVar13,local_234);
                FUN_00f491f0(*(undefined8 *)PTR_DAT_02004ec8,local_24c,local_23c,local_238,uVar12,
                             CONCAT44(uVar14,local_3c),CONCAT44(uVar4,local_40),
                             CONCAT44(uVar5,local_44),local_48,local_2c,CONCAT44(uVar15,local_30),
                             local_34,local_38,local_230);
                uVar13 = (undefined4)((ulonglong)uVar12 >> 0x20);
              }
            }
          }
        }
      }
    }
  }
LAB_013a23cc:
  iVar3 = FUN_00416db0(local_110,L"SetApplicationSizeType");
  if (iVar3 == 0) {
    if (local_1c == 0) {
      local_268 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
    }
    if (local_1c == 0) {
      uVar11 = 0;
      if (local_108 != 0) {
        uVar11 = *(uint *)(local_108 + -4);
      }
      if ((local_1e != uVar11) || (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
        local_1c = 3;
      }
    }
    if (local_1c == 0) {
      if (local_268 == 1) {
        DAT_01f39fb4 = 1;
        FUN_0080c0e0(*(undefined8 *)PTR_DAT_02004030);
        FUN_007fdf50(*(undefined8 *)PTR_DAT_02002da0,1);
      }
      else if ((local_268 == 0) && (*(char *)(*(longlong *)PTR_DAT_02004e40 + 0x4d2) != '\x01')) {
        DAT_01f39fb4 = 1;
        FUN_00800700(*(undefined8 *)PTR_DAT_02004e40,1);
        FUN_0080bf50(*(undefined8 *)PTR_DAT_02004030);
        FUN_007fdf50(*(undefined8 *)PTR_DAT_02002da0,0);
      }
      else if (local_268 == 2) {
        DAT_01f39fb4 = 0;
        FUN_00800700(*(undefined8 *)PTR_DAT_02004e40,1);
        FUN_0080abe0(*(undefined8 *)PTR_DAT_02004030);
        FUN_007fdf50(*(undefined8 *)PTR_DAT_02002da0,0);
        FUN_00442620(local_1fe,L"WinSupClass");
        lVar6 = thunk_FUN_0413ebab(local_1fe,0);
        if (lVar6 != 0) {
          thunk_FUN_041775c2(lVar6);
        }
      }
      else if (local_268 == 3) {
        DAT_01f39fb4 = 1;
        FUN_00800700(*(undefined8 *)PTR_DAT_02004e40,0);
        FUN_0064e1d0(*(undefined8 *)PTR_DAT_02004e40);
        FUN_0080ac80(*(undefined8 *)PTR_DAT_02004030);
        FUN_007fdf50(*(undefined8 *)PTR_DAT_02002da0,1);
      }
    }
  }
  else {
    iVar3 = FUN_00416db0(local_110,L"EnableDoubleClick");
    if (iVar3 == 0) {
      if (local_1c == 0) {
        local_268 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
      }
      *(bool *)(param_1 + 0x6f1) = local_268 == 1;
    }
    else {
      iVar3 = FUN_00416db0(local_110,L"SetEdisonTimer");
      if (iVar3 == 0) {
        if (local_1c == 0) {
          local_250 = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          local_260 = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          iVar3 = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
          local_258 = (longlong)iVar3;
        }
        if (local_1c == 0) {
          local_248 = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          local_22c = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
        }
        if (local_1c == 0) {
          if (local_250 == 0) {
            FUN_00f833a0(local_258,local_248,(longlong)local_22c,0);
          }
          else {
            FUN_00f83340(local_258,local_248,(longlong)local_22c,0,CONCAT44(uVar13,local_260));
          }
        }
      }
      else {
        iVar3 = FUN_00416db0(local_110,L"BringEdisonToTop");
        if (iVar3 == 0) {
          if (local_1c == 0) {
            iVar3 = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
            local_258 = (longlong)iVar3;
          }
          if (local_1c == 0) {
            thunk_FUN_039c4287(local_258);
          }
        }
        else {
          iVar3 = FUN_00416db0(local_110,L"BringTINAToTop");
          if (iVar3 != 0) {
            iVar3 = FUN_00416db0(local_110,L"EdisonReady");
            if (iVar3 == 0) {
              DAT_01f39fd8 = 1;
              FUN_013a51a0(DAT_02108348,param_1 + 0x6f8);
              FUN_00414b50(&local_118,L"[TINASetupComplete(0)]");
              FUN_013a40d0(param_1,&local_118);
            }
            else {
              iVar3 = FUN_00416db0(local_110,L"SaveLoad");
              if (iVar3 == 0) {
                if (local_1c == 0) {
                  FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                }
                if (local_1c == 0) {
                  local_264 = FUN_0139fab0(param_1,&local_108,&local_1e,&local_1c);
                }
                if (local_1c == 0) {
                  local_25c = FUN_0139fb50(param_1,&local_108,&local_1e,&local_1c);
                }
                if (local_1c == 0) {
                  FUN_0139f970(param_1,&local_118,&local_108,&local_1e,&local_1c);
                }
                if (local_1c == 0) {
                  uVar11 = 0;
                  if (local_108 != 0) {
                    uVar11 = *(uint *)(local_108 + -4);
                  }
                  if ((local_1e != uVar11) ||
                     (*(short *)(local_108 + -2 + (ulonglong)local_1e * 2) != 0x5d)) {
                    local_1c = 3;
                  }
                }
                if (local_1c == 0) {
                  if (local_264 == 0) {
                    FUN_0139e1e0(local_118);
                  }
                  else {
                    FUN_0139e320(local_118,local_25c,0,0);
                    FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_013a29dd:
  FUN_00414560(&local_228,4);
  FUN_00414560(&local_118,3);
  FUN_00414480(local_res10);
  return;
}

