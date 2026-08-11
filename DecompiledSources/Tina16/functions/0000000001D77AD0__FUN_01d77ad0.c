/* Ghidra address: 01d77ad0 */
/* Ghidra symbol: FUN_01d77ad0 */


/* WARNING: Removing unreachable block (ram,0x01d77f66) */

void FUN_01d77ad0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  byte bVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 auStack_318 [32];
  wchar_t *local_2f8;
  longlong local_2e0;
  wchar_t *local_2d8;
  uint local_2cc;
  undefined8 local_2c8;
  longlong local_2c0;
  longlong *local_2b8;
  undefined4 local_2ac;
  char local_2a5;
  int local_2a4;
  int local_2a0;
  char local_299;
  undefined4 *local_298;
  longlong local_290;
  undefined4 local_284;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248;
  char local_247;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_22e [23];
  undefined8 local_172 [14];
  uint local_100;
  int local_fc;
  char local_f7;
  undefined1 local_f6 [63];
  undefined1 local_b7 [31];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  byte local_79 [89];
  
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_260 = 0;
  local_258 = 0;
  local_250 = 0;
  local_240 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_2a5 = '\0';
  *param_1 = 0;
  local_298 = param_1;
  FUN_00416ba0(&local_240,*(undefined8 *)PTR_DAT_020049a0,L"\\CLCF.CAT");
  uVar6 = FUN_01729f90(&DAT_017288d0,1,local_240);
  *(undefined8 *)PTR_DAT_02004110 = uVar6;
  if (*(longlong *)PTR_DAT_02004110 == 0) {
    *local_298 = 1;
  }
  else {
    local_2e0 = FUN_0172a2b0(&DAT_01728b68,1,&DAT_01d78b40);
    local_79[0] = 0;
    do {
      FUN_0172a920(local_2e0,&local_f7,1);
      if (local_f7 != '\0') {
        local_248 = 1;
        local_247 = local_f7;
        FUN_00415110(local_79,&local_248,0x50);
      }
    } while ((local_f7 != '\0') && (local_79[0] != 0x50));
    iVar2 = FUN_00414f50(local_79,&DAT_01d78b44,(ulonglong)local_79[0] + 1);
    if (iVar2 == 0) {
      local_2d8 = (wchar_t *)FUN_00b0cc70(&PTR_FUN_00b0c098,1);
      FUN_0172a920(local_2e0,PTR_DAT_02002320,0xe);
      FUN_0172a920(local_2e0,&local_100,4);
      local_2a0 = FUN_0172a950(local_2e0);
      local_2a0 = local_2a0 + local_100 * 0x5f;
      FUN_0172a910(local_2e0,local_2a0);
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00409570((longlong)(int)(local_100 * 0xc));
      *(undefined8 *)PTR_DAT_02003110 = uVar6;
      if (*(longlong *)PTR_DAT_02003110 != 0) {
        FUN_0172a920(local_2e0,*(undefined8 *)PTR_DAT_02003110,(ulonglong)(local_100 * 4) * 3);
      }
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00409570((longlong)(int)(local_100 * 4));
      *(undefined8 *)PTR_DAT_020015b0 = uVar6;
      if (*(longlong *)PTR_DAT_020015b0 != 0) {
        FUN_0172a920(local_2e0,*(undefined8 *)PTR_DAT_020015b0,local_100 * 4);
      }
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00409570((longlong)(int)(local_100 * 5));
      *(undefined8 *)PTR_DAT_02003718 = uVar6;
      if (*(longlong *)PTR_DAT_02003718 != 0) {
        FUN_0172a920(local_2e0,*(undefined8 *)PTR_DAT_02003718,(ulonglong)local_100 * 5);
      }
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00409570((longlong)(int)(local_100 * 5));
      *(undefined8 *)PTR_DAT_020033c8 = uVar6;
      if (*(longlong *)PTR_DAT_020033c8 != 0) {
        FUN_0172a920(local_2e0,*(undefined8 *)PTR_DAT_020033c8,(ulonglong)local_100 * 5);
      }
      local_2a0 = FUN_0172a950(local_2e0);
      FUN_0172a920(local_2e0,&local_100,4);
      if (local_2a5 == '\0') {
        local_fc = 0;
        uVar10 = local_100;
        if (0 < (int)local_100) {
          do {
            FUN_0172a920(local_2e0,local_b7,0x1f);
            FUN_004169a0(&local_250,local_b7);
            local_2f8 = (wchar_t *)0x0;
            FUN_0172ba20(local_2e0,&local_88,local_250,*(undefined8 *)PTR_DAT_02001f18);
            iVar2 = FUN_004170c0(&DAT_01d78b84,local_88,1);
            if (0 < iVar2) {
              iVar2 = FUN_01d779a0(auStack_318,local_88);
              local_fc = local_fc + iVar2;
            }
            local_fc = local_fc + 1;
            uVar10 = uVar10 - 1;
          } while (uVar10 != 0);
        }
      }
      else {
        FUN_0172a910(local_2e0,local_2a0 + local_100 * 0x1f + 4);
        (**(code **)(*local_2b8 + 0x18))(local_2b8,&local_fc,4);
      }
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00409570((longlong)(int)(local_100 * 0x15));
      *(undefined8 *)PTR_DAT_02001338 = uVar6;
      if (*(longlong *)PTR_DAT_02001338 != 0) {
        FUN_0172a920(local_2e0,*(undefined8 *)PTR_DAT_02001338,local_100 * 0x15);
      }
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00b94dc0(0,&PTR_FUN_01d36a40,local_100,500);
      *(undefined8 *)PTR_DAT_02001b18 = uVar6;
      iVar2 = local_100 * 0x72;
      local_290 = FUN_004095c0((longlong)iVar2);
      FUN_0172a920(local_2e0,local_290,iVar2);
      local_2cc = 1;
      uVar10 = local_100;
      if (0 < (int)local_100) {
        do {
          puVar11 = (undefined8 *)(local_290 + -0x72 + (longlong)(int)local_2cc * 0x72);
          puVar12 = local_172;
          for (lVar8 = 0xe; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar11;
          uVar6 = FUN_01d3a360(0,&PTR_FUN_01d36a20,local_172);
          (**(code **)(**(longlong **)PTR_DAT_02001b18 + 0x20))
                    (*(longlong **)PTR_DAT_02001b18,uVar6);
          local_2cc = local_2cc + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      FUN_004095f0(local_290);
      FUN_0172a920(local_2e0,&local_100,4);
      uVar6 = FUN_00b95480(0,&PTR_FUN_01d36aa8,local_100,100);
      *(undefined8 *)PTR_DAT_020036c8 = uVar6;
      iVar2 = local_100 * 0xb8;
      local_280 = FUN_004095c0((longlong)iVar2);
      local_290 = FUN_004095c0((longlong)(int)(local_100 * 0xbc));
      FUN_0172a920(local_2e0,local_280,iVar2);
      FUN_01d3c8a0(local_280,local_290,local_100,1);
      local_2cc = 1;
      uVar10 = local_100;
      if (0 < (int)local_100) {
        do {
          puVar11 = (undefined8 *)(local_290 + -0xbc + (longlong)(int)local_2cc * 0xbc);
          puVar12 = local_22e;
          for (lVar8 = 0x17; lVar8 != 0; lVar8 = lVar8 + -1) {
            *puVar12 = *puVar11;
            puVar11 = puVar11 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined4 *)puVar12 = *(undefined4 *)puVar11;
          uVar6 = FUN_01d3a690(0,&PTR_FUN_01d36a88,local_22e);
          (**(code **)(**(longlong **)PTR_DAT_020036c8 + 0x20))
                    (*(longlong **)PTR_DAT_020036c8,uVar6);
          local_2cc = local_2cc + 1;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
      FUN_004095f0(local_290);
      FUN_004095f0(local_280);
      FUN_0172a910(local_2e0,local_2a0);
      FUN_0172a920(local_2e0,&local_100,4);
      local_238 = FUN_00409570((longlong)(local_fc * 0x3e));
      uVar6 = FUN_004b6930(&PTR_FUN_00478280,1);
      *(undefined8 *)PTR_DAT_02003c90 = uVar6;
      FUN_004b67b0(*(undefined8 *)PTR_DAT_02003c90,1);
      local_284 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0x80))
                            (*(longlong **)PTR_DAT_02003c90,&DAT_01d78b94,local_238);
      *(undefined4 *)PTR_DAT_02005158 = local_284;
      local_2c8 = FUN_00410e60(&PTR_FUN_00472dd0,1);
      FUN_004ae7e0(local_2c8,local_238);
      iVar2 = (**(code **)(**(longlong **)(local_2e0 + 0x30) + 0x28))();
      local_2cc = 0;
      if (-1 < iVar2 + -1) {
        do {
          (**(code **)(**(longlong **)(local_2e0 + 0x30) + 0x18))
                    (*(longlong **)(local_2e0 + 0x30),&local_90,local_2cc);
          local_238 = FUN_00409570((longlong)(local_fc * 0x3e));
          local_284 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0x80))
                                (*(longlong **)PTR_DAT_02003c90,local_90,local_238);
          FUN_004aec30(local_2c8,local_284,local_238);
          local_2cc = local_2cc + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      if (local_2a5 == '\0') {
        iVar2 = *(int *)(*(longlong *)PTR_DAT_02001b18 + 0x10);
        local_2cc = 1;
        if (0 < iVar2) {
          do {
            uVar9 = (ulonglong)local_2cc;
            local_2c0 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,uVar9);
            bVar7 = *(char *)(local_2c0 + 0x33) - 8;
            if (bVar7 < 8) {
              bVar13 = ((int)CONCAT71((int7)(uVar9 >> 8),1) << (bVar7 & 0x1f) & 0x21U) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              if (*(char *)(local_2c0 + 0x33) == '\b') {
                bVar7 = *(byte *)(local_2c0 + 0x3a);
                *(undefined1 *)(local_2c0 + 0x3a) = 0;
              }
              else {
                bVar7 = *(byte *)(local_2c0 + 0x4a);
                *(undefined1 *)(local_2c0 + 0x4a) = 0;
              }
              for (uVar10 = (uint)bVar7; uVar10 != 0; uVar10 = uVar10 - 1) {
                FUN_0172a920(local_2e0,local_b7,0x1f);
                FUN_004169a0(&local_258,local_b7);
                local_2f8 = local_2d8;
                FUN_0172ba20(local_2e0,&local_88,local_258,&DAT_01d78b40);
                iVar3 = FUN_004170c0(&DAT_01d78b84,local_88,1);
                local_299 = 0 < iVar3;
                local_2ac = 0;
                if ((bool)local_299) {
                  local_2ac = FUN_01d779a0(auStack_318,local_88);
                  iVar3 = (**(code **)(*(longlong *)local_2d8 + 0x28))();
                  local_2a4 = 0;
                  if (-1 < iVar3 + -1) {
                    do {
                      FUN_004b5390(local_2d8,&local_88,local_2a4);
                      FUN_004b3cf0(local_2d8,&local_260,local_2a4);
                      local_284 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0xb0))
                                            (*(longlong **)PTR_DAT_02003c90,local_260);
                      FUN_00416ad0(&local_88,&DAT_01d78b84);
                      while (iVar4 = FUN_004170c0(&DAT_01d78b84,local_88,1), 0 < iVar4) {
                        iVar4 = FUN_004170c0(&DAT_01d78b84,local_88,1);
                        FUN_00416dc0(&local_268,local_88,1,iVar4 + -1);
                        FUN_00442620(local_f6,local_268);
                        local_238 = FUN_004aeac0(local_2c8,local_284);
                        FUN_00416830(&local_270,local_f6,0x1f);
                        FUN_00442620(local_238,local_270);
                        FUN_00b909d0(&local_238,0x3e);
                        FUN_004aedb0(local_2c8,local_284,local_238);
                        uVar5 = FUN_004170c0(&DAT_01d78b84,local_88,1);
                        FUN_00416e20(&local_88,1,uVar5);
                        if (local_2a4 == 0) {
                          if (*(char *)(local_2c0 + 0x33) == '\b') {
                            *(char *)(local_2c0 + 0x3a) = *(char *)(local_2c0 + 0x3a) + '\x01';
                          }
                          else {
                            *(char *)(local_2c0 + 0x4a) = *(char *)(local_2c0 + 0x4a) + '\x01';
                          }
                        }
                      }
                      local_2a4 = local_2a4 + 1;
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                  }
                }
                else {
                  iVar3 = (**(code **)(*(longlong *)local_2d8 + 0x28))();
                  local_2a4 = 0;
                  if (-1 < iVar3 + -1) {
                    do {
                      FUN_004b5390(local_2d8,&local_88,local_2a4);
                      FUN_004b3cf0(local_2d8,&local_278,local_2a4);
                      local_284 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0xb0))
                                            (*(longlong **)PTR_DAT_02003c90,local_278);
                      local_238 = FUN_004aeac0(local_2c8,local_284);
                      FUN_00442620(local_238,local_88);
                      FUN_00b909d0(&local_238,0x3e);
                      FUN_004aedb0(local_2c8,local_284,local_238);
                      if (local_2a4 == 0) {
                        if (*(char *)(local_2c0 + 0x33) == '\b') {
                          *(char *)(local_2c0 + 0x3a) = *(char *)(local_2c0 + 0x3a) + '\x01';
                        }
                        else {
                          *(char *)(local_2c0 + 0x4a) = *(char *)(local_2c0 + 0x4a) + '\x01';
                        }
                      }
                      local_2a4 = local_2a4 + 1;
                      iVar3 = iVar3 + -1;
                    } while (iVar3 != 0);
                  }
                }
                if (local_299 != '\0') {
                  FUN_01d77a40(auStack_318,local_2cc + 1,local_2ac);
                }
              }
            }
            local_2cc = local_2cc + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        iVar2 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0x28))();
        local_2cc = 0;
        if (-1 < iVar2 + -1) {
          do {
            uVar6 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0x30))
                              (*(longlong **)PTR_DAT_02003c90,local_2cc);
            (**(code **)(*local_2b8 + 0x18))(local_2b8,uVar6,local_fc * 0x3e);
            local_2cc = local_2cc + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        iVar2 = *(int *)(*(longlong *)PTR_DAT_02001b18 + 0x10);
        local_2cc = 1;
        if (0 < iVar2) {
          do {
            uVar9 = (ulonglong)local_2cc;
            local_2c0 = FUN_01d3a410(*(undefined8 *)PTR_DAT_02001b18,uVar9);
            bVar7 = *(char *)(local_2c0 + 0x33) - 8;
            if (bVar7 < 8) {
              bVar13 = ((int)CONCAT71((int7)(uVar9 >> 8),1) << (bVar7 & 0x1f) & 0x21U) != 0;
            }
            else {
              bVar13 = false;
            }
            if (bVar13) {
              if (*(char *)(local_2c0 + 0x33) == '\b') {
                (**(code **)(*local_2b8 + 0x18))(local_2b8,local_2c0 + 0x36,4);
                (**(code **)(*local_2b8 + 0x18))(local_2b8,local_2c0 + 0x3a,1);
              }
              else {
                (**(code **)(*local_2b8 + 0x18))(local_2b8,local_2c0 + 0x46,4);
                (**(code **)(*local_2b8 + 0x18))(local_2b8,local_2c0 + 0x4a,1);
              }
            }
            local_2cc = local_2cc + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        FUN_00410f20(local_2b8);
      }
      uVar6 = FUN_00409570((longlong)((int)*(short *)PTR_DAT_02004a38 << 4));
      *(undefined8 *)PTR_DAT_02002880 = uVar6;
      iVar2 = (int)*(short *)PTR_DAT_02004a38;
      local_2cc = 1;
      if (0 < iVar2) {
        do {
          *(undefined1 *)(*(longlong *)PTR_DAT_02002880 + -0x10 + (longlong)(int)local_2cc * 0x10) =
               0;
          local_2cc = local_2cc + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      FUN_01d6b4f0();
      FUN_01d76b60();
      cVar1 = FUN_005d2620(L"SpiceModels.dll",1);
      if (cVar1 == '\0') {
        local_2f8 = L"SpiceModels.dll";
        FUN_00416cd0(&local_98,3,*(undefined8 *)PTR_DAT_020049a0,&DAT_01d78b84);
      }
      else {
        FUN_00414b50(&local_98,L"SpiceModels.dll");
      }
      DAT_02000030 = FUN_01d6c470(local_98);
      FUN_00410f20(local_2e0);
      FUN_00410f20(local_2d8);
      FUN_00410f20(local_2c8);
      uVar5 = (**(code **)(**(longlong **)PTR_DAT_02003c90 + 0xb0))
                        (*(longlong **)PTR_DAT_02003c90,&DAT_01d78b94);
      *(undefined4 *)PTR_DAT_02005158 = uVar5;
    }
    else {
      *local_298 = 2;
      FUN_00410f20(local_2e0);
    }
  }
  FUN_00414560(&local_278,6);
  FUN_00414480(&local_240);
  FUN_00414560(&local_98,3);
  return;
}

