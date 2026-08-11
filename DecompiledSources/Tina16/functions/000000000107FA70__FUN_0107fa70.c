/* Ghidra address: 0107fa70 */
/* Ghidra symbol: FUN_0107fa70 */


void FUN_0107fa70(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined1 auStack_1d8 [32];
  wchar_t *local_1b8;
  wchar_t *local_1b0;
  undefined8 local_1a8;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined1 local_160;
  undefined **local_158;
  undefined1 local_150;
  undefined4 local_148;
  undefined1 local_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  undefined8 local_d0;
  undefined1 local_c8 [72];
  wchar_t *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined1 local_2d;
  
  local_e0 = auStack_1d8;
  local_188 = 0;
  local_190 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_128 = 0;
  local_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_100 = 0;
  local_e8 = 0;
  local_f0 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_80 = (wchar_t *)0x0;
  FUN_00417580(local_c8,&DAT_010571b8);
  cVar3 = FUN_010b2eb0(*(undefined8 *)(param_1 + 0xac8));
  if (cVar3 == '\0') {
    iVar4 = FUN_010b2440(*(undefined8 *)(param_1 + 0xac8));
    if (iVar4 == 0) {
      uVar5 = FUN_00b89270();
      FUN_0041ddd0(&local_100,PTR_PTR_020010d8);
      FUN_00b8e650(uVar5,&local_f8,L"HDLStrings.Msg_NoObjectCode",local_100);
      FUN_016fd940(local_f8);
    }
    else {
      if (*(int *)(param_1 + 0xad8) == 2) {
        iVar4 = FUN_010b2440(*(undefined8 *)(param_1 + 0xac8));
        if (1 < iVar4) {
          uVar5 = FUN_00b89270();
          FUN_0041ddd0(&local_110,PTR_PTR_02002018);
          FUN_00b8e650(uVar5,&local_108,L"HDLStrings.Msg_OneObject8051",local_110);
          FUN_016fd940(local_108);
          goto code_r0x0108162a;
        }
      }
      FUN_0107a320(param_1);
      (**(code **)(**(longlong **)(param_1 + 0x7a8) + 0x278))(*(longlong **)(param_1 + 0x7a8));
      (**(code **)(**(longlong **)(param_1 + 0xb60) + 0x90))(*(longlong **)(param_1 + 0xb60));
      FUN_0107a710(param_1);
      local_1b8 = L"ArduinoCache";
      FUN_00416cd0(&local_78,3,*(undefined8 *)(param_1 + 0xaf8),&DAT_010817d4);
      uVar5 = FUN_00b89270();
      FUN_0041ddd0(&local_120,PTR_PTR_02005a70);
      FUN_00b8e650(uVar5,&local_118,L"HDLStrings.Msg_Compiling",local_120);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_118);
      FUN_0080cc70(*(undefined8 *)PTR_DAT_02004030);
      *(undefined1 *)(param_1 + 0x4d48) = 0;
      *(undefined1 *)(param_1 + 0x4d49) = 0;
      cVar3 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
      if (cVar3 == '\0') {
        cVar3 = FUN_010b3a50(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
        if (cVar3 == '\0') {
          cVar3 = FUN_00f81d30(*(undefined4 *)(param_1 + 0xad8));
          if (cVar3 == '\0') {
            cVar3 = FUN_010b3a90(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
            if (cVar3 == '\0') {
              cVar3 = FUN_010b3ab0(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8)
                                  );
              if (cVar3 == '\0') {
                cVar3 = FUN_010b3ac0(*(undefined8 *)(param_1 + 0xac8),
                                     *(undefined4 *)(param_1 + 0xad8));
                if (cVar3 == '\0') {
                  cVar3 = FUN_010b3ad0(*(undefined8 *)(param_1 + 0xac8),
                                       *(undefined4 *)(param_1 + 0xad8));
                  if (cVar3 == '\0') {
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".hex";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      FUN_004412f0(local_48);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".lst";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      FUN_004412f0(local_48);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".dbg";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      FUN_004412f0(local_48);
                    }
                    FUN_0107dce0(param_1);
                    if (*(char *)(param_1 + 0xb53) == '\0') {
                      *(undefined1 *)(param_1 + 0xb54) = 0;
                      FUN_0107ba70(param_1,0);
                    }
                    else {
                      *(undefined1 *)(param_1 + 0xb54) = 1;
                      FUN_0107ba70(param_1,0);
                      *(undefined1 *)(param_1 + 0xb54) = 0;
                      FUN_0107ba70(param_1,0);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".lst";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      (**(code **)(**(longlong **)(param_1 + 0x4d38) + 0xd8))
                                (*(longlong **)(param_1 + 0x4d38),local_48);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".hex";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                                (*(longlong **)(param_1 + 0x4d40),local_48);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".dbg";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x20);
                      (**(code **)(*plVar1 + 0xd8))(plVar1,local_48);
                    }
                  }
                  else {
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".hex";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      FUN_004412f0(local_48);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".cof";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      FUN_004412f0(local_48);
                    }
                    FUN_0107dce0(param_1);
                    FUN_0107ba70(param_1,0);
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".hex";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 != '\0') {
                      (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                                (*(longlong **)(param_1 + 0x4d40),local_48);
                    }
                    local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                    local_1b0 = L".cof";
                    FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                    cVar3 = FUN_00440a20(local_48,1);
                    if (cVar3 == '\0') {
                      uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
                      FUN_004134c0(uVar5);
                    }
                    else {
                      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
                      (**(code **)(*plVar1 + 8))(plVar1,0);
                      FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_48);
                    }
                  }
                }
                else {
                  local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                  local_1b0 = L".hex";
                  FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                  cVar3 = FUN_00440a20(local_48,1);
                  if (cVar3 != '\0') {
                    FUN_004412f0(local_48);
                  }
                  local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                  local_1b0 = L".elf";
                  FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                  cVar3 = FUN_00440a20(local_48,1);
                  if (cVar3 != '\0') {
                    FUN_004412f0(local_48);
                  }
                  FUN_0107db00(param_1);
                  local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                  local_1b0 = L".hex";
                  FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),L"\\Debug\\");
                  cVar3 = FUN_00440a20(local_48,1);
                  if (cVar3 != '\0') {
                    (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                              (*(longlong **)(param_1 + 0x4d40),local_48);
                  }
                  local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                  local_1b0 = L".elf";
                  FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),L"\\Debug\\");
                  cVar3 = FUN_00440a20(local_48,1);
                  if (cVar3 == '\0') {
                    uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
                    FUN_004134c0(uVar5);
                  }
                  else {
                    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
                    (**(code **)(*plVar1 + 8))(plVar1,0);
                    FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_48);
                  }
                }
              }
              else {
                local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                local_1b0 = L".hex";
                FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                cVar3 = FUN_00440a20(local_48,1);
                if (cVar3 != '\0') {
                  FUN_004412f0(local_48);
                }
                local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                local_1b0 = L".elf";
                FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
                cVar3 = FUN_00440a20(local_48,1);
                if (cVar3 != '\0') {
                  FUN_004412f0(local_48);
                }
                FUN_0107d920(param_1);
                local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                local_1b0 = L".hex";
                FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),L"\\Debug\\");
                cVar3 = FUN_00440a20(local_48,1);
                if (cVar3 != '\0') {
                  (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                            (*(longlong **)(param_1 + 0x4d40),local_48);
                }
                local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
                local_1b0 = L".elf";
                FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),L"\\Debug\\");
                cVar3 = FUN_00440a20(local_48,1);
                if (cVar3 == '\0') {
                  uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
                  FUN_004134c0(uVar5);
                }
                else {
                  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
                  (**(code **)(*plVar1 + 8))(plVar1,0);
                  FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_48);
                }
              }
            }
            else {
              local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
              local_1b0 = L".hex";
              FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
              cVar3 = FUN_00440a20(local_48,1);
              if (cVar3 != '\0') {
                FUN_004412f0(local_48);
              }
              local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
              local_1b0 = L".elf";
              FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
              cVar3 = FUN_00440a20(local_48,1);
              if (cVar3 != '\0') {
                FUN_004412f0(local_48);
              }
              local_1b8 = *(wchar_t **)(param_1 + 0x4cc0);
              FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
              cVar3 = FUN_00440a20(local_48,1);
              if (cVar3 != '\0') {
                FUN_004412f0(local_48);
              }
              FUN_004414c0(&local_180,*(undefined8 *)(param_1 + 0x4cc0),L".err");
              local_1b8 = (wchar_t *)local_180;
              FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
              cVar3 = FUN_00440a20(local_48,1);
              if (cVar3 != '\0') {
                FUN_004412f0(local_48);
              }
              FUN_0107d7a0(param_1);
              local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
              local_1b0 = L".hex";
              FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
              cVar3 = FUN_00440a20(local_48,1);
              if (cVar3 != '\0') {
                (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                          (*(longlong **)(param_1 + 0x4d40),local_48);
              }
              local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
              local_1b0 = L".elf";
              FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
              cVar3 = FUN_00440a20(local_48,1);
              if (cVar3 == '\0') {
                uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
                FUN_004134c0(uVar5);
              }
              else {
                plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
                (**(code **)(*plVar1 + 8))(plVar1,0);
                FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_48);
              }
            }
          }
          else {
            local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
            local_1b0 = L".hex";
            FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
            cVar3 = FUN_00440a20(local_48,1);
            if (cVar3 != '\0') {
              FUN_004412f0(local_48);
            }
            local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
            local_1b0 = L".elf";
            FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
            cVar3 = FUN_00440a20(local_48,1);
            if (cVar3 != '\0') {
              FUN_004412f0(local_48);
            }
            FUN_0107dce0(param_1);
            FUN_0107e580(param_1);
            FUN_0107ba70(param_1,0);
            local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
            local_1b0 = L".hex";
            FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
            cVar3 = FUN_00440a20(local_48,1);
            if (cVar3 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                        (*(longlong **)(param_1 + 0x4d40),local_48);
            }
            local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
            local_1b0 = L".elf";
            FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
            cVar3 = FUN_00440a20(local_48,1);
            if (cVar3 == '\0') {
              uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
              FUN_004134c0(uVar5);
            }
            else {
              plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
              (**(code **)(*plVar1 + 8))(plVar1,0);
              FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_48);
            }
          }
        }
        else {
          local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
          local_1b0 = L".hex";
          FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
          cVar3 = FUN_00440a20(local_48,1);
          if (cVar3 != '\0') {
            FUN_004412f0(local_48);
          }
          local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
          local_1b0 = L".elf";
          FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
          cVar3 = FUN_00440a20(local_48,1);
          if (cVar3 != '\0') {
            FUN_004412f0(local_48);
          }
          FUN_0108e410(param_1);
          local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
          local_1b0 = L".hex";
          FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),L"\\Debug\\");
          cVar3 = FUN_00440a20(local_48,1);
          if (cVar3 != '\0') {
            (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                      (*(longlong **)(param_1 + 0x4d40),local_48);
          }
          local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
          local_1b0 = L".elf";
          FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),L"\\Debug\\");
          cVar3 = FUN_00440a20(local_48,1);
          if (cVar3 == '\0') {
            uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
            FUN_004134c0(uVar5);
          }
          else {
            plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
            (**(code **)(*plVar1 + 8))(plVar1,0);
            FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_48);
          }
        }
      }
      else {
        local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
        local_1b0 = L".hex";
        FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
        cVar3 = FUN_00440a20(local_48,1);
        if (cVar3 != '\0') {
          FUN_004412f0(local_48);
        }
        local_1b8 = *(wchar_t **)(*(longlong *)(param_1 + 0xac8) + 0x10);
        local_1b0 = L".elf";
        FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0xb40),&DAT_010817d4);
        cVar3 = FUN_00440a20(local_48,1);
        if (cVar3 != '\0') {
          FUN_004412f0(local_48);
        }
        FUN_00414b50(&local_70,L"Debug");
        FUN_00416ba0(&local_128,*(undefined8 *)(param_1 + 0xb40),L"\\%s\\");
        local_138 = local_70;
        local_130 = 0x11;
        FUN_00442f70(&local_60,local_128,&local_138,0);
        local_2d = 0;
        lVar2 = *(longlong *)(param_1 + 0xac8);
        local_1b8 = L".elf";
        FUN_00416cd0(&local_50,3,local_60,*(undefined8 *)(lVar2 + 0x10));
        local_1b8 = *(wchar_t **)(param_1 + 0xb40);
        FUN_01063db0(*(undefined8 *)(param_1 + 0xbf0),*(undefined4 *)(param_1 + 0xaa0),lVar2,
                     *(undefined8 *)(param_1 + 0xad0));
        cVar3 = FUN_010637f0(*(undefined8 *)(param_1 + 0xbf0),*(undefined4 *)(param_1 + 0xaa0),
                             local_c8);
        if (cVar3 == '\0') {
          uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"GetBoard");
          FUN_004134c0(uVar5);
        }
        cVar3 = FUN_01064650(*(undefined8 *)(param_1 + 0xbf0),local_c8,
                             *(undefined4 *)(param_1 + 0xaac));
        if (cVar3 == '\0') {
          FUN_010629c0(*(undefined8 *)(param_1 + 0xbf0),0);
        }
        else {
          FUN_00414b50(&local_68,L"c:\\ProgramData\\DesignSoft\\Arduino-portable\\");
          FUN_010642b0(&local_58,local_c8);
          FUN_00452e30(local_40,L"TEMP");
          local_168 = local_40[0];
          local_160 = 0x11;
          local_158 = &PTR_DAT_01081968;
          local_150 = 0x11;
          local_148 = FUN_00409e80(100);
          local_140 = 0;
          FUN_00442f70(&local_78,L"%s\\%s_%d",&local_168,2);
          FUN_00416ba0(&local_170,local_78,L"\\%s\\");
          local_138 = local_58;
          local_130 = 0x11;
          FUN_00442f70(&local_80,local_170,&local_138,0);
          local_1b8 = *(wchar_t **)(param_1 + 0xb40);
          local_1b0 = local_80;
          local_1a8 = 0;
          FUN_01064d30(*(undefined8 *)(param_1 + 0xbf0),local_c8,*(undefined8 *)(param_1 + 0xac8),
                       local_68);
          local_d0 = FUN_004b6930(&PTR_FUN_00478280,1);
          FUN_00416ba0(&local_178,local_80,L"sketches");
          FUN_01059650(local_178,L".elf",local_d0);
          FUN_01059420(&local_50,local_d0);
          FUN_010598e0(&local_70,local_50);
          FUN_00410f20(local_d0);
          local_2d = 1;
        }
        FUN_004414c0(&local_48,local_50,L".hex");
        cVar3 = FUN_00440a20(local_48,1);
        if (cVar3 != '\0') {
          (**(code **)(**(longlong **)(param_1 + 0x4d40) + 0xd8))
                    (*(longlong **)(param_1 + 0x4d40),local_48);
        }
        cVar3 = FUN_00440a20(local_50,1);
        if (cVar3 == '\0') {
          uVar5 = FUN_0044d490(&PTR_FUN_015ef458,1,L"Linker error");
          FUN_004134c0(uVar5);
        }
        else {
          local_1b8 = (wchar_t *)local_70;
          local_1b0 = (wchar_t *)CONCAT71(local_1b0._1_7_,local_2d);
          FUN_0108d7b0(param_1,local_50,*(undefined8 *)(param_1 + 0xb90),
                       *(undefined8 *)(param_1 + 0xac8));
          plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xac8) + 0x30);
          (**(code **)(*plVar1 + 8))(plVar1,0);
          FUN_004b9f40(*(undefined8 *)(*(longlong *)(param_1 + 0xac8) + 0x30),local_50);
        }
      }
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
      (**(code **)(*plVar1 + 0x90))(plVar1);
      uVar5 = FUN_00b89270();
      FUN_0041ddd0(&local_190,PTR_PTR_020020c8);
      FUN_00b8e650(uVar5,&local_188,L"HDLStrings.Msg_CompileSuccessful",local_190);
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7a8) + 0x4a0);
      (**(code **)(*plVar1 + 0x78))(plVar1,local_188);
      *(undefined1 *)(param_1 + 0xb51) = 0;
      FUN_010b2840(*(undefined8 *)(param_1 + 0xac8),0);
    }
  }
  else {
    uVar5 = FUN_00b89270();
    FUN_0041ddd0(&local_f0,PTR_PTR_02003db0);
    FUN_00b8e650(uVar5,&local_e8,L"HDLStrings.Msg_EmptyProject",local_f0);
    FUN_016fd940(local_e8);
  }
code_r0x0108162a:
  FUN_00414560(&local_190,5);
  FUN_00414560(&local_128,9);
  FUN_00417740(local_c8,&DAT_010571b8);
  FUN_00414560(&local_80,9);
  return;
}

