/* Ghidra address: 01a62740 */
/* Ghidra symbol: FUN_01a62740 */


void FUN_01a62740(undefined8 param_1,longlong param_2,longlong param_3)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong local_res10;
  longlong local_res18;
  undefined1 auStack_1f8 [32];
  longlong local_1d8;
  undefined *local_1d0;
  undefined8 local_1c8;
  ulonglong local_1c0;
  ulonglong local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined1 local_1a0;
  uint local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined4 local_180;
  undefined4 local_178;
  undefined4 local_170;
  undefined1 local_168;
  undefined1 local_160;
  undefined4 local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  int local_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 *local_110;
  int local_108;
  undefined4 local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  longlong *local_e8;
  bool local_da;
  bool local_d9;
  wchar_t *local_d8;
  longlong *local_d0;
  int local_c8;
  undefined4 local_c4;
  int local_c0;
  undefined4 local_bc;
  int local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  longlong local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  char local_81;
  undefined2 *local_80;
  longlong local_78;
  longlong *local_70;
  int local_64;
  int local_60;
  undefined1 local_5c [4];
  undefined8 local_58;
  longlong local_50;
  longlong *local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  
  local_110 = auStack_1f8;
  local_128 = 0;
  local_120 = 0;
  local_118 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_58 = 0;
  local_70 = (longlong *)0x0;
  local_78 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  if (local_res18 != 0) {
    local_a0 = FUN_004170c0(L"tdl://",local_res10,1);
    local_a0 = local_a0 + 6;
    local_9c = 0;
    if (local_res10 != 0) {
      local_9c = *(undefined4 *)(local_res10 + -4);
    }
    FUN_00416dc0(&local_118,local_res10,local_a0,local_9c);
    FUN_005b86c0(&local_78,local_118,&DAT_01a63a90);
    local_a8 = local_78;
    if (local_78 != 0) {
      local_a8 = *(longlong *)(local_78 + -8);
    }
    local_12c = (int)local_a8 + -1;
    local_60 = 0;
    iVar5 = (int)local_a8;
    if (-1 < local_12c) {
      do {
        local_12c = iVar5;
        FUN_00414b50(&local_30,*(undefined8 *)(local_78 + (longlong)local_60 * 8));
        iVar5 = FUN_004170c0(L"component.",local_30,1);
        if (iVar5 < 1) {
          iVar5 = FUN_004170c0(&DAT_01a63b0c,local_30,1);
          if (iVar5 < 1) {
            iVar5 = FUN_004170c0(L"analysis.",local_30,1);
            if (iVar5 < 1) {
              iVar5 = FUN_004170c0(L"tools.",local_30,1);
              if (0 < iVar5) {
                local_100 = FUN_004170c0(L"tools.",local_30,1);
                local_100 = local_100 + 6;
                local_fc = 0;
                if (local_30 != 0) {
                  local_fc = *(undefined4 *)(local_30 + -4);
                }
                FUN_00416dc0(&local_38,local_30,local_100,local_fc);
                cVar1 = FUN_005b8460(&DAT_01a63cc4,local_38);
                if (cVar1 != '\0') {
                  local_108 = FUN_004170c0(&DAT_01a63cd8,local_38,1);
                  local_108 = local_108 + 3;
                  local_104 = 0;
                  if (local_38 != 0) {
                    local_104 = *(undefined4 *)(local_38 + -4);
                  }
                  FUN_00416dc0(&local_40,local_38,local_108,local_104);
                  FUN_01a3dba0(local_40);
                }
              }
            }
            else {
              local_f8 = FUN_004170c0(L"analysis.",local_30,1);
              local_f8 = local_f8 + 9;
              local_f4 = 0;
              if (local_30 != 0) {
                local_f4 = *(undefined4 *)(local_30 + -4);
              }
              FUN_00416dc0(&local_38,local_30,local_f8,local_f4);
              cVar1 = FUN_005b8460(&PTR_DAT_01a63b70,local_38);
              if (cVar1 == '\0') {
                cVar1 = FUN_005b8460(L"ac.transfer",local_38);
                if (cVar1 == '\0') {
                  cVar1 = FUN_005b8460(L"dc.transfer",local_38);
                  if (cVar1 == '\0') {
                    cVar1 = FUN_005b8460(L"dc.temperature",local_38);
                    if (cVar1 == '\0') {
                      cVar1 = FUN_005b8460(L"noise",local_38);
                      if (cVar1 == '\0') {
                        cVar1 = FUN_005b8460(L"ac.network",local_38);
                        if (cVar1 == '\0') {
                          cVar1 = FUN_005b8460(&DAT_01a63c3c,local_38);
                          if (cVar1 == '\0') {
                            cVar1 = FUN_005b8460(L"fourier.spectrum",local_38);
                            if (cVar1 != '\0') {
                              local_1d8 = CONCAT71(local_1d8._1_7_,1);
                              local_1d0 = (undefined *)0x0;
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
                              local_170 = 0x1c7;
                              local_168 = 0;
                              local_160 = 0;
                              local_158 = 0;
                              local_150 = 0;
                              local_148 = 0;
                              local_140 = 0;
                              cVar1 = FUN_01349310(0,2,local_res18,0);
                              if (cVar1 == '\0') {
                                local_1d8 = CONCAT71(local_1d8._1_7_,PTR_DAT_02004010[0x81a]);
                                local_1d0 = PTR_DAT_02004010 + 1000;
                                local_1c8 = 0;
                                local_1c0 = local_1c0 & 0xffffffff00000000;
                                local_1b8 = local_1b8 & 0xffffffffffffff00;
                                local_28 = FUN_0114dc00(0,*(undefined8 *)(local_res18 + 0xe00),
                                                        L"<EVERYCURVE>",PTR_DAT_02004010[0x819]);
                                FUN_013d2f60(*(undefined8 *)(local_res18 + 0xe00),0,0);
                                if (local_28 != 0) {
                                  if (PTR_DAT_02004010[0x415] == '\0') {
                                    local_1d8 = (ulonglong)local_1d8._1_7_ << 8;
                                    FUN_013d99f0(local_28,0x3f,PTR_DAT_02004010[0x413],
                                                 PTR_DAT_02004010[0x414]);
                                  }
                                  else {
                                    local_1d8 = (ulonglong)local_1d8._1_7_ << 8;
                                    FUN_013d99f0(local_28,PTR_DAT_02004010[0x415],
                                                 PTR_DAT_02004010[0x413],PTR_DAT_02004010[0x414]);
                                  }
                                }
                              }
                            }
                          }
                          else {
                            FUN_01603f40(local_res18,0,1);
                          }
                        }
                        else {
                          local_1d8 = 0;
                          cVar1 = FUN_01537800(0,local_res18,1,0);
                          if (cVar1 == '\0') {
                            sVar4 = FUN_01536240(PTR_DAT_02004010);
                            if (sVar4 == 0) {
                              local_1d8 = CONCAT71(local_1d8._1_7_,1);
                              FUN_013d6a00(*(undefined8 *)(local_res18 + 0xe00),0x67,0,0);
                            }
                            else {
                              uVar6 = FUN_01536240(PTR_DAT_02004010);
                              local_1d8 = CONCAT71(local_1d8._1_7_,1);
                              FUN_013d6a00(*(undefined8 *)(local_res18 + 0xe00),uVar6,0,0);
                            }
                          }
                        }
                      }
                      else {
                        cVar1 = FUN_014f6590(local_res18,1,0,0);
                        if (cVar1 == '\0') {
                          if (PTR_DAT_02004010[0x3ba] == '\0') {
                            FUN_013d8d70(*(undefined8 *)(local_res18 + 0xe00),0xf,1);
                          }
                          else {
                            FUN_013d8d70(*(undefined8 *)(local_res18 + 0xe00),
                                         PTR_DAT_02004010[0x3ba],1);
                          }
                        }
                      }
                    }
                    else {
                      cVar1 = FUN_01328250(local_res18,1,0,0);
                      if (cVar1 == '\0') {
                        FUN_013d45f0(*(undefined8 *)(local_res18 + 0xe00),1);
                      }
                    }
                  }
                  else {
                    local_1d8 = 0;
                    local_1d0 = (undefined *)0x0;
                    local_1c8 = 0;
                    local_1c0 = 0;
                    local_1b8 = 0;
                    cVar1 = FUN_01324990(0,local_res18,1,0);
                    if (cVar1 == '\0') {
                      FUN_013d3ef0(*(undefined8 *)(local_res18 + 0xe00),1);
                    }
                  }
                }
                else {
                  local_1d8 = 0;
                  local_1d0 = (undefined *)0x0;
                  local_1c8 = 0;
                  local_1c0 = 0;
                  local_1b8 = 0;
                  local_1b0 = 0;
                  local_1a8 = CONCAT44(local_1a8._4_4_,0x1c7);
                  local_1a0 = 0;
                  local_198 = local_198 & 0xffffff00;
                  cVar1 = FUN_01394040(0,local_res18,1,0);
                  if (cVar1 == '\0') {
                    if (*(short *)(PTR_DAT_02004010 + 0x39e) == 0) {
                      local_1d8 = CONCAT71(local_1d8._1_7_,1);
                      FUN_013d4bc0(*(undefined8 *)(local_res18 + 0xe00),0x1f,0,0);
                    }
                    else {
                      local_1d8 = CONCAT71(local_1d8._1_7_,1);
                      FUN_013d4bc0(*(undefined8 *)(local_res18 + 0xe00),
                                   *(undefined2 *)(PTR_DAT_02004010 + 0x39e),0,0);
                    }
                  }
                }
              }
              else {
                FUN_01a624c0(auStack_1f8,&PTR_DAT_01a63b70,local_38);
                local_1d8 = CONCAT71(local_1d8._1_7_,1);
                local_1d0 = (undefined *)0x0;
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
                local_170 = 0x1c7;
                local_168 = 0;
                local_160 = 0;
                local_158 = 0;
                local_150 = 0;
                local_148 = 0;
                local_140 = 0;
                cVar1 = FUN_01349310(0,0,local_res18,0);
                if (cVar1 == '\0') {
                  if (*(char *)(local_res18 + 0xe28) == '\0') {
                    FUN_013d2f60(*(undefined8 *)(local_res18 + 0xe00),0,0);
                  }
                  else {
                    FUN_013e5a30(*(undefined8 *)(local_res18 + 0xe00),
                                 *(undefined8 *)(local_res18 + 0xe10),0,0);
                  }
                  if ((*(longlong *)(local_res18 + 0xe00) != 0) &&
                     (*(longlong *)(*(longlong *)(local_res18 + 0xe00) + 8) != 0)) {
                    FUN_013c7550(*(undefined1 *)
                                  (*(longlong *)(*(longlong *)(local_res18 + 0xe00) + 8) + 0x434));
                  }
                }
              }
            }
          }
          else {
            local_c8 = FUN_004170c0(L"set:",local_30,1);
            local_c8 = local_c8 + 4;
            local_c4 = 0;
            if (local_30 != 0) {
              local_c4 = *(undefined4 *)(local_30 + -4);
            }
            FUN_00416dc0(&local_40,local_30,local_c8,local_c4);
            FUN_005b86c0(&local_70,local_40,&DAT_01a63afc);
            local_d0 = local_70;
            if (local_70 != (longlong *)0x0) {
              local_d0 = (longlong *)local_70[-1];
            }
            if ((longlong)local_d0 < 2) {
              local_da = false;
            }
            else {
              local_d8 = (wchar_t *)*local_70;
              if (local_d8 == L"TEMP") {
                local_d9 = true;
              }
              else if (local_d8 == (wchar_t *)0x0) {
                local_d9 = false;
              }
              else {
                iVar5 = FUN_0043e420(local_d8,L"TEMP");
                local_d9 = iVar5 == 0;
              }
              local_da = local_d9;
            }
            if (local_da == false) {
              local_e8 = local_70;
              if (local_70 != (longlong *)0x0) {
                local_e8 = (longlong *)local_70[-1];
              }
              if (1 < (longlong)local_e8) {
                local_48 = (longlong *)FUN_019ac5b0(local_res18,*local_70);
                if (local_48 == (longlong *)0x0) {
                  local_64 = (**(code **)(**(longlong **)(local_res18 + 0x438) + 0xb8))
                                       (*(longlong **)(local_res18 + 0x438),*local_70);
                  if (-1 < local_64) {
                    FUN_004b5450(*(undefined8 *)(local_res18 + 0x438),local_64,local_70[1]);
                  }
                }
                else {
                  local_f0 = local_70;
                  if (local_70 != (longlong *)0x0) {
                    local_f0 = (longlong *)local_70[-1];
                  }
                  if (local_f0 == (longlong *)0x3) {
                    local_64 = FUN_0043fc00(local_70[2]);
                    local_81 = (**(code **)(*local_48 + 0x2d0))(local_48,local_64,&local_80);
                    if (local_81 == '\x02') {
                      uVar3 = FUN_0043fc00(local_70[1]);
                      *local_80 = uVar3;
                    }
                    else if ((local_81 == '\x03') || (local_81 == '\x06')) {
                      uVar8 = FUN_00b8f030(local_70[1]);
                      FUN_01d3a010(local_80,local_81,uVar8);
                    }
                    else if (local_81 == '\b') {
                      uVar2 = FUN_0043fc00(local_70[1]);
                      *(undefined1 *)local_80 = uVar2;
                    }
                    uVar8 = FUN_0198d430(local_res18);
                    local_1d8 = CONCAT71(local_1d8._1_7_,PTR_DAT_02004010[0x814]);
                    local_1d0 = (undefined *)CONCAT71(local_1d0._1_7_,*PTR_DAT_020037e8);
                    local_1c8 = CONCAT71(local_1c8._1_7_,PTR_DAT_02004010[0x815]);
                    local_1c0 = CONCAT71(local_1c0._1_7_,*PTR_DAT_02005310);
                    FUN_017be0e0(local_48,uVar8,&local_94,PTR_DAT_02004010[0x816]);
                    plVar7 = (longlong *)FUN_0198d430(local_res18);
                    local_1d8 = CONCAT44(local_1d8._4_4_,local_88);
                    (**(code **)(*plVar7 + 0x30))(plVar7,local_94,local_90,local_8c);
                  }
                  else {
                    local_81 = (**(code **)(*local_48 + 0x2d0))(local_48,0,&local_80);
                    uVar8 = FUN_00b8f030(local_70[1]);
                    FUN_01d3a010(local_80,local_81,uVar8);
                    uVar8 = FUN_0198d430(local_res18);
                    local_1d8 = CONCAT71(local_1d8._1_7_,PTR_DAT_02004010[0x814]);
                    local_1d0 = (undefined *)CONCAT71(local_1d0._1_7_,*PTR_DAT_020037e8);
                    local_1c8 = CONCAT71(local_1c8._1_7_,PTR_DAT_02004010[0x815]);
                    local_1c0 = CONCAT71(local_1c0._1_7_,*PTR_DAT_02005310);
                    FUN_017be0e0(local_48,uVar8,&local_94,PTR_DAT_02004010[0x816]);
                    plVar7 = (longlong *)FUN_0198d430(local_res18);
                    local_1d8 = CONCAT44(local_1d8._4_4_,local_88);
                    (**(code **)(*plVar7 + 0x30))(plVar7,local_94,local_90,local_8c);
                  }
                }
              }
            }
            else {
              uVar8 = FUN_00b8f030(local_70[1]);
              *(undefined8 *)(PTR_DAT_02004010 + 200) = uVar8;
            }
            FUN_00419430(&local_70,&DAT_004210c0);
          }
        }
        else {
          local_b0 = FUN_004170c0(L"component.",local_30,1);
          local_b0 = local_b0 + 10;
          local_ac = 0;
          if (local_30 != 0) {
            local_ac = *(undefined4 *)(local_30 + -4);
          }
          FUN_00416dc0(&local_38,local_30,local_b0,local_ac);
          cVar1 = FUN_005b8460(L"config",local_38);
          if (cVar1 != '\0') {
            local_b8 = FUN_004170c0(L"config:",local_38,1);
            local_b8 = local_b8 + 7;
            local_b4 = 0;
            if (local_38 != 0) {
              local_b4 = *(undefined4 *)(local_38 + -4);
            }
            FUN_00416dc0(&local_40,local_38,local_b8,local_b4);
            iVar5 = FUN_004170c0(&DAT_01a63afc,local_40,1);
            FUN_00416dc0(&local_120,local_40,1,iVar5 + -1);
            local_48 = (longlong *)FUN_019ac5b0(local_res18,local_120);
            if (local_48 != (longlong *)0x0) {
              FUN_015fcb30(&local_58,local_5c);
              local_50 = FUN_0160d750(local_48,local_58);
              if (local_50 != 0) {
                local_c0 = FUN_004170c0(&DAT_01a63afc,local_40,1);
                local_c0 = local_c0 + 1;
                local_bc = 0;
                if (local_40 != 0) {
                  local_bc = *(undefined4 *)(local_40 + -4);
                }
                FUN_00416dc0(&local_128,local_40,local_c0,local_bc);
                FUN_017738b0(local_50,local_128);
                FUN_0199e310(local_res18,1,1,0);
              }
            }
          }
        }
        local_60 = local_60 + 1;
        local_12c = local_12c + -1;
        iVar5 = local_12c;
      } while (local_12c != 0);
    }
    FUN_00419430(&local_78,&DAT_004210c0);
  }
  FUN_00414560(&local_128,3);
  FUN_00417840(&local_78,&DAT_004210c0,2);
  FUN_00414480(&local_58);
  FUN_00414560(&local_40,3);
  FUN_00414480(&local_res10);
  return;
}

