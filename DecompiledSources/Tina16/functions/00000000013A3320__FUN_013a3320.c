/* Ghidra address: 013a3320 */
/* Ghidra symbol: FUN_013a3320 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013a3320(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined1 auStack_f8 [32];
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined1 local_c0;
  undefined1 local_b8;
  longlong *local_a8;
  longlong *local_a0;
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_a0 = param_2;
  if (((param_2 != (longlong *)0x0) &&
      (cVar2 = FUN_0198a580(param_2), plVar1 = local_a0, cVar2 == '\x04')) &&
     (local_a8 = local_a0, *(char *)((longlong)local_a0 + 0x3d3) != '\0')) {
    lVar4 = FUN_019a4600();
    FUN_0139a390(local_a8,*(undefined8 *)(lVar4 + 0x488));
    if (*(char *)((longlong)plVar1 + 0x3d1) == '\0') {
      sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
      if (((sVar3 == 0x3c) || (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x3d)) ||
         (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x65)) {
        _DAT_01f39fb8 = 0;
        local_94 = 0;
        do {
          if (((local_94 == 0) || (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x3d)) ||
             (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x65)) {
            if (*(char *)(param_1 + 0x88) == '\0') {
              FUN_0043f750(&local_80,(longlong)*(short *)((longlong)plVar1 + 0x24));
              local_d8 = &DAT_013a3d1c;
              FUN_00416cd0(param_1 + 0x40,3,L"[SetResults(0,",local_80);
              sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
              if ((sVar3 == 0x3d) || (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x65))
              {
                FUN_0043f750(&local_88,local_94);
                local_d8 = &LAB_013a3d70;
                FUN_00416cd0(param_1 + 0x40,3,*(undefined8 *)(param_1 + 0x40),local_88);
              }
              lVar4 = FUN_019a4600();
              iVar7 = FUN_017d1380(*(undefined8 *)(*(longlong *)(lVar4 + 0x488) + 0x4c0));
              if (5 < iVar7) {
                iVar7 = 5;
              }
              FUN_0043f750(&local_90,iVar7);
              FUN_00416ad0(param_1 + 0x40,local_90);
              local_98 = 1;
              if (0 < iVar7) {
                do {
                  lVar4 = FUN_019a4600();
                  iVar6 = local_98 + -1;
                  uVar9 = FUN_017d13a0(*(undefined8 *)(*(longlong *)(lVar4 + 0x488) + 0x4c0),iVar6);
                  FUN_013a31c0(auStack_f8,param_1 + 0x40,uVar9);
                  if (local_94 == 0) {
                    sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
                    if (sVar3 == 0x65) {
                      lVar4 = FUN_019a4600();
                      local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                      local_d0 = CONCAT44(local_d0._4_4_,2);
                      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
                      local_c0 = 1;
                      local_b8 = 1;
                      FUN_017d13d0(&local_38,*(undefined8 *)(lVar4 + 0x488),iVar6,local_a8);
                    }
                    else {
                      lVar4 = FUN_019a4600();
                      local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                      local_d0 = CONCAT44(local_d0._4_4_,1);
                      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,2);
                      local_c0 = 1;
                      local_b8 = 1;
                      FUN_017d13d0(&local_38,*(undefined8 *)(lVar4 + 0x488),iVar6,local_a8);
                    }
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_38);
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_30);
                  }
                  else {
                    sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
                    if (sVar3 == 0x65) {
                      lVar4 = FUN_019a4600();
                      local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                      local_d0 = CONCAT44(local_d0._4_4_,3);
                      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
                      local_c0 = 1;
                      local_b8 = 1;
                      FUN_017d13d0(&local_38,*(undefined8 *)(lVar4 + 0x488),iVar6,local_a8);
                    }
                    else {
                      lVar4 = FUN_019a4600();
                      local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                      local_d0 = CONCAT44(local_d0._4_4_,3);
                      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,4);
                      local_c0 = 1;
                      local_b8 = 1;
                      FUN_017d13d0(&local_38,*(undefined8 *)(lVar4 + 0x488),iVar6,local_a8);
                    }
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_38);
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_30);
                  }
                  local_98 = local_98 + 1;
                  iVar7 = iVar7 + -1;
                } while (iVar7 != 0);
              }
              FUN_00416ad0(param_1 + 0x40,&PTR_DAT_013a3d48);
              FUN_013a40d0(*(undefined8 *)(param_1 + 0x80),param_1 + 0x40);
              *(undefined1 *)(param_1 + 0x3f) = 1;
            }
            else {
              sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
              if (((sVar3 == 0x3d) || (sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1), sVar3 == 0x65)
                  ) && (*(char *)(*(longlong *)(param_1 + 0x80) + 0x6f2) != '\0')) {
                FUN_0043f750(&local_70,(longlong)*(short *)((longlong)plVar1 + 0x24));
                FUN_0043f750(&local_78,local_94);
                local_d8 = &DAT_013a3d1c;
                local_d0 = local_78;
                local_c8 = &DAT_013a3d5c;
                FUN_00416cd0(param_1 + 0x40,5,L"[SetResults(0,",local_70);
                lVar4 = FUN_019a4600();
                uVar9 = FUN_016ed7b0(*(undefined8 *)(lVar4 + 0x488),6);
                FUN_013a31c0(auStack_f8,param_1 + 0x40,uVar9);
                if (local_94 == 0) {
                  sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
                  if (sVar3 == 0x65) {
                    lVar4 = FUN_019a4600();
                    local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                    local_d0 = CONCAT44(local_d0._4_4_,2);
                    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
                    local_c0 = 1;
                    local_b8 = 1;
                    FUN_017d13d0(&local_68,*(undefined8 *)(lVar4 + 0x488),0,local_a8);
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_68);
                  }
                  else {
                    lVar4 = FUN_019a4600();
                    local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                    local_d0 = CONCAT44(local_d0._4_4_,1);
                    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,2);
                    local_c0 = 1;
                    local_b8 = 1;
                    FUN_017d13d0(&local_68,*(undefined8 *)(lVar4 + 0x488),0,local_a8);
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_68);
                  }
                }
                else {
                  sVar3 = (**(code **)(*plVar1 + 0xf8))(plVar1);
                  if (sVar3 == 0x65) {
                    lVar4 = FUN_019a4600();
                    local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                    local_d0 = CONCAT44(local_d0._4_4_,3);
                    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1);
                    local_c0 = 1;
                    local_b8 = 1;
                    FUN_017d13d0(&local_68,*(undefined8 *)(lVar4 + 0x488),0,local_a8);
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_68);
                  }
                  else {
                    lVar4 = FUN_019a4600();
                    local_d8 = (undefined *)CONCAT71(local_d8._1_7_,1);
                    local_d0 = CONCAT44(local_d0._4_4_,3);
                    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,4);
                    local_c0 = 1;
                    local_b8 = 1;
                    FUN_017d13d0(&local_68,*(undefined8 *)(lVar4 + 0x488),0,local_a8);
                    FUN_013a31c0(auStack_f8,param_1 + 0x40,local_68);
                  }
                }
                FUN_00416ad0(param_1 + 0x40,&PTR_DAT_013a3d48);
                FUN_013a40d0(*(undefined8 *)(param_1 + 0x80),param_1 + 0x40);
                *(undefined1 *)(param_1 + 0x3f) = 1;
              }
            }
          }
          local_94 = local_94 + 1;
        } while (local_94 != 2);
      }
    }
    else {
      FUN_0043f750(&local_40,(longlong)*(short *)((longlong)plVar1 + 0x24));
      local_d8 = &DAT_013a3d1c;
      FUN_00416cd0(param_1 + 0x40,3,L"[SetResults(0,",local_40);
      bVar8 = *(char *)((longlong)plVar1 + 0x3c4) == '\0';
      if (!bVar8) {
        FUN_0043f750(&local_48,*(undefined4 *)((longlong)plVar1 + 0x3bc));
        FUN_00416ad0(param_1 + 0x40,local_48);
      }
      if (*(char *)((longlong)plVar1 + 0x3c5) != '\0') {
        if (!bVar8) {
          FUN_00416ad0(param_1 + 0x40,&DAT_013a3d1c);
        }
        FUN_0043f750(&local_50,(int)plVar1[0x78]);
        FUN_00416ad0(param_1 + 0x40,local_50);
        bVar8 = false;
      }
      if ((char)plVar1[0x7a] != '\0') {
        if (!bVar8) {
          FUN_00416ad0(param_1 + 0x40,&DAT_013a3d1c);
        }
        local_68 = plVar1 + 0x79;
        local_60 = 3;
        FUN_00442f70(&local_58,L"%10.4e",&local_68,0);
        FUN_00414b50(param_1 + 0x48,local_58);
        iVar7 = 0;
        if (*(longlong *)(param_1 + 0x48) != 0) {
          iVar7 = *(int *)(*(longlong *)(param_1 + 0x48) + -4);
        }
        local_98 = 1;
        if (0 < iVar7) {
          do {
            lVar4 = (longlong)local_98;
            if (*(short *)(*(longlong *)(param_1 + 0x48) + -2 + lVar4 * 2) == 0x2c) {
              lVar5 = FUN_00414de0(param_1 + 0x48);
              *(undefined2 *)(lVar5 + -2 + lVar4 * 2) = 0x2e;
            }
            local_98 = local_98 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        FUN_00416ad0(param_1 + 0x40,*(undefined8 *)(param_1 + 0x48));
        bVar8 = false;
      }
      FUN_00416ad0(param_1 + 0x40,&PTR_DAT_013a3d48);
      if (!bVar8) {
        FUN_013a40d0(*(undefined8 *)(param_1 + 0x80),param_1 + 0x40);
        *(undefined1 *)(param_1 + 0x3f) = 1;
      }
    }
    *(undefined1 *)((longlong)plVar1 + 0x3d1) = 0;
  }
  FUN_00414560(&local_90,5);
  FUN_00414560(&local_58,4);
  return;
}

