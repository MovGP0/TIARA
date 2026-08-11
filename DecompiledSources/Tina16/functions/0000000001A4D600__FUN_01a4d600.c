/* Ghidra address: 01a4d600 */
/* Ghidra symbol: FUN_01a4d600 */


void FUN_01a4d600(longlong param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_2d8 [32];
  undefined8 *local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined1 local_2a0;
  undefined1 local_298;
  undefined4 local_290;
  undefined8 local_288;
  int local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 *local_218;
  undefined8 local_210;
  undefined8 *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 *local_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1c0;
  undefined8 local_1b8;
  undefined1 *local_1b0;
  longlong local_198;
  longlong local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  undefined8 local_170;
  uint local_15c;
  int local_158;
  uint local_154;
  undefined4 local_148 [2];
  int local_140;
  int local_138;
  int local_134;
  int local_130;
  char local_12a;
  undefined1 local_129;
  undefined8 local_120;
  undefined8 local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  
  local_1b0 = auStack_2d8;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = 0;
  local_238 = 0;
  local_240 = 0;
  local_230 = 0;
  local_228 = 0;
  local_220 = 0;
  local_210 = 0;
  local_218 = (undefined8 *)0x0;
  local_208 = (undefined8 *)0x0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = (undefined8 *)0x0;
  local_1e8 = 0;
  local_1e0 = (undefined8 *)0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = (undefined8 *)0x0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_a8 = 0;
  local_b0 = 0;
  local_b8 = (undefined8 *)0x0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_f8 = 0;
  local_100 = 0;
  local_108 = 0;
  local_110 = 0;
  local_118 = 0;
  local_120 = 0;
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_68 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_50 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_40 = 0;
  FUN_00414480(&local_110);
  local_40 = FUN_00f30500(*(undefined8 *)(param_1 + 0x848),0,0);
  local_48 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00414480(&local_f0);
  FUN_00414480(&local_f8);
  local_158 = 0;
  if (*(int *)(param_1 + 0x944) != 1) {
    FUN_00414480(param_1 + 0x850);
    FUN_0040d200(param_1 + 0x960,0x1fd8,0);
    *(undefined4 *)(param_1 + 0x940) = 0;
    local_154 = 0;
    *(undefined2 *)(param_1 + 0x2904) = 0x4c;
    *(undefined1 *)(param_1 + 0x2928) = 1;
    *(undefined1 *)(param_1 + 0x292a) = 1;
  }
  if (local_40 == 0) {
    local_1c8 = *(undefined8 *)(param_1 + 0x848);
    local_1c0 = 0x11;
    FUN_00442f70(&local_1b8,L"ProcessCmd: Invalid JSON format: %s",&local_1c8,0);
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,local_1b8);
    FUN_004134c0(uVar6);
  }
  if (*(char *)(param_1 + 0x293d) != '\0') {
    local_58 = FUN_004b6930(&PTR_FUN_00478280,1);
    FUN_01480d50(local_40,*(undefined8 *)(param_1 + 0x918));
    uVar6 = FUN_019a4600();
    local_2b8 = *(undefined8 **)(param_1 + 11000);
    local_2b0 = CONCAT71(local_2b0._1_7_,*(undefined1 *)(param_1 + 0x293c));
    uVar6 = FUN_019bef90(&DAT_019bb828,1,uVar6,local_58);
    *(undefined8 *)(param_1 + 0x2ae0) = uVar6;
    uVar7 = FUN_019a4600();
    local_2b8 = *(undefined8 **)(param_1 + 0x890);
    local_2b0 = *(undefined8 *)(param_1 + 0x2960);
    local_2a8 = *(undefined8 *)(param_1 + 0x800);
    local_2a0 = 0;
    local_298 = *(undefined1 *)(param_1 + 0x293c);
    local_290 = 2;
    local_288 = *(undefined8 *)(param_1 + 0x2980);
    FUN_019bd5f0(uVar6,&local_80,uVar7,local_40);
    FUN_00410f20(*(undefined8 *)(param_1 + 0x2ae0));
    *(undefined8 *)(param_1 + 0x2ae0) = 0;
    uVar6 = FUN_007fc180(&PTR_FUN_01a29488,1,*(undefined8 *)PTR_DAT_02004030);
    *(undefined8 *)PTR_DAT_020025b8 = uVar6;
    FUN_00414ad0(*(longlong *)PTR_DAT_020025b8 + 0x750,*(undefined8 *)(param_1 + 0x890));
    *(undefined8 *)(*(longlong *)PTR_DAT_020025b8 + 0x758) = *(undefined8 *)(param_1 + 0x918);
    *(undefined8 *)(*(longlong *)PTR_DAT_020025b8 + 0x740) = *(undefined8 *)(param_1 + 11000);
    *(undefined1 *)(*(longlong *)PTR_DAT_020025b8 + 0x748) = *(undefined1 *)(param_1 + 0x293c);
    FUN_01a2a970(*(undefined8 *)PTR_DAT_020025b8,local_58);
    FUN_008059a0(*(undefined8 *)PTR_DAT_020025b8);
    FUN_01a2a990(*(undefined8 *)PTR_DAT_020025b8,local_80);
    *(undefined1 *)(param_1 + 0x811) = 0;
    FUN_00410f20(local_58);
    if (*(char *)(param_1 + 0x2ae8) == '\0') {
      FUN_00805200(param_1);
    }
    else {
      FUN_00805200(*(undefined8 *)PTR_DAT_020025b8);
    }
    goto LAB_01a4f38d;
  }
  local_178 = FUN_004113f0(local_40,&LAB_00f23b78);
  if (*(int *)(*(longlong *)(local_178 + 0x10) + 0x10) == 0) {
    FUN_00414ad0(param_1 + 0x850,L"<wrong request>");
  }
  iVar3 = *(int *)(*(longlong *)(local_178 + 0x10) + 0x10);
  local_26c = iVar3 + -1;
  local_130 = 0;
  if (-1 < local_26c) {
    do {
      local_26c = iVar3;
      local_188 = FUN_00f30ba0(local_178,local_130);
      (**(code **)(**(longlong **)(local_188 + 0x10) + 0x18))
                (*(longlong **)(local_188 + 0x10),&local_a8);
      iVar3 = FUN_00416db0(local_a8,L"intent");
      if (iVar3 == 0) {
        (**(code **)(**(longlong **)(local_188 + 0x18) + 0x18))
                  (*(longlong **)(local_188 + 0x18),&local_1d0);
        FUN_0043e1a0(&local_b8,local_1d0);
        iVar3 = FUN_00416db0(local_b8,L"redesign");
        if (((iVar3 == 0) || (iVar3 = FUN_00416db0(local_b8,L"design"), iVar3 == 0)) ||
           (iVar3 = FUN_00416db0(local_b8,L"load"), iVar3 == 0)) {
          FUN_00414ad0(param_1 + 0x850,L"RunDesign");
          local_154 = local_154 | 0x2000;
        }
        else {
          iVar3 = FUN_00416db0(local_b8,&DAT_01a4f59c);
          if (iVar3 == 0) {
            FUN_00414ad0(param_1 + 0x850,&DAT_01a4f5b0);
            local_154 = local_154 | 0x800;
          }
          else {
            iVar3 = FUN_00416db0(local_b8,L"calculate");
            if (iVar3 == 0) {
              FUN_00414ad0(param_1 + 0x850,L"RunCalculate");
              local_154 = local_154 | 0x1000;
            }
            else {
              iVar3 = FUN_00416db0(local_b8,L"show");
              if (iVar3 == 0) {
                local_154 = local_154 | 0x100;
              }
              else {
                iVar3 = FUN_00416db0(local_b8,L"list");
                if (iVar3 == 0) {
                  local_154 = local_154 | 0x400;
                }
              }
            }
          }
        }
      }
      else {
        iVar3 = FUN_00416db0(local_a8,L"error");
        if (iVar3 == 0) {
          (**(code **)(**(longlong **)(local_188 + 0x18) + 0x18))
                    (*(longlong **)(local_188 + 0x18),&local_1d8);
          local_158 = FUN_0043fc00(local_1d8);
        }
        else {
          iVar3 = FUN_00416db0(local_a8,L"error_msg");
          if (iVar3 == 0) {
            (**(code **)(**(longlong **)(local_188 + 0x18) + 0x18))
                      (*(longlong **)(local_188 + 0x18),&local_90);
          }
          else {
            iVar3 = FUN_00416db0(local_a8,L"file_object");
            if (iVar3 == 0) {
              local_154 = local_154 | 1;
              (**(code **)(**(longlong **)(local_188 + 0x18) + 0x18))
                        (*(longlong **)(local_188 + 0x18),&local_1e0);
              FUN_0043e1a0(&local_110,local_1e0);
              cVar1 = FUN_01a4d100(local_110);
              if (cVar1 == '\0') {
                (**(code **)(**(longlong **)(local_188 + 0x18) + 0x18))
                          (*(longlong **)(local_188 + 0x18),&local_1e8);
                FUN_0043e1a0(&local_110,local_1e8);
                FUN_01a3cc30(&local_1f0,local_110);
                FUN_00414b50(&local_110,local_1f0);
              }
            }
            else {
              iVar3 = FUN_00416db0(local_a8,L"object");
              if (iVar3 == 0) {
                local_154 = local_154 | 2;
                (**(code **)(**(longlong **)(local_188 + 0x18) + 0x18))
                          (*(longlong **)(local_188 + 0x18),&local_1f8);
                FUN_0043e1a0(&local_b8,local_1f8);
                FUN_00414b50(&local_d0,local_b8);
                iVar3 = FUN_004170c0(L"filter",local_b8,1);
                if (iVar3 < 1) {
                  iVar3 = FUN_00416db0(local_b8,L"circuit");
                  if ((iVar3 == 0) || (iVar3 = FUN_00416db0(local_b8,L"circuits"), iVar3 == 0)) {
                    FUN_00414ad0(param_1 + 0x850,L"RunDesign");
                    local_154 = local_154 | 4;
                  }
                  else {
                    iVar3 = FUN_00416db0(local_b8,L"oscillator");
                    if (iVar3 == 0) {
                      FUN_00414ad0(param_1 + 0x850,L"RunDesign");
                      local_154 = local_154 | 8;
                    }
                    else {
                      iVar3 = FUN_00416db0(local_b8,L"generator");
                      if (iVar3 == 0) {
                        FUN_00414ad0(param_1 + 0x850,L"RunDesign");
                        local_154 = local_154 | 0x20;
                      }
                      else {
                        iVar3 = FUN_004170c0(&DAT_01a4f76c,local_b8,1);
                        if ((iVar3 < 1) ||
                           (iVar3 = FUN_004170c0(L"converter",local_b8,1), iVar3 < 1)) {
                          FUN_00414ad0(param_1 + 0x850,L"RunDesign");
                          local_154 = local_154 | 0x40;
                        }
                        else {
                          FUN_00414ad0(param_1 + 0x850,L"RunDesign");
                          local_154 = local_154 | 0x80;
                        }
                      }
                    }
                  }
                }
                else {
                  FUN_00414ad0(param_1 + 0x850,L"FilterW");
                  uVar2 = FUN_01a4d450(auStack_2d8,local_b8);
                  *(undefined2 *)(param_1 + 0x2904) = uVar2;
                  *(undefined2 *)(param_1 + 0x2908) = 0x41;
                  *(undefined2 *)(param_1 + 0x2906) = 0x42;
                  *(undefined8 *)(param_1 + 0x9a8) = 0x3ff0000000000000;
                  local_154 = local_154 | 0x110;
                }
              }
              else {
                iVar3 = FUN_00416db0(local_a8,L"parameters");
                if (iVar3 == 0) {
                  uVar6 = *(undefined8 *)(local_188 + 0x18);
                  cVar1 = FUN_004113d0(uVar6,&LAB_00f256b8);
                  if (cVar1 != '\0') {
                    local_198 = FUN_004113f0(uVar6,&LAB_00f256b8);
                    (**(code **)(*local_30 + 0x90))(local_30);
                    (**(code **)(*local_38 + 0x90))(local_38);
                    iVar3 = *(int *)(*(longlong *)(local_198 + 0x10) + 0x10);
                    local_134 = 0;
                    if (-1 < iVar3 + -1) {
                      do {
                        local_170 = FUN_00f33510(local_198,local_134);
                        local_180 = FUN_004113f0(local_170,&LAB_00f23b78);
                        local_140 = 0;
                        iVar5 = *(int *)(*(longlong *)(local_180 + 0x10) + 0x10);
                        local_138 = 0;
                        if (-1 < iVar5 + -1) {
                          do {
                            local_190 = FUN_00f30ba0(local_180,local_138);
                            (**(code **)(**(longlong **)(local_190 + 0x10) + 0x18))
                                      (*(longlong **)(local_190 + 0x10),&local_b0);
                            (**(code **)(**(longlong **)(local_190 + 0x18) + 0x18))
                                      (*(longlong **)(local_190 + 0x18),&local_b8);
                            iVar4 = FUN_00416db0(local_b0,L"name");
                            if (iVar4 == 0) {
                              (**(code **)(**(longlong **)(local_190 + 0x18) + 0x18))
                                        (*(longlong **)(local_190 + 0x18),&local_f0);
                              local_140 = local_140 + 1;
                              cVar1 = FUN_0147d3c0(local_d0,local_f0);
                              if ((cVar1 == '\0') ||
                                 (cVar1 = FUN_0147d3c0(local_d0,L"output"), cVar1 == '\0')) {
                                cVar1 = FUN_0147d3c0(local_d0,local_f0);
                                if ((cVar1 != '\0') &&
                                   (cVar1 = FUN_0147d3c0(local_d0,L"input"), cVar1 != '\0')) {
                                  FUN_00416ba0(&local_f0,L"input ",local_f0);
                                }
                              }
                              else {
                                FUN_00416ba0(&local_f0,L"output ",local_f0);
                              }
                              (**(code **)(*local_30 + 0x78))(local_30,local_f0);
                            }
                            else {
                              iVar4 = FUN_00416db0(local_b0,L"value");
                              if (iVar4 == 0) {
                                (**(code **)(**(longlong **)(local_190 + 0x18) + 0x18))
                                          (*(longlong **)(local_190 + 0x18),&local_f8);
                                if (((local_154 & 0x1000) != 0) && (local_f8 == 0)) {
                                  FUN_00414b50(&local_f8,local_d0);
                                }
                                local_140 = local_140 + 1;
                                (**(code **)(*local_38 + 0x78))(local_38,local_f8);
                              }
                            }
                            iVar4 = FUN_00416db0(*(undefined8 *)(param_1 + 0x850),L"FilterW");
                            if (((iVar4 == 0) && (1 < local_140)) && (local_140 % 2 == 0)) {
                              iVar4 = FUN_00416db0(local_f0,L"type");
                              if (iVar4 == 0) {
                                FUN_0043e1a0(&local_200,local_f8);
                                uVar2 = FUN_01a4d450(auStack_2d8,local_200);
                                *(undefined2 *)(param_1 + 0x2904) = uVar2;
                              }
                              *(undefined2 *)(param_1 + 0x2908) = 0x41;
                              *(undefined2 *)(param_1 + 0x2906) = 0x42;
                              *(undefined8 *)(param_1 + 0x9a8) = 0x3ff0000000000000;
                              FUN_01a4b8e0(param_1,local_f0,local_f8);
                            }
                            local_138 = local_138 + 1;
                            iVar5 = iVar5 + -1;
                          } while (iVar5 != 0);
                        }
                        local_134 = local_134 + 1;
                        iVar3 = iVar3 + -1;
                      } while (iVar3 != 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
      local_130 = local_130 + 1;
      local_26c = local_26c + -1;
      iVar3 = local_26c;
    } while (local_26c != 0);
  }
  local_12a = '\0';
  if ((local_154 & 0x10) != 0) {
    local_154 = 0x110;
    FUN_00414480(&local_110);
  }
  if (((local_154 & 0x400) == 0) && ((local_154 & 1) != 0)) {
    iVar3 = FUN_00416db0(local_110,&DAT_01a4f878);
    if (iVar3 == 0) {
      FUN_01a4cfa0(param_1,L"I\'m sorry, I can\'t answer.");
      goto LAB_01a4f38d;
    }
    FUN_00441920(&local_208,local_110);
    local_12a = FUN_01a4c330(param_1,local_208,&local_88);
    if (local_12a != '\0') {
      FUN_00414b50(&local_118,local_88);
    }
    if (*(char *)(param_1 + 0x2b48) != '\0') {
      FUN_0043e1a0(&local_210,*(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x30));
      FUN_0043e1a0(&local_218,local_110);
      iVar3 = FUN_004170c0(local_210,local_218,1);
      if (iVar3 == 0) {
        FUN_019cdde0(*(longlong *)(param_1 + 0x2978),L"Failed (by file object)",local_110,
                     *(undefined8 *)(*(longlong *)(param_1 + 0x2978) + 0x30));
      }
    }
  }
  if (((local_154 & 0x400) != 0) && ((local_154 & 1) != 0)) {
    FUN_01a55fa0(param_1,local_110,local_68);
    if (*(char *)(param_1 + 0x2b48) == '\0') {
      FUN_01a56130(param_1,local_68);
    }
    else {
      FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
    }
  }
  if (*(longlong *)(param_1 + 0x850) == 0) {
    uVar6 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Error while processing Cmd");
    FUN_004134c0(uVar6);
  }
  else {
    local_129 = 0;
    if ((((local_154 & 0x2000) == 0) && ((local_154 & 0x100) == 0)) || (local_110 == 0)) {
      if ((local_154 & 0x80) == 0) {
        if ((local_154 & 0x1000) != 0) {
          iVar3 = (**(code **)(*local_38 + 0x28))(local_38);
          if ((iVar3 == 0) && (iVar3 = (**(code **)(*local_30 + 0x28))(local_30), iVar3 == 0)) {
            (**(code **)(*local_38 + 0x78))(local_38,local_d0);
            (**(code **)(*local_30 + 0x78))(local_30,0);
          }
          cVar1 = FUN_01a31b90(local_38);
          if (cVar1 == '\0') {
            FUN_01a4cfa0(param_1,L"Sorry, I can\'t help. Please rephrase your questions.");
          }
          else {
            if (local_158 == 0) {
              iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
              if (iVar3 < 1) {
                FUN_00414480(&local_f0);
              }
              else {
                (**(code **)(*local_30 + 0x18))(local_30,&local_f0,0);
              }
              if (*(char *)(param_1 + 0x2b48) == '\0') {
                local_15c = *(uint *)(*(longlong *)(param_1 + 0x2968) + 0x50) | 4;
                FUN_0043f750(&local_120,local_15c);
                FUN_00414480(&local_70);
                iVar3 = (**(code **)(*local_38 + 0x28))();
                local_130 = 0;
                if (-1 < iVar3 + -1) {
                  do {
                    (**(code **)(*local_38 + 0x18))(local_38,&local_d0,local_130);
                    (**(code **)(*local_30 + 0x18))(local_30,&local_f0,local_130);
                    iVar5 = (**(code **)(*local_30 + 0x28))(local_30);
                    if (iVar5 < 1) {
LAB_01a4ed19:
                      iVar5 = (**(code **)(*local_30 + 0x28))(local_30);
                      if ((0 < iVar5) && (local_f0 != (undefined8 *)0x0)) {
                        FUN_01a4cfa0(param_1,L"Invalid component name!");
                        goto LAB_01a4f38d;
                      }
                    }
                    else {
                      (**(code **)(*local_30 + 0x18))(local_30,&local_220,local_130);
                      cVar1 = FUN_01a49620(param_1,local_220,1);
                      if (cVar1 == '\0') goto LAB_01a4ed19;
                      (**(code **)(*local_30 + 0x18))(local_30,&local_f0,local_130);
                    }
                    FUN_0043e1a0(&local_228,local_d0);
                    local_2b8 = &local_100;
                    cVar1 = FUN_01a56220(param_1,local_228,local_f0,local_120);
                    if (cVar1 == '\0') {
                      FUN_00416ba0(&local_70,local_100,&DAT_01a4fc44);
                      break;
                    }
                    FUN_0043e1a0(&local_230,local_d0);
                    FUN_01a4d1c0(&local_78,local_230,local_f0);
                    iVar5 = (**(code **)(*local_38 + 0x28))(local_38);
                    if (iVar5 < 2) {
                      FUN_00414b50(&local_70,local_100);
                    }
                    else {
                      if (local_130 == 0) {
                        FUN_00414b50(&local_70,L"###We are processing multiple requests\r\n\r\n");
                      }
                      else {
                        FUN_00416ad0(&local_70,L"#####################################\r\n");
                      }
                      local_2b8 = (undefined8 *)&DAT_01a4fc44;
                      FUN_00416cd0(&local_240,3,L"###Processing request: %s\r\n",local_100);
                      local_1c8 = local_78;
                      local_1c0 = 0x11;
                      FUN_00442f70(&local_238,local_240,&local_1c8,0);
                      FUN_00416ad0(&local_70,local_238);
                    }
                    local_130 = local_130 + 1;
                    iVar3 = iVar3 + -1;
                  } while (iVar3 != 0);
                }
                FUN_01a4d050(param_1,local_70);
              }
              else {
                FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
              }
              goto code_r0x01a4f345;
            }
            FUN_01a4cfa0(param_1,local_90);
          }
LAB_01a4f38d:
          FUN_01a4f3e0(0,local_1b0);
          goto LAB_01a4f39e;
        }
        if ((local_154 & 0x2000) == 0) {
          if ((local_154 & 0x800) == 0) {
            if ((local_154 & 0x10) == 0) {
              if ((local_154 & 0x100) == 0) {
                iVar3 = FUN_00416db0(*(undefined8 *)(param_1 + 0x850),L"<wrong request>");
                if (iVar3 == 0) {
                  FUN_01a4b830(param_1,L"No task detected. Please specify a task!");
                }
              }
              else {
                FUN_01a4b830(param_1,L"As you wish!");
                FUN_0043e1a0(&local_268,local_d0);
                iVar3 = FUN_004170c0(L"waveform",local_268,1);
                if (0 < iVar3) {
                  FUN_01c75d80(*(undefined8 *)PTR_DAT_02004e40,0);
                }
              }
            }
            else {
              cVar1 = FUN_01a4d2a0(auStack_2d8,L"kind",L"active");
              if (cVar1 != '\0') {
                *(undefined1 *)(param_1 + 0x2928) = 1;
              }
              cVar1 = FUN_01a4d2a0(auStack_2d8,L"kind",L"passive");
              if (cVar1 != '\0') {
                *(undefined1 *)(param_1 + 0x2928) = 0;
              }
              if ((*(char *)(param_1 + 0x2b48) == '\0') &&
                 (cVar1 = FUN_01a527c0(param_1,local_148), cVar1 != '\0')) {
                FUN_00414b50(&local_108,L"The filter circuit loaded\r\n");
                FUN_01a4bf30(param_1,&local_258);
                FUN_00416ad0(&local_108,local_258);
                FUN_01a4c1d0(param_1,&local_260,local_148[0]);
                FUN_00416ad0(&local_108,local_260);
              }
              else if (*(char *)(param_1 + 0x2b48) == '\0') {
                FUN_00414b50(&local_108,L"Filter design is cancelled.");
              }
              else {
                FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
              }
              FUN_01a4b790(param_1,local_108);
              *(undefined4 *)(param_1 + 0x944) = 0;
            }
          }
          else {
            FUN_01a4b830(param_1,L"As you wish!");
            if (*(char *)(param_1 + 0x2b48) == '\0') {
              FUN_0043e1a0(&local_248,local_d0);
              iVar3 = FUN_004170c0(L"transient",local_248,1);
              if (iVar3 < 1) {
                FUN_0043e1a0(&local_250,local_d0);
                iVar3 = FUN_004170c0(&DAT_01a4fcf4,local_250,1);
                if (0 < iVar3) {
                  FUN_01c75a80(*(undefined8 *)PTR_DAT_02004e40,0);
                }
              }
              else {
                FUN_01c75d80(*(undefined8 *)PTR_DAT_02004e40,0);
              }
            }
            else {
              FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
            }
          }
        }
        else if ((local_f0 == (undefined8 *)0x0) && (local_f8 == 0)) {
          FUN_01a4cfa0(param_1,L"As you wish! Design Tool is loaded.");
          if (*(char *)(param_1 + 0x2b48) == '\0') {
            FUN_01a54f50(param_1,local_f0,local_f8,0);
          }
          else {
            FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
          }
        }
        else if (*(char *)(param_1 + 0x2b48) == '\0') {
          uVar6 = FUN_019a4600();
          local_2b8 = (undefined8 *)CONCAT71(local_2b8._1_7_,1);
          cVar1 = FUN_0149bdc0(uVar6,local_30,local_38,local_50);
          if (cVar1 == '\0') {
            FUN_01a4cfa0(param_1,L"This circuit does not contain a Design Tool specification!");
            goto LAB_01a4f38d;
          }
          iVar3 = (**(code **)(*local_50 + 0x28))(local_50);
          if (0 < iVar3) {
            FUN_01a4cd40(param_1,local_38,local_50);
          }
          uVar6 = FUN_019a4600();
          local_2b8 = (undefined8 *)((ulonglong)local_2b8 & 0xffffffffffffff00);
          FUN_0149bdc0(uVar6,local_30,local_38,local_50);
        }
        else {
          FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
        }
      }
      else if (*(char *)(param_1 + 0x2b48) == '\0') {
        FUN_01a4cfa0(param_1,L"Certainly! Select a device..");
        FUN_01a5b260(param_1,local_30,local_38);
      }
      else {
        FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
      }
    }
    else {
      if ((local_12a == '\0') && (local_110 != 0)) {
        FUN_01a4cfa0(param_1,L"I\'m sorry, I can\'t answer.");
        goto LAB_01a4f38d;
      }
      if (local_110 != 0) {
        local_2b8 = (undefined8 *)0x0;
        local_2b0 = 0;
        local_2a8 = CONCAT71(local_2a8._1_7_,1);
        FUN_01c681b0(*(undefined8 *)PTR_DAT_02004e40,local_118,0,0);
        iVar3 = (**(code **)(*local_30 + 0x28))(local_30);
        if (iVar3 < 1) {
          cVar1 = FUN_01a4ca60(param_1,local_118,L"clock gen");
          if ((cVar1 == '\0') && (iVar3 = (**(code **)(*local_30 + 0x28))(local_30), iVar3 != 0)) {
            FUN_01a4cfa0(param_1,L"Certainly! Circuit is loaded.");
          }
          else {
            FUN_01a4cfa0(param_1,L"Certainly! Circuit is loaded.");
            if (*(char *)(param_1 + 0x2b48) == '\0') {
              FUN_01a54f50(param_1,local_f0,local_f8,0);
            }
            else {
              FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
            }
          }
        }
        else {
          uVar6 = FUN_019a4600();
          cVar1 = FUN_014794c0(uVar6,local_f0,local_f8);
          if (cVar1 == '\0') {
            FUN_01a4cfa0(param_1,L"As you wish! Circuit is loaded.");
            if (*(char *)(param_1 + 0x2b48) == '\0') {
              FUN_01a54f50(param_1,local_f0,local_f8,0);
            }
            else {
              FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
            }
          }
          else {
            uVar6 = FUN_019a4600();
            local_2b8 = (undefined8 *)CONCAT71(local_2b8._1_7_,1);
            cVar1 = FUN_0149bdc0(uVar6,local_30,local_38,local_50);
            if (cVar1 == '\0') {
              FUN_01a4cfa0(param_1,L"This circuit does not contain a Design Tool specification!");
              goto LAB_01a4f38d;
            }
            FUN_01a4cd40(param_1,local_38,local_50);
            uVar6 = FUN_019a4600();
            local_2b8 = (undefined8 *)((ulonglong)local_2b8 & 0xffffffffffffff00);
            FUN_0149bdc0(uVar6,local_30,local_38,local_50);
            if (*(char *)(param_1 + 0x2b48) != '\0') {
              FUN_019ce060(*(undefined8 *)(param_1 + 0x2978),local_154);
            }
          }
        }
      }
    }
  }
code_r0x01a4f345:
  if (local_40 != 0) {
    FUN_00410f20(local_40);
  }
  FUN_00410f20(local_48);
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  FUN_00410f20(local_50);
LAB_01a4f39e:
  FUN_00414560(&local_268,0x14);
  FUN_00414480(&local_1b8);
  FUN_00414560(&local_120,0x17);
  return;
}

