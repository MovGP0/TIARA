/* Ghidra address: 00ab9c50 */
/* Ghidra symbol: FUN_00ab9c50 */


void FUN_00ab9c50(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  longlong *plVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  longlong local_b0;
  undefined1 *local_a8;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  bool local_8d;
  int local_8c;
  longlong local_88;
  char local_7d;
  int local_7c;
  int local_78;
  int local_74;
  undefined8 local_70 [2];
  longlong local_60;
  undefined1 local_58 [16];
  undefined1 *local_48;
  longlong *local_40;
  longlong *local_38;
  int local_2c [3];
  
  local_70[0] = 0;
  local_60 = 0;
  local_b8 = param_2;
  local_b0 = FUN_00ac5680(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xf0),param_2);
  local_a8 = *(undefined1 **)(local_b0 + 8);
  local_a0 = *(int *)(local_b0 + 0x20);
  local_9c = *(int *)(local_b0 + 0x24);
  local_8d = true;
  local_b4 = *(int *)(param_1 + 0x30) + *(int *)(local_b0 + 0x34);
  local_94 = *(int *)(param_1 + 0x90) + *(int *)(local_b0 + 0x28);
  *(int *)(local_b0 + 0x34) = *(int *)(param_1 + 0x30) - *(int *)(local_b0 + 0x18);
  *(int *)(local_b0 + 0x2c) = local_94;
  local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,*(undefined4 *)(local_b0 + 0x18));
  FUN_00ab99f0(param_1,*(undefined4 *)(local_b0 + 0x34),*(undefined4 *)(local_b0 + 0x2c),
               *(undefined4 *)(local_b0 + 0x30));
  for (; 0 < local_a0; local_a0 = local_a0 - local_98) {
    local_98 = 1;
    local_74 = FUN_00a949e0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x118),
                            ((longlong)local_a8 -
                            *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2,
                            *(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x6c),&local_48);
    local_74 = local_74 + -1;
    iVar4 = FUN_00ac50d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xf8),
                         ((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8))
                         / 2,&local_38);
    iVar4 = iVar4 + -1;
    local_7c = FUN_00ac50d0(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x100),
                            ((longlong)local_a8 -
                            *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2,&local_40);
    local_7c = local_7c + -1;
    if ((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) {
      iVar14 = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10);
      local_8c = 0;
      if (-1 < iVar14 + -1) {
        do {
          local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
          if (((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2 ==
              (longlong)*(int *)(local_88 + 8)) {
            iVar5 = FUN_00a94860(local_48,param_1 + 0x3c);
            *(int *)(local_88 + 0x18) =
                 ((*(int *)(param_1 + 0x30) - iVar5) - local_9c) + *(int *)(param_1 + 0x3c) + 1;
            *(int *)(local_88 + 0x14) = local_94;
            *(int *)(local_88 + 0x20) =
                 (*(int *)(param_1 + 0x30) - local_9c) + *(int *)(param_1 + 0x3c);
          }
          else if ((((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2
                    == (longlong)*(int *)(local_88 + 0xc)) && (*(int *)(local_88 + 0x1c) == 0)) {
            *(int *)(local_88 + 0x1c) = local_94;
          }
          else {
            lVar1 = (longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8);
            if (((longlong)*(int *)(local_88 + 8) < lVar1 / 2) &&
               (lVar1 / 2 < (longlong)*(int *)(local_88 + 0xc))) {
              iVar5 = *(int *)(local_88 + 0x18);
              iVar11 = FUN_00a94860(local_48,param_1 + 0x3c);
              iVar11 = ((*(int *)(param_1 + 0x30) - iVar11) - local_9c) + *(int *)(param_1 + 0x3c) +
                       1;
              if (iVar5 < iVar11) {
                iVar11 = iVar5;
              }
              *(int *)(local_88 + 0x18) = iVar11;
              iVar11 = (*(int *)(param_1 + 0x30) - local_9c) + *(int *)(param_1 + 0x3c);
              iVar5 = *(int *)(local_88 + 0x20);
              if (*(int *)(local_88 + 0x20) <= iVar11) {
                iVar5 = iVar11;
              }
              *(int *)(local_88 + 0x20) = iVar5;
            }
          }
          local_8c = local_8c + 1;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
    }
    FUN_00a4df80(*(undefined8 *)(local_48 + 0x38),*(undefined8 *)(param_1 + 0x78));
    uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28);
    uVar7 = *(uint *)(*(longlong *)(local_48 + 0x38) + 0x38);
    if (uVar6 != 0x1fffffff) {
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x90) & 1) != 0) &&
         (cVar3 = FUN_00781870(), cVar3 != '\0')) {
        uVar9 = FUN_00781840();
        uVar6 = FUN_007793c0(uVar9,uVar6);
      }
      uVar6 = FUN_005fbf20(uVar6);
    }
    if (uVar7 != 0x1fffffff) {
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x90) & 1) != 0) &&
         (cVar3 = FUN_00781870(), cVar3 != '\0')) {
        uVar9 = FUN_00781840();
        uVar7 = FUN_007793c0(uVar9,uVar7);
      }
      uVar7 = FUN_005fbf20(uVar7);
    }
    FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70),uVar6);
    if (iVar4 == -1) {
      cVar3 = FUN_004113d0(local_38,&PTR_FUN_00a83768);
      if (cVar3 == '\0') {
        cVar3 = FUN_004113d0(local_38,&PTR_FUN_00a82060);
        if (cVar3 != '\0') {
          *(undefined1 *)(local_38 + 0x33) = 1;
        }
        if (*(byte *)(local_38 + 0xc) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)local_38 >> 8),1) <<
                    (*(byte *)(local_38 + 0xc) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 8) + *(int *)((longlong)local_38 + 100);
          local_78 = (int)local_38[0x18];
          if (((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) &&
             (local_8c = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10) + -1, -1 < local_8c)) {
            do {
              local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
              if ((((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2 ==
                   (longlong)*(int *)(local_88 + 8)) &&
                 (*(int *)(local_88 + 0xc) == *(int *)(local_88 + 8) + 1)) {
                FUN_004ae870(*(undefined8 *)(local_b0 + 0x40),local_8c);
              }
              local_8c = local_8c + -1;
            } while (local_8c != -1);
          }
        }
        else {
          iVar4 = local_94 + *(int *)((longlong)local_38 + 0xac);
          bVar2 = *(byte *)(local_38 + 0x15);
          if (bVar2 < 2) {
            local_78 = (*(int *)(param_1 + 0x30) - *(int *)(local_b0 + 0x18)) +
                       *(int *)((longlong)local_38 + 0xb4);
          }
          else if (bVar2 == 2) {
            iVar14 = (**(code **)(*local_38 + 0xc0))(local_38);
            local_78 = (*(int *)(param_1 + 0x30) - *(int *)(local_48 + 0x4c) / 2) -
                       ((iVar14 - *(int *)((longlong)local_38 + 0xb4)) + (int)local_38[0x17]) / 2;
          }
          else if ((byte)(bVar2 - 3) < 2) {
            iVar14 = (**(code **)(*local_38 + 0xc0))(local_38);
            local_78 = ((*(int *)(param_1 + 0x30) - local_9c) - iVar14) - (int)local_38[0x17];
          }
          else {
            local_78 = 0;
          }
          if ((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) {
            iVar14 = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10);
            local_8c = 0;
            if (-1 < iVar14 + -1) {
              do {
                local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
                if (((longlong)*(int *)(local_88 + 8) <=
                     ((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2)
                   && (((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) /
                       2 <= (longlong)*(int *)(local_88 + 0xc))) {
                  lVar1 = (longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8);
                  if (lVar1 / 2 == (longlong)*(int *)(local_88 + 8)) {
                    *(int *)(local_88 + 0x18) = local_78;
                    *(int *)(local_88 + 0x14) = local_94 + *(int *)((longlong)local_38 + 0xac);
                    if (*(int *)(local_88 + 0xc) == *(int *)(local_88 + 8) + 1) {
                      iVar5 = (**(code **)(*local_38 + 200))(local_38,lVar1 % 2);
                      *(int *)(local_88 + 0x1c) = *(int *)(local_88 + 0x14) + iVar5;
                    }
                    iVar5 = (**(code **)(*local_38 + 0xc0))(local_38);
                    *(int *)(local_88 + 0x20) = local_78 + iVar5;
                  }
                  else {
                    lVar1 = (longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)
                    ;
                    if (lVar1 / 2 != (longlong)*(int *)(local_88 + 0xc)) {
                      iVar5 = *(int *)(local_88 + 0x18);
                      if (local_78 <= *(int *)(local_88 + 0x18)) {
                        iVar5 = local_78;
                      }
                      *(int *)(local_88 + 0x18) = iVar5;
                      iVar5 = *(int *)(local_88 + 0x20);
                      iVar8 = (**(code **)(*local_38 + 0xc0))(local_38,lVar1 % 2);
                      iVar11 = local_78 + iVar8;
                      if (local_78 + iVar8 < iVar5) {
                        iVar11 = iVar5;
                      }
                      *(int *)(local_88 + 0x20) = iVar11;
                    }
                  }
                }
                local_8c = local_8c + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
          }
          iVar14 = FUN_00ac4f20(local_38);
          local_94 = local_94 + iVar14;
          local_8d = true;
        }
        local_d8 = (undefined1 *)
                   CONCAT44(local_d8._4_4_,(local_78 - *(int *)(param_1 + 0x2c)) - local_9c);
        local_d0 = local_48;
        (**(code **)(*local_38 + 0xe8))
                  (local_38,*(undefined8 *)(param_1 + 0x78),iVar4,
                   local_78 - *(int *)(param_1 + 0x2c));
        FUN_00aa8a40(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),1);
      }
      else {
        if (*(byte *)(local_38 + 0xc) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)local_38 >> 8),1) <<
                    (*(byte *)(local_38 + 0xc) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          if (*(char *)(local_b0 + 0x48) == '\0') {
            local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,(int)local_38[0x18]);
            local_d0 = (undefined1 *)CONCAT44(local_d0._4_4_,*(int *)(param_1 + 0x30) - local_9c);
            local_c8 = local_48;
            FUN_00abf790(*(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x288),local_38,
                         *(undefined8 *)(param_1 + 0x78),
                         *(int *)(*(longlong *)(param_1 + 0x88) + 8) +
                         *(int *)((longlong)local_38 + 100));
          }
          else if ((*(longlong *)(local_b0 + 0x40) != 0) &&
                  (local_8c = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10) + -1, -1 < local_8c))
          {
            do {
              local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
              if ((((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2 ==
                   (longlong)*(int *)(local_88 + 8)) &&
                 (*(int *)(local_88 + 0xc) == *(int *)(local_88 + 8) + 1)) {
                FUN_004ae870(*(undefined8 *)(local_b0 + 0x40),local_8c);
              }
              local_8c = local_8c + -1;
            } while (local_8c != -1);
          }
        }
        else {
          uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
          thunk_FUN_04186fad(uVar9,0,0);
          local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,*(int *)(param_1 + 0x30) - local_9c);
          local_d0 = local_48;
          (**(code **)(*local_38 + 0xe8))
                    (local_38,*(undefined8 *)(param_1 + 0x78),
                     local_94 + *(int *)((longlong)local_38 + 0xac),*(undefined4 *)(local_b0 + 0x34)
                    );
          FUN_00aa8a40(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),1);
          if ((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) {
            iVar4 = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10);
            local_8c = 0;
            if (-1 < iVar4 + -1) {
              do {
                local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
                if (((longlong)*(int *)(local_88 + 8) <=
                     ((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2)
                   && (lVar1 = (longlong)local_a8 -
                               *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8),
                      plVar12 = (longlong *)(lVar1 % 2),
                      lVar1 / 2 <= (longlong)*(int *)(local_88 + 0xc))) {
                  local_78 = 0;
                  if (*(byte *)((longlong)local_38 + 0x4c) < 8) {
                    bVar15 = ((int)CONCAT71((int7)((ulonglong)local_38 >> 8),1) <<
                              (*(byte *)((longlong)local_38 + 0x4c) & 0x1f) & 0xcU) != 0;
                  }
                  else {
                    bVar15 = false;
                  }
                  if (!bVar15) {
                    bVar2 = *(byte *)(local_38 + 0x15);
                    if (bVar2 < 2) {
                      local_78 = (*(int *)(param_1 + 0x30) - *(int *)(local_b0 + 0x18)) +
                                 *(int *)((longlong)local_38 + 0xb4);
                    }
                    else if (bVar2 == 2) {
                      iVar14 = (**(code **)(*local_38 + 0xc0))(local_38,plVar12);
                      iVar14 = (iVar14 - *(int *)((longlong)local_38 + 0xb4)) + (int)local_38[0x17];
                      plVar12 = (longlong *)((longlong)iVar14 % 2 & 0xffffffff);
                      local_78 = (((*(int *)(param_1 + 0x30) - local_9c) + *(int *)(local_48 + 0x58)
                                  ) - *(int *)(local_48 + 0x4c) / 2) - iVar14 / 2;
                    }
                    else if ((byte)(bVar2 - 3) < 2) {
                      local_78 = (**(code **)(*local_38 + 0xc0))(local_38);
                      local_78 = ((*(int *)(param_1 + 0x30) - local_9c) - (int)local_38[0x17]) -
                                 local_78;
                      plVar12 = local_38;
                    }
                    iVar14 = (**(code **)(*local_38 + 0xc0))(local_38,plVar12);
                    iVar14 = local_78 + iVar14;
                    lVar1 = (longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)
                    ;
                    if (lVar1 / 2 == (longlong)*(int *)(local_88 + 8)) {
                      *(int *)(local_88 + 0x18) = local_78;
                      *(int *)(local_88 + 0x14) = local_94 + *(int *)((longlong)local_38 + 0xac);
                      if (*(int *)(local_88 + 0xc) == *(int *)(local_88 + 8) + 1) {
                        iVar5 = (**(code **)(*local_38 + 200))(local_38,lVar1 % 2);
                        *(int *)(local_88 + 0x1c) = *(int *)(local_88 + 0x14) + iVar5;
                      }
                      *(int *)(local_88 + 0x20) = iVar14;
                    }
                    else if (((longlong)local_a8 -
                             *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2 !=
                             (longlong)*(int *)(local_88 + 0xc)) {
                      iVar5 = *(int *)(local_88 + 0x18);
                      if (local_78 <= *(int *)(local_88 + 0x18)) {
                        iVar5 = local_78;
                      }
                      *(int *)(local_88 + 0x18) = iVar5;
                      iVar5 = *(int *)(local_88 + 0x20);
                      if (*(int *)(local_88 + 0x20) <= iVar14) {
                        iVar5 = iVar14;
                      }
                      *(int *)(local_88 + 0x20) = iVar5;
                    }
                  }
                }
                local_8c = local_8c + 1;
                iVar4 = iVar4 + -1;
              } while (iVar4 != 0);
            }
          }
          if (*(byte *)((longlong)local_38 + 0x4c) < 8) {
            bVar15 = ((int)CONCAT71((int7)((ulonglong)local_38 >> 8),1) <<
                      (*(byte *)((longlong)local_38 + 0x4c) & 0x1f) & 0xcU) != 0;
          }
          else {
            bVar15 = false;
          }
          if (!bVar15) {
            iVar4 = FUN_00ac4f20(local_38);
            local_8d = true;
            local_94 = local_94 + iVar4;
          }
        }
      }
    }
    else if (local_7c == -1) {
      cVar3 = (**(code **)(*local_40 + 0x118))(local_40);
      if (cVar3 == '\0') {
        *(undefined1 *)(local_40 + 0x23) = 1;
        if (*(byte *)(local_40 + 0xc) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)local_40 >> 8),1) <<
                    (*(byte *)(local_40 + 0xc) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar15 = false;
        }
        if (bVar15) {
          iVar4 = *(int *)(*(longlong *)(param_1 + 0x88) + 8) + *(int *)((longlong)local_40 + 100);
          local_78 = (int)local_40[0x18] - *(int *)(param_1 + 0x2c);
          if (((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) &&
             (local_8c = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10) + -1, -1 < local_8c)) {
            do {
              local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
              if ((((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2 ==
                   (longlong)*(int *)(local_88 + 8)) &&
                 (*(int *)(local_88 + 0xc) == *(int *)(local_88 + 8) + 1)) {
                FUN_004ae870(*(undefined8 *)(local_b0 + 0x40),local_8c);
              }
              local_8c = local_8c + -1;
            } while (local_8c != -1);
          }
        }
        else {
          iVar4 = local_94 + *(int *)((longlong)local_40 + 0xac);
          bVar2 = *(byte *)(local_40 + 0x15);
          if (bVar2 < 2) {
            local_78 = (*(int *)(local_b0 + 0x34) + *(int *)((longlong)local_40 + 0xb4)) -
                       *(int *)(param_1 + 0x2c);
          }
          else if (bVar2 == 2) {
            iVar14 = (**(code **)(*local_40 + 0xc0))(local_40);
            local_78 = (*(int *)(param_1 + 0x30) - (*(int *)(local_b0 + 0x18) + iVar14) / 2) -
                       *(int *)(param_1 + 0x2c);
          }
          else if (bVar2 == 3) {
            iVar14 = (**(code **)(*local_40 + 0xc0))(local_40);
            local_78 = (((*(int *)(param_1 + 0x30) - iVar14) - (int)local_40[0x17]) - local_9c) -
                       *(int *)(param_1 + 0x2c);
          }
          else if (bVar2 == 4) {
            iVar14 = (**(code **)(*local_40 + 0xc0))(local_40);
            local_78 = ((*(int *)(param_1 + 0x30) - iVar14) - (int)local_40[0x17]) -
                       *(int *)(param_1 + 0x2c);
          }
          else {
            local_78 = *(int *)(param_1 + 0x30);
          }
          cVar3 = FUN_004113d0(local_40,&PTR_FUN_00a89bc8);
          if (cVar3 == '\0') {
            cVar3 = FUN_004113d0(local_40,&PTR_FUN_00ac88a0);
            if (cVar3 != '\0') {
              local_78 = local_78 + 1;
            }
          }
          else {
            local_78 = local_78 + 2;
          }
          if ((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) {
            iVar14 = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10);
            local_8c = 0;
            if (-1 < iVar14 + -1) {
              do {
                local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
                if (((longlong)*(int *)(local_88 + 8) <=
                     ((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2)
                   && (((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) /
                       2 <= (longlong)*(int *)(local_88 + 0xc))) {
                  lVar1 = (longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8);
                  if (lVar1 / 2 == (longlong)*(int *)(local_88 + 8)) {
                    *(int *)(local_88 + 0x18) = local_78 + *(int *)(param_1 + 0x2c);
                    *(int *)(local_88 + 0x14) = local_94 + *(int *)((longlong)local_40 + 0xac);
                    if (*(int *)(local_88 + 0xc) == *(int *)(local_88 + 8) + 1) {
                      iVar5 = (**(code **)(*local_40 + 200))(local_40,lVar1 % 2);
                      *(int *)(local_88 + 0x1c) = *(int *)(local_88 + 0x14) + iVar5;
                    }
                    iVar5 = (**(code **)(*local_40 + 0xc0))(local_40);
                    *(int *)(local_88 + 0x20) = local_78 + *(int *)(param_1 + 0x2c) + iVar5;
                  }
                  else if (((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)
                           ) / 2 != (longlong)*(int *)(local_88 + 0xc)) {
                    iVar11 = local_78 + *(int *)(param_1 + 0x2c);
                    iVar5 = *(int *)(local_88 + 0x18);
                    if (iVar11 <= *(int *)(local_88 + 0x18)) {
                      iVar5 = iVar11;
                    }
                    *(int *)(local_88 + 0x18) = iVar5;
                    iVar5 = *(int *)(local_88 + 0x20);
                    iVar11 = (**(code **)(*local_40 + 0xc0))(local_40);
                    iVar11 = local_78 + *(int *)(param_1 + 0x2c) + iVar11;
                    if (iVar11 < iVar5) {
                      iVar11 = iVar5;
                    }
                    *(int *)(local_88 + 0x20) = iVar11;
                  }
                }
                local_8c = local_8c + 1;
                iVar14 = iVar14 + -1;
              } while (iVar14 != 0);
            }
          }
        }
        local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,local_78 - local_9c);
        local_d0 = local_48;
        (**(code **)(*local_40 + 0xe8))(local_40,*(undefined8 *)(param_1 + 0x78),iVar4,local_78);
        FUN_00aa8a40(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),1);
        if (*(byte *)(local_40 + 0xc) < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)local_40 >> 8),1) <<
                    (*(byte *)(local_40 + 0xc) & 0x1f) & 0x60U) != 0;
        }
        else {
          bVar15 = false;
        }
        if (!bVar15) {
          iVar4 = FUN_00ac4f20(local_40);
          local_8d = true;
          local_94 = local_94 + iVar4;
        }
      }
    }
    else {
      if (local_74 < iVar4) {
        iVar4 = local_74;
      }
      if (local_7c <= iVar4) {
        iVar4 = local_7c;
      }
      local_7d = FUN_00ab9b30(auStack_f8,local_a8,local_2c);
      if (local_2c[0] + -1 <= iVar4) {
        iVar4 = local_2c[0] + -1;
      }
      local_98 = local_a0;
      if (iVar4 + 1 <= local_a0) {
        local_98 = iVar4 + 1;
      }
      iVar4 = 2;
      if (local_7d == '\0') {
        uVar6 = uVar7;
        if (uVar7 == 0x1fffffff) {
          iVar4 = 1;
        }
      }
      else if (uVar7 == 0x1fffffff) {
        FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70),uVar6 ^ 0xffffff);
      }
      else {
        FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70),uVar7);
      }
      if (iVar4 == 2) {
        FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),uVar6);
        FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),0);
      }
      else {
        FUN_005fdcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),1);
      }
      uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
      thunk_FUN_03b994b9(uVar9,iVar4);
      if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x92) != '\0') {
        if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0xb2) != '\0') {
          uVar10 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
          uVar9 = 0;
          uVar6 = thunk_FUN_03e5bd07(uVar10,0x18);
          if (uVar6 < 8) {
            bVar15 = ((int)CONCAT71((int7)((ulonglong)uVar9 >> 8),1) << ((byte)uVar6 & 0x1f) & 7U)
                     != 0;
          }
          else {
            bVar15 = false;
          }
          if ((bVar15) &&
             (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28) != 0xffffff)) {
            FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70),0);
          }
        }
        if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0xb0) == '\0') &&
           ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28) & 0xe0e0) ==
            0xe0e0)) {
          FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70),&DAT_02a0a0a0);
        }
      }
      uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
      thunk_FUN_041afa90(uVar9,0x18);
      if (local_48[0x5c] == '\0') {
        iVar4 = 0;
      }
      else if (local_48[0x5c] == '\t') {
        iVar4 = -(*(int *)(local_48 + 0x48) / 3);
      }
      else {
        iVar4 = *(int *)(local_48 + 0x58) / 2 + 1;
      }
      if ((local_8d == false) && (iVar4 == 0)) {
        local_8d = false;
      }
      else {
        local_8d = true;
      }
      if (local_8d != false) {
        local_b4 = ((*(int *)(param_1 + 0x30) - local_9c) + iVar4) - *(int *)(param_1 + 0x2c);
        local_8d = iVar4 != 0;
      }
      if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2bd) == '\0') &&
          (iVar14 = FUN_005fce00(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70)), iVar14 != 0
          )) && (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28) != 0x1fffffff)
         ) {
        iVar14 = local_98;
        if ((local_a0 - local_98 < 1) &&
           ((*(short *)(local_a8 + (longlong)local_98 * 2 + -2) == 8 ||
            (*(short *)(local_a8 + (longlong)local_98 * 2 + -2) == 0x20)))) {
          iVar14 = local_98 + -1;
        }
        bVar2 = *(byte *)(*(longlong *)(param_1 + 0x70) + 0x128);
        if (bVar2 < 8) {
          bVar15 = ((int)CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x70) >> 8),1) <<
                    (bVar2 & 0x1f) & 0x16U) != 0;
        }
        else {
          bVar15 = false;
        }
        if ((bVar15) &&
           (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x20) + 0x50e) == '\0')) {
          local_d8 = (undefined1 *)
                     CONCAT44(local_d8._4_4_,
                              (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) + 1);
          FUN_004238d0(local_58,*(undefined4 *)(*(longlong *)(param_1 + 0x88) + 8),
                       ((*(int *)(param_1 + 0x30) - *(int *)(local_b0 + 0x18)) -
                       *(int *)(local_b0 + 0x10)) - *(int *)(param_1 + 0x2c),
                       *(int *)(param_1 + 0x90) + *(int *)(*(longlong *)(param_1 + 0x88) + 0x10));
          uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
          local_d8 = local_58;
          local_d0 = local_a8;
          local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,iVar14);
          local_c0 = 0;
          thunk_FUN_03e58493(uVar9,local_94,local_b4,4);
          uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
          iVar5 = FUN_00a71d80(uVar9,local_a8,iVar14);
          iVar5 = local_94 + iVar5;
        }
        else {
          if (*(int *)(local_b0 + 0x38) == 0) {
            uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
            thunk_FUN_04186fad(uVar9,0,0);
          }
          else {
            uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
            thunk_FUN_04186fad(uVar9,*(undefined4 *)(local_b0 + 0x3c),
                               *(undefined4 *)(local_b0 + 0x38));
          }
          if (*PTR_DAT_020040c8 == '\0') {
            if ((local_a0 - local_98 < 1) && (*(char *)(local_b0 + 0x50) != '\0')) {
              FUN_00ab9aa0(auStack_f8,local_70,local_a8,iVar14);
              FUN_00414b50(&local_60,local_70[0]);
              uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
              uVar13 = 0;
              if (local_60 != 0) {
                uVar13 = *(undefined4 *)(local_60 + -4);
              }
              uVar10 = FUN_00416740(local_60);
              local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,uVar13);
              thunk_FUN_04193d0c(uVar9,local_94,local_b4,uVar10);
              uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
              uVar13 = 0;
              if (local_60 != 0) {
                uVar13 = *(undefined4 *)(local_60 + -4);
              }
              uVar10 = FUN_00416740(local_60);
              iVar5 = FUN_00a71d80(uVar9,uVar10,uVar13);
              iVar5 = local_94 + iVar5;
            }
            else {
              uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
              local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar14);
              thunk_FUN_04193d0c(uVar9,local_94,local_b4,local_a8);
              uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
              iVar5 = FUN_00a71d80(uVar9,local_a8,iVar14);
              iVar5 = local_94 + iVar5;
            }
          }
          else {
            uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
            iVar5 = FUN_00a71d80(uVar9,local_a8,iVar14);
            iVar5 = local_94 + iVar5;
            local_d8 = (undefined1 *)
                       CONCAT44(local_d8._4_4_,
                                (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) + 1);
            FUN_004238d0(local_58,local_94,
                         ((*(int *)(param_1 + 0x30) - *(int *)(local_b0 + 0x18)) -
                         *(int *)(local_b0 + 0x10)) - *(int *)(param_1 + 0x2c),iVar5);
            uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
            local_d8 = local_58;
            local_d0 = local_a8;
            local_c8 = (undefined1 *)CONCAT44(local_c8._4_4_,iVar14);
            local_c0 = 0;
            thunk_FUN_03e58493(uVar9,local_94,local_b4,4);
          }
        }
        FUN_00aa8a40(*(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18),1);
        if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x278) != '\0') &&
            (local_7d == '\0')) &&
           ((longlong)*(int *)(param_1 + 0x34) ==
            ((longlong)local_a8 - *(longlong *)(*(longlong *)(param_1 + 0x70) + 0xd8)) / 2)) {
          FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),
                       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28));
          iVar14 = ((*(int *)(param_1 + 0x30) - local_9c) + *(int *)(local_48 + 0x58) + iVar4) -
                   *(int *)(param_1 + 0x2c);
          FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),0xffffff);
          local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar14 - *(int *)(local_48 + 0x48));
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0xf8))
                    (*(longlong **)(param_1 + 0x78),local_94,iVar14,local_94 + 1);
        }
        if ((local_48[0x2c] != '\0') ||
           (((cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                                (*(longlong **)(param_1 + 0x70)), cVar3 != '\0' &&
             (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2e0) != 0)) &&
            (*(longlong *)(*(longlong *)(local_48 + 8) + 8) != 0)))) {
          iVar14 = ((*(int *)(param_1 + 0x30) - local_9c) + *(int *)(local_48 + 0x58) + iVar4) -
                   *(int *)(param_1 + 0x2c);
          local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar14);
          FUN_004238d0(local_58,local_94,iVar14 - *(int *)(local_48 + 0x48),iVar5 + 1);
          if (local_48[0x2c] != '\0') {
            FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),0xffffff);
            FUN_005fc860(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x70),0);
            FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
            plVar12 = *(longlong **)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0xb8);
            cVar3 = (**(code **)(*plVar12 + 0x450))(plVar12);
            if (cVar3 != '\0') {
              (**(code **)(**(longlong **)(param_1 + 0x78) + 0x98))
                        (*(longlong **)(param_1 + 0x78),local_58);
            }
          }
          if (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2e0) != 0) {
            lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
            local_d8 = *(undefined1 **)(*(longlong *)(local_48 + 8) + 0x10);
            local_d0 = local_58;
            (**(code **)(lVar1 + 0x2e0))
                      (*(undefined8 *)(lVar1 + 0x2e8),
                       *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0xb8),
                       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x2f0),
                       *(undefined8 *)(*(longlong *)(local_48 + 8) + 8));
          }
        }
        local_94 = iVar5;
        if (((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x278) != '\0') &&
            (local_7d == '\0')) &&
           ((*(int *)(param_1 + 0x34) == *(int *)(*(longlong *)(param_1 + 0x70) + 0x6c) &&
            (((*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x9c) ==
               *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18) + 0x34) &&
              (local_a0 == local_98)) &&
             (local_b8 == *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x70) + 0xf0) + 0x10) + -1)
             ))))) {
          FUN_005fd4e0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x78),
                       *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x70) + 0x28));
          iVar4 = ((*(int *)(param_1 + 0x30) - local_9c) + *(int *)(local_48 + 0x58) + iVar4) -
                  *(int *)(param_1 + 0x2c);
          FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x80),0xffffff);
          local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,iVar4 - *(int *)(local_48 + 0x48));
          (**(code **)(**(longlong **)(param_1 + 0x78) + 0xf8))
                    (*(longlong **)(param_1 + 0x78),local_94,iVar4,local_94 + 1);
        }
      }
    }
    local_a8 = local_a8 + (longlong)local_98 * 2;
  }
  uVar9 = FUN_005ffa40(*(undefined8 *)(param_1 + 0x78));
  thunk_FUN_04186fad(uVar9,0,0);
  if ((*(char *)(local_b0 + 0x48) != '\0') && (*(longlong *)(local_b0 + 0x40) != 0)) {
    iVar4 = *(int *)(*(longlong *)(local_b0 + 0x40) + 0x10);
    local_8c = 0;
    if (-1 < iVar4 + -1) {
      do {
        local_88 = FUN_00ac5670(*(undefined8 *)(local_b0 + 0x40),local_8c);
        if ((*(char *)(local_88 + 0x11) != '\0') || (*(int *)(local_88 + 0x1c) == 0)) {
          *(int *)(local_88 + 0x1c) = local_94;
        }
        FUN_00ab9a60(param_1,local_88 + 0x14);
        local_8c = local_8c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  FUN_00414480(local_70);
  FUN_00414480(&local_60);
  return;
}

