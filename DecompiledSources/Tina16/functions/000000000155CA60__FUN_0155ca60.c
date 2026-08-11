/* Ghidra address: 0155ca60 */
/* Ghidra symbol: FUN_0155ca60 */


void FUN_0155ca60(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 local_1b08 [32];
  wchar_t *local_1ae8;
  wchar_t *local_1ae0;
  undefined8 local_1ad8;
  undefined *local_1ad0;
  undefined8 local_1ac8;
  int local_1aac;
  undefined8 local_1aa8;
  wchar_t *local_1aa0;
  undefined8 local_1a98;
  undefined8 local_1a90;
  undefined8 local_1a88;
  wchar_t *local_1a80;
  undefined8 local_1a78;
  undefined8 local_1a70;
  undefined8 local_1a68;
  undefined8 local_1a60;
  undefined8 local_1a58;
  undefined8 local_1a50;
  undefined8 local_1a48;
  undefined8 local_1a40;
  undefined8 local_1a38;
  undefined8 local_1a30;
  undefined8 local_1a28;
  undefined8 local_1a20;
  undefined8 local_1a18;
  wchar_t *local_1a10;
  undefined8 local_1a08;
  undefined8 local_1a00;
  undefined8 local_19f8;
  undefined8 local_19f0;
  undefined8 local_19e8;
  undefined8 local_19e0;
  undefined8 local_19d8;
  undefined8 local_19d0;
  undefined8 local_19c8;
  undefined8 local_19c0;
  undefined8 local_19b8;
  undefined8 local_19b0;
  undefined8 local_19a8;
  undefined8 local_19a0;
  undefined8 local_1998;
  undefined1 *local_1990;
  longlong local_1988;
  undefined1 local_1978 [24];
  longlong local_1960;
  longlong local_1958;
  int local_194c;
  int local_1948;
  undefined1 local_1943;
  undefined1 local_1942;
  char local_1941;
  undefined8 local_1940;
  undefined8 local_1930;
  undefined1 local_1926 [2050];
  undefined1 local_1124 [1564];
  undefined1 local_b08;
  undefined1 local_922 [2050];
  longlong local_120 [8];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  wchar_t local_b0 [2];
  wchar_t local_ac [10];
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 local_80;
  wchar_t *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  int local_4c;
  longlong local_48;
  undefined8 local_40;
  wchar_t *local_38;
  undefined8 local_30;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  int local_1c;
  
  local_b08 = 0;
  local_1b08[0] = 0;
  local_1990 = local_1b08;
  local_1aa8 = 0;
  local_1a98 = 0;
  local_1aa0 = (wchar_t *)0x0;
  local_1a90 = 0;
  local_1a88 = 0;
  local_1a80 = (wchar_t *)0x0;
  local_1a78 = 0;
  local_1a68 = 0;
  local_1a70 = 0;
  local_1a58 = 0;
  local_1a60 = 0;
  local_1a48 = 0;
  local_1a50 = 0;
  local_1a38 = 0;
  local_1a40 = 0;
  local_1a28 = 0;
  local_1a30 = 0;
  local_1a18 = 0;
  local_1a20 = 0;
  local_1a10 = (wchar_t *)0x0;
  local_1a08 = 0;
  local_1a00 = 0;
  local_19f8 = 0;
  local_19f0 = 0;
  local_19e8 = 0;
  local_19e0 = 0;
  local_19d8 = 0;
  local_19d0 = 0;
  local_19c8 = 0;
  local_19c0 = 0;
  local_19b8 = 0;
  local_19b0 = 0;
  local_19a8 = 0;
  local_19a0 = 0;
  local_1998 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = (wchar_t *)0x0;
  local_80 = 0;
  local_38 = (wchar_t *)0x0;
  local_88 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_40 = 0;
  *(undefined4 *)(param_1 + 2000) = 0;
  FUN_0156d0e0(param_1);
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  local_1aac = iVar5 + -1;
  local_4c = 0;
  if (-1 < local_1aac) {
    do {
      local_1aac = iVar5;
      local_120[0] = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),local_4c);
      FUN_00e0e8e0(*(undefined8 *)(local_120[0] + 0x828),&local_1c,&local_1942);
      if (local_1c == 0) {
        *(int *)(param_1 + 0x7d4) = *(int *)(param_1 + 0x7d4) + 1;
      }
      else {
        *(int *)(param_1 + 2000) = *(int *)(param_1 + 2000) + 1;
        (**(code **)(**(longlong **)(local_120[0] + 0x820) + 0x288))
                  (*(longlong **)(local_120[0] + 0x820),&local_c8);
        iVar5 = FUN_00416db0(local_c8,L"TinaChess");
        if (iVar5 == 0) {
          *(undefined1 *)(param_1 + 0x7b8) = 1;
        }
        FUN_00414b50(&local_78,L".hex");
        if (local_1c == 0x20) {
          FUN_00414b50(&local_78,L".s19");
        }
        if (*(int *)(param_1 + 2000) < 0x21) {
          *(int *)(param_1 + 0x848 + (longlong)(*(int *)(param_1 + 2000) + -1) * 4) = local_1c;
        }
        FUN_00414b50(&local_38,*(undefined8 *)(*(longlong *)(local_120[0] + 0x828) + 0x20));
        cVar4 = FUN_01609310(local_38);
        if (cVar4 != '\0') {
          *(undefined1 *)(param_1 + 0x802) = 1;
        }
        FUN_00442620(param_1 + 0xbc,local_38);
        local_194c = *(int *)(*(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8) + 0x100);
        if (local_194c == 2) {
          local_194c = 0;
        }
        local_1948 = local_194c;
        if (local_194c == 3) {
          local_194c = 1;
        }
        cVar4 = FUN_0160ead0(local_1c);
        if (cVar4 != '\0') {
          *(undefined4 *)(*(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8) + 0x100) =
               0xffffffff;
          local_194c = -1;
        }
        FUN_015f8b00(&local_1998,*(undefined8 *)(local_120[0] + 0x820));
        FUN_00414ad0(param_1 + 0x80,local_1998);
        FUN_00416ba0(&local_80,L"flash_rom_",*(undefined8 *)(param_1 + 0x80));
        if (local_1c == 0x20) {
          FUN_00414b50(&local_80,L"flash_rom");
        }
        local_1960 = *(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
        local_30 = *(undefined8 *)(local_1960 + 0x108);
        cVar4 = FUN_0160e240(local_1960,1,L"MQTT");
        if (cVar4 != '\0') {
          *(undefined1 *)(param_1 + 0x7b9) = 1;
        }
        cVar4 = FUN_0160ead0(local_1c);
        if (cVar4 == '\0') {
          piVar1 = (int *)(param_1 + 0x6c8 + (longlong)local_194c * 4);
          *piVar1 = *piVar1 + 1;
          if (local_194c == 1) {
            local_90 = *(longlong **)(local_1960 + 200);
            local_98 = *(longlong **)(local_1960 + 0xd0);
            iVar5 = (**(code **)(*local_90 + 0x28))(local_90);
            if ((iVar5 == 0) && (iVar5 = (**(code **)(*local_98 + 0x28))(local_98), iVar5 == 0)) {
              local_30 = 0xbff0000000000000;
            }
            iVar5 = (**(code **)(*local_90 + 0x28))(local_90);
            if (0 < iVar5) {
              local_1ae8 = L".lst";
              FUN_00416cd0(&local_19a0,3,*(undefined8 *)(param_1 + 0x790),local_80);
              FUN_015695b0(param_1,local_90,local_19a0,0);
              local_1ae8 = L".lst";
              FUN_00416cd0(param_1 + 0x7c0,3,*(undefined8 *)(param_1 + 0x790),local_80);
            }
            local_90 = *(longlong **)(local_1960 + 0xd0);
            if ((local_1948 == 3) &&
               ((local_1c != 8 ||
                (cVar4 = FUN_010b3ad0(*(undefined8 *)(local_1960 + 0x110),8), cVar4 == '\0')))) {
              local_1ae8 = L".elf";
              FUN_00416cd0(&local_19a8,3,*(undefined8 *)(param_1 + 0x790),local_80);
              FUN_010b12e0(*(undefined8 *)(local_1960 + 0x110),local_19a8);
            }
            iVar5 = (**(code **)(*local_90 + 0x28))(local_90);
            if (iVar5 < 1) {
              local_30 = 0xbff0000000000000;
            }
            else {
              local_1ae8 = local_78;
              FUN_00416cd0(&local_19b0,3,*(undefined8 *)(param_1 + 0x790),local_80);
              FUN_015695b0(param_1,local_90,local_19b0,0);
            }
            local_90 = *(longlong **)(local_1960 + 0xd0);
            iVar5 = (**(code **)(*local_90 + 0x28))(local_90);
            if (iVar5 < 1) {
              local_30 = 0xbff0000000000000;
            }
            else {
              local_1ae8 = (wchar_t *)local_80;
              local_1ae0 = local_78;
              FUN_00416cd0(&local_c8,4,*(undefined8 *)(param_1 + 0x7a8),&DAT_0155e19c);
              local_1ae8 = (wchar_t *)local_80;
              local_1ae0 = L".dat";
              FUN_00416cd0(&local_d0,4,*(undefined8 *)(param_1 + 0x7a8),&DAT_0155e19c);
              local_1ae8 = L".dat";
              FUN_00416cd0(&local_d8,3,*(undefined8 *)(param_1 + 0x790),local_80);
              FUN_015695b0(param_1,local_90,local_c8,0);
              FUN_00416ba0(&local_19b8,local_80,local_78);
              FUN_0155c800(param_1,local_19b8);
              FUN_00416ba0(&local_19c0,local_80,L".lst");
              FUN_0155c800(param_1,local_19c0);
              FUN_00416ba0(&local_19c8,local_80,L".dat");
              FUN_0155c800(param_1,local_19c8);
              FUN_00416ba0(&local_19d0,local_80,L".elf");
              FUN_0155c800(param_1,local_19d0);
              if (local_1c == 0x20) {
                local_1ae8 = L".dat";
                FUN_00416cd0(&local_d8,3,*(undefined8 *)(param_1 + 0x790),local_80);
                FUN_015fb4b0(local_c8,local_d8);
              }
              else {
                local_1930 = FUN_00442620(local_922,local_c8);
                FUN_00442620(local_1124,local_d0);
                local_1940 = FUN_00442620(local_1926,local_d8);
                _hex2vhd_new(local_1930,local_1940,param_1 + 0xbc);
                FUN_00416ba0(&local_19d8,*(undefined8 *)(param_1 + 0x7a8),L"\\flash_rom.dat");
                FUN_015f21c0(local_d8,local_19d8);
              }
            }
          }
          else if (local_194c == 0) {
            local_1958 = local_1960;
            local_1941 = FUN_01600550(local_1960);
            if ((local_1941 != '\0') && (local_1c == 8)) {
              uVar8 = FUN_00442620(param_1 + 0xbc,local_38);
              _CreateSimulatorObject(*(undefined8 *)(param_1 + 0xa20),local_1c,uVar8);
              local_1ae8 = local_b0;
              local_1ae0 = local_38;
              local_1ad8 = CONCAT44(local_1ad8._4_4_,local_1c);
              FUN_015fbde0(*(undefined8 *)(param_1 + 0xa20),local_20,local_24,local_b0 + 2);
              _FreeSimulatorObject(*(undefined8 *)(param_1 + 0xa20));
            }
            FUN_0155c980(local_1b08,local_1958,1);
            if (*(char *)(param_1 + 0xa40) == '\0') {
              local_90 = *(longlong **)(local_1960 + 0xd8);
            }
            else {
              local_90 = *(longlong **)(local_1960 + 0xe0);
            }
            iVar5 = (**(code **)(*local_90 + 0x28))(local_90);
            if (iVar5 < 1) {
              local_30 = 0xbff0000000000000;
            }
            else {
              local_1ae8 = L".asm";
              FUN_00416cd0(&local_19e0,3,*(undefined8 *)(param_1 + 0x790),local_80);
              FUN_015695b0(param_1,local_90,local_19e0,0);
              local_1ae8 = L".asm";
              FUN_00416cd0(param_1 + 0x7c0,3,*(undefined8 *)(param_1 + 0x790),local_80);
              FUN_00416ba0(&local_19e8,local_80,local_78);
              FUN_0155c800(param_1,local_19e8);
              FUN_00416ba0(&local_19f0,local_80,L".asm");
              FUN_0155c800(param_1,local_19f0);
              FUN_00416ba0(&local_19f8,local_80,L".lst");
              FUN_0155c800(param_1,local_19f8);
              FUN_00416ba0(&local_1a00,local_80,L".dat");
              FUN_0155c800(param_1,local_1a00);
              *(int *)(param_1 + 0x7d8) = *(int *)(param_1 + 0x7d8) + 1;
            }
          }
          else if (local_194c == 4) {
            local_1958 = local_1960;
            FUN_010b4440(*(undefined8 *)(local_1960 + 0x118),*(undefined8 *)(param_1 + 0x790),
                         local_80);
            *(undefined1 *)(param_1 + 0x801) = 0;
          }
        }
        if ((local_1c == 0x2000) || (local_1c == 0x4000)) {
          local_30 = *(undefined8 *)
                      (*(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8) + 0x108);
        }
        FUN_00414480(&local_40);
        FUN_00448450(&local_40,local_30,PTR_DAT_02004830);
        FUN_01d43440(&local_1a08,local_1948);
        local_1ae8 = *(wchar_t **)(param_1 + 0x80);
        local_1ae0 = L",";
        local_1ad8 = local_40;
        local_1ad0 = &DAT_0155e208;
        local_1ac8 = local_1a08;
        FUN_00416cd0(&local_c8,7,*(undefined8 *)(*(longlong *)(local_120[0] + 0x828) + 0x20),
                     &DAT_0155e208);
        FUN_00414480(&local_40);
        FUN_00414b50(&local_b8,*(undefined8 *)(*(longlong *)(local_120[0] + 0x828) + 0x20));
        cVar4 = FUN_01609a70(*(undefined8 *)(*(longlong *)(local_120[0] + 0x828) + 0x20));
        if (cVar4 == '\0') {
          cVar4 = FUN_016096e0(*(undefined8 *)(*(longlong *)(local_120[0] + 0x828) + 0x20));
          if (cVar4 != '\0') {
            uVar8 = FUN_00b89270();
            FUN_0041ddd0(&local_1a20,PTR_PTR_02002428);
            FUN_00b8e650(uVar8,&local_1a18,L"Attribs.sMCUC_Code_Name",local_1a20);
            iVar5 = FUN_00416db0(*(undefined8 *)
                                  (*(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8) + 0x58
                                  ),local_1a18);
            if (iVar5 == 0) {
              plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
              (**(code **)(*plVar2 + 0x10))(plVar2,0);
            }
            if (*(longlong *)(*(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8) + 0x58) ==
                0) {
              cVar4 = FUN_01609210(local_b8);
              if (cVar4 == '\0') {
                cVar4 = FUN_01609390(local_b8);
                if (cVar4 == '\0') {
                  cVar4 = FUN_01609310(local_b8);
                  if (cVar4 == '\0') {
                    cVar4 = FUN_01609410(local_b8);
                    if (cVar4 == '\0') {
                      cVar4 = FUN_01609490(local_b8);
                      if (cVar4 == '\0') {
                        cVar4 = FUN_016096e0(local_b8);
                        if (cVar4 != '\0') {
                          FUN_0160a130(&local_1a78);
                          plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
                          (**(code **)(*plVar2 + 0x10))(plVar2,local_1a78);
                        }
                      }
                      else {
                        FUN_00415dd0(&local_1a70,local_b8,0);
                        FUN_0160a830(&local_1a68,local_1a70);
                        plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
                        (**(code **)(*plVar2 + 0x10))(plVar2,local_1a68);
                      }
                    }
                    else {
                      FUN_00415dd0(&local_1a60,local_b8,0);
                      FUN_0160a7a0(&local_1a58,local_1a60);
                      plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
                      (**(code **)(*plVar2 + 0x10))(plVar2,local_1a58);
                    }
                  }
                  else {
                    FUN_00415dd0(&local_1a50,local_b8,0);
                    FUN_0160a9a0(&local_1a48,local_1a50);
                    plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
                    (**(code **)(*plVar2 + 0x10))(plVar2,local_1a48);
                  }
                }
                else {
                  FUN_00415dd0(&local_1a40,local_b8,0);
                  FUN_0160a710(&local_1a38,local_1a40);
                  plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
                  (**(code **)(*plVar2 + 0x10))(plVar2,local_1a38);
                }
              }
              else {
                FUN_00415dd0(&local_1a30,local_b8,0);
                FUN_0160a650(&local_1a28,local_1a30);
                plVar2 = *(longlong **)(*(longlong *)(local_120[0] + 0x820) + 0x1a8);
                (**(code **)(*plVar2 + 0x10))(plVar2,local_1a28);
              }
            }
            FUN_00414b50(&local_88,
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(local_120[0] + 0x820) + 0x1a8) + 0x58));
            iVar5 = FUN_004170c0(L"HSE_VALUE",local_88,1);
            local_1943 = 0 < iVar5;
            FUN_0160ad70(local_88,local_1978);
            FUN_01609dd0(&local_1a80,local_1978,local_1943);
            local_1ae8 = local_1a80;
            FUN_00416cd0(&local_c8,3,local_c8,&DAT_0155e208);
          }
        }
        else {
          uVar6 = FUN_01600580(local_1960);
          FUN_0043f750(&local_1a10,uVar6);
          local_1ae8 = local_1a10;
          FUN_00416cd0(&local_c8,3,local_c8,&DAT_0155e208);
        }
        (**(code **)(**(longlong **)(param_1 + 0x9a0) + 0x78))
                  (*(longlong **)(param_1 + 0x9a0),local_c8);
      }
      local_4c = local_4c + 1;
      local_1aac = local_1aac + -1;
      iVar5 = local_1aac;
    } while (local_1aac != 0);
  }
  local_1988 = *(longlong *)(param_1 + 0x8f0);
  iVar5 = *(int *)(local_1988 + 0x10);
  local_4c = 0;
  if (-1 < iVar5 + -1) {
    do {
      local_48 = FUN_01d347d0(local_1988,local_4c);
      cVar4 = FUN_01d3f210(*(undefined8 *)(local_48 + 0x40));
      if (cVar4 != '\0') {
        lVar3 = *(longlong *)(local_48 + 0x40);
        local_58 = *(longlong *)(lVar3 + 0x1a8);
        FUN_00414b50(&local_60,*(undefined8 *)(local_58 + 0x48));
        local_1ae8 = (wchar_t *)local_120;
        FUN_00e0f2a0(*(undefined8 *)(param_1 + 0x938),&local_e0,*(undefined8 *)(param_1 + 0xa20),
                     lVar3);
        FUN_0043e1a0(&local_1a88,local_e0);
        iVar7 = (**(code **)(**(longlong **)(param_1 + 0x30) + 0xb0))
                          (*(longlong **)(param_1 + 0x30),local_1a88);
        if (iVar7 < 0) {
          FUN_0043e1a0(&local_1a90,local_e0);
          (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))
                    (*(longlong **)(param_1 + 0x30),local_1a90);
          FUN_00e0fbb0(local_120[0],&local_1a98);
          uVar6 = FUN_00e0fa20(local_120[0],0);
          FUN_015fc500(&local_1aa0,uVar6);
          local_1ae8 = L".";
          local_1ae0 = local_1aa0;
          FUN_00416cd0(&local_80,4,*(undefined8 *)(param_1 + 0x790),local_1a98);
          FUN_0155c910(param_1,local_80);
          uVar8 = FUN_01771420(local_58,1);
          FUN_015695b0(param_1,uVar8,local_80,1);
          FUN_00416ba0(&local_1aa8,&LAB_0155e284,local_80);
          FUN_0155b290(param_1,local_1aa8,0);
        }
      }
      local_4c = local_4c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414560(&local_1aa8,7);
  FUN_004144d0(&local_1a70);
  FUN_00414480(&local_1a68);
  FUN_004144d0(&local_1a60);
  FUN_00414480(&local_1a58);
  FUN_004144d0(&local_1a50);
  FUN_00414480(&local_1a48);
  FUN_004144d0(&local_1a40);
  FUN_00414480(&local_1a38);
  FUN_004144d0(&local_1a30);
  FUN_00414560(&local_1a28,0x13);
  FUN_00414560(&local_e0,6);
  FUN_00414560(&local_88,6);
  FUN_00414560(&local_40,2);
  return;
}

