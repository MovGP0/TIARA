/* Ghidra address: 00747d20 */
/* Ghidra symbol: FUN_00747d20 */


void FUN_00747d20(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  code *pcVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_128 [32];
  uint local_108;
  undefined8 local_f0;
  uint local_e8 [2];
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  longlong local_c0;
  uint local_b8;
  uint local_b4;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_98;
  int local_94;
  longlong local_90;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  longlong local_30;
  int local_28;
  int local_24;
  longlong local_20;
  
  local_d0 = auStack_128;
  local_f0 = 0;
  local_d8 = 0;
  puVar1 = auStack_128;
  if (*(uint *)(param_1 + 0x2c) != param_2) {
    puVar1 = auStack_128;
    if (param_2 == 0) {
      FUN_0041ddd0(&local_d8,PTR_PTR_020029d8);
      local_e0 = 0;
      local_108 = 0;
      local_e8[0] = param_2;
      uVar4 = FUN_0044d530(&PTR_FUN_00737098,1,local_d8,local_e8);
      FUN_004134c0(uVar4);
      puVar1 = local_d0;
    }
    local_d0 = puVar1;
    pcVar5 = (code *)FUN_00411550(param_1,0xffffffff);
    local_30 = (*pcVar5)(param_1);
    puVar1 = local_d0;
    if (local_30 != 0) {
      uVar4 = FUN_00747560(param_1);
      FUN_00654400(uVar4);
      local_20 = FUN_00410e60(&DAT_00747a10,1);
      if (param_2 < *(uint *)(param_1 + 0x2c)) {
        local_28 = *(uint *)(param_1 + 0x2c) - param_2;
        *(uint *)(param_1 + 0x2c) = param_2;
        lVar6 = FUN_00747560(param_1);
        if (*(byte *)(lVar6 + 0x4c9) < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) <<
                   (*(byte *)(lVar6 + 0x4c9) & 0x1f) & 5U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          lVar6 = FUN_00747560(param_1);
          local_60 = *(longlong *)(lVar6 + 0x4b0);
          local_40 = *(int *)(*(longlong *)(local_60 + 0x10) + 0x10);
          local_24 = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c) + local_28;
          if (local_24 <= local_40 + -1) {
            iVar7 = ((local_40 + -1) - local_24) + 1;
            do {
              local_38 = FUN_00747010(local_30,*(undefined4 *)(param_1 + 0x20),local_24);
              if (local_38 != 0) {
                cVar2 = FUN_00749780(local_38);
                if (cVar2 == '\0') break;
                local_108 = local_108 & 0xffffff00;
                FUN_00747c30(local_20,local_38,*(undefined4 *)(param_1 + 0x20),local_24 - local_28);
              }
              local_24 = local_24 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_00747cc0(local_20);
          uVar4 = FUN_00747560(param_1);
          FUN_00745db0(uVar4);
        }
        else {
          uVar4 = FUN_00747560(param_1);
          iVar7 = FUN_00745310(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24)
                              );
          uVar4 = FUN_00747560(param_1);
          iVar3 = FUN_00745120(uVar4);
          local_24 = iVar7;
          if (iVar7 <= iVar3 + -1) {
            iVar7 = ((iVar3 + -1) - iVar7) + 1;
            do {
              uVar4 = FUN_00747560(param_1);
              FUN_00744dc0(uVar4,local_24,&local_48,&local_4c);
              local_38 = FUN_00747010(local_30,local_48,local_4c);
              if (local_38 != 0) {
                cVar2 = FUN_00749780(local_38);
                if (cVar2 == '\0') {
                  if (local_38 != param_1) break;
                  local_108 = local_108 & 0xffffff00;
                  FUN_00747c30(local_20,local_38,local_48,local_4c);
                }
                else if ((*(int *)(local_38 + 0x20) == local_48) &&
                        (*(int *)(local_38 + 0x24) == local_4c)) {
                  uVar4 = FUN_00747560(param_1);
                  FUN_00744dc0(uVar4,local_24 - local_28,&local_48,&local_4c);
                  if (0 < local_4c) {
                    lVar6 = FUN_00747560(param_1);
                    local_68 = *(longlong *)(lVar6 + 0x4b0);
                    if (*(int *)(*(longlong *)(local_68 + 0x10) + 0x10) <
                        local_4c + *(int *)(local_38 + 0x2c)) {
                      lVar6 = FUN_00747560(param_1);
                      local_70 = *(longlong *)(lVar6 + 0x4b0);
                      local_28 = local_28 +
                                 ((local_4c + *(int *)(local_38 + 0x2c)) -
                                 *(int *)(*(longlong *)(local_70 + 0x10) + 0x10));
                      uVar4 = FUN_00747560(param_1);
                      FUN_00744dc0(uVar4,local_24 - local_28,&local_48,&local_4c);
                    }
                  }
                  local_108 = local_108 & 0xffffff00;
                  FUN_00747c30(local_20,local_38,local_48,local_4c);
                }
              }
              local_24 = local_24 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_00747cc0(local_20);
          uVar4 = FUN_00747560(param_1);
          FUN_00745db0(uVar4);
        }
      }
      else {
        lVar6 = FUN_00747560(param_1);
        local_78 = *(longlong *)(lVar6 + 0x4b0);
        local_40 = *(int *)(*(longlong *)(local_78 + 0x10) + 0x10);
        local_28 = param_2 - *(int *)(param_1 + 0x2c);
        local_7c = *(int *)(param_1 + 0x24) + *(int *)(param_1 + 0x2c);
        local_80 = local_40;
        if (local_7c < local_40) {
          local_80 = local_7c;
        }
        local_84 = *(int *)(param_1 + 0x24) + param_2 + -1;
        local_88 = local_40 + -1;
        if (local_84 < local_88) {
          local_88 = local_84;
        }
        local_24 = local_80;
        if (local_80 <= local_88) {
          iVar7 = (local_88 - local_80) + 1;
          do {
            lVar6 = FUN_00746ff0(local_30,*(undefined4 *)(param_1 + 0x20),local_24);
            if (lVar6 != 0) break;
            local_28 = local_28 + -1;
            local_24 = local_24 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        local_44 = local_28;
        local_24 = local_40 + -1;
        if (local_40 - local_28 <= local_24) {
          iVar7 = ((local_40 - local_28) - local_24) + -1;
          do {
            lVar6 = FUN_00746ff0(local_30,*(undefined4 *)(param_1 + 0x20),local_24);
            if (lVar6 != 0) break;
            local_28 = local_28 + -1;
            local_24 = local_24 + -1;
            iVar7 = iVar7 + 1;
          } while (iVar7 != 0);
        }
        local_3c = local_28;
        lVar6 = FUN_00747560(param_1);
        if (*(byte *)(lVar6 + 0x4c9) < 8) {
          bVar8 = ((int)CONCAT71((int7)((ulonglong)lVar6 >> 8),1) <<
                   (*(byte *)(lVar6 + 0x4c9) & 0x1f) & 5U) != 0;
        }
        else {
          bVar8 = false;
        }
        if (bVar8) {
          lVar6 = FUN_00747560(param_1);
          if ((*(char *)(lVar6 + 0x4c9) == '\x02') && (0 < local_3c)) {
            FUN_0041ddd0(&local_f0,PTR_PTR_02004998);
            uVar4 = FUN_0044d490(&PTR_FUN_00737098,1,local_f0);
            FUN_004134c0(uVar4);
          }
          for (; 0 < local_3c; local_3c = local_3c + -1) {
            uVar4 = FUN_00747560(param_1);
            FUN_00744d90(uVar4);
          }
          lVar6 = FUN_00747560(param_1);
          local_90 = *(longlong *)(lVar6 + 0x4b0);
          local_40 = *(int *)(*(longlong *)(local_90 + 0x10) + 0x10);
          local_24 = local_40 + -1;
          if (local_40 - local_28 <= local_24) {
            iVar7 = ((local_40 - local_28) - local_24) + -1;
            do {
              local_38 = FUN_00747010(local_30,*(undefined4 *)(param_1 + 0x20),local_24 - local_44);
              if ((local_38 != 0) && (local_38 != param_1)) {
                local_108 = CONCAT31(local_108._1_3_,1);
                FUN_00747c30(local_20,local_38,*(undefined4 *)(param_1 + 0x20),local_24);
              }
              local_24 = local_24 + -1;
              iVar7 = iVar7 + 1;
            } while (iVar7 != 0);
          }
          FUN_00747cc0(local_20);
        }
        else if (0 < local_3c + local_44) {
          if (local_44 < local_40) {
            local_94 = local_44;
          }
          else {
            local_94 = local_40;
          }
          if (local_94 < local_3c) {
            local_98 = local_3c;
          }
          else {
            local_98 = local_94;
          }
          local_50 = local_98;
          uVar4 = FUN_00747560(param_1);
          iVar7 = FUN_00745310(uVar4,*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24)
                              );
          uVar4 = FUN_00747560(param_1);
          iVar3 = FUN_00745120(uVar4);
          if (iVar7 <= iVar3 + -1) {
            iVar3 = ((iVar3 + -1) - iVar7) + 1;
            local_24 = iVar7;
            do {
              uVar4 = FUN_00747560(param_1);
              FUN_00744dc0(uVar4,local_24,&local_48,&local_4c);
              local_38 = FUN_00747010(local_30,local_48,local_4c);
              if (((local_38 != 0) && (*(int *)(local_38 + 0x20) == local_48)) &&
                 (*(int *)(local_38 + 0x24) == local_4c)) {
                if (local_38 == param_1) {
                  local_48 = *(int *)(param_1 + 0x20);
                  local_4c = *(int *)(param_1 + 0x24);
                  local_54 = param_2;
                }
                else {
                  local_54 = *(uint *)(local_38 + 0x2c);
                  uVar4 = FUN_00747560(param_1);
                  FUN_00744dc0(uVar4,local_24 + local_50,&local_48,&local_4c);
                }
                lVar6 = FUN_00747560(param_1);
                local_a0 = *(longlong *)(lVar6 + 0x4b0);
                if (*(int *)(*(longlong *)(local_a0 + 0x10) + 0x10) < (int)(local_4c + local_54)) {
                  if (local_4c < 1) {
                    if (local_38 == param_1) {
                      if ((local_38 == param_1) && (local_4c == 0)) {
                        FUN_00748970(0,local_d0);
                        FUN_00748990(0,local_d0);
                        puVar1 = local_d0;
                        goto LAB_00748952;
                      }
                    }
                    else {
                      lVar6 = FUN_00747560(param_1);
                      local_b0 = *(longlong *)(lVar6 + 0x4b0);
                      local_b4 = *(uint *)(*(longlong *)(local_b0 + 0x10) + 0x10);
                      local_b8 = local_b4;
                      if ((int)local_54 < (int)local_b4) {
                        local_b8 = local_54;
                      }
                      local_50 = local_50 + local_b8;
                      uVar4 = FUN_00747560(param_1);
                      FUN_00744dc0(uVar4,local_24 + local_50,&local_48,&local_4c);
                    }
                  }
                  else {
                    lVar6 = FUN_00747560(param_1);
                    local_a8 = *(longlong *)(lVar6 + 0x4b0);
                    local_50 = local_50 +
                               (*(int *)(*(longlong *)(local_a8 + 0x10) + 0x10) - local_4c);
                    uVar4 = FUN_00747560(param_1);
                    FUN_00744dc0(uVar4,(local_24 + local_50) - local_3c,&local_48,&local_4c);
                  }
                }
                local_3c = 0;
                local_108 = CONCAT31(local_108._1_3_,1);
                FUN_00747c30(local_20,local_38,local_48,local_4c);
              }
              local_24 = local_24 + 1;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
          iVar7 = *(int *)(local_20 + 0x10);
          local_24 = 0;
          if (-1 < iVar7 + -1) {
            do {
              lVar6 = FUN_00747560(param_1);
              local_c0 = *(longlong *)(lVar6 + 0x4b8);
              if (*(int *)(*(longlong *)(local_c0 + 0x10) + 0x10) + -1 <
                  *(int *)(*(longlong *)(local_20 + 8) + 8 + (longlong)local_24 * 0x18)) {
                uVar4 = FUN_00747560(param_1);
                FUN_00744bf0(uVar4);
              }
              local_24 = local_24 + 1;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
          FUN_00747cc0(local_20);
        }
        *(uint *)(param_1 + 0x2c) = param_2;
      }
      FUN_004b1830(param_1,0);
      FUN_00410f20(local_20);
      uVar4 = FUN_00747560(param_1);
      FUN_00654410(uVar4);
      puVar1 = local_d0;
    }
  }
LAB_00748952:
  local_d0 = puVar1;
  FUN_00414480(&local_f0);
  FUN_00414480(&local_d8);
  return;
}

