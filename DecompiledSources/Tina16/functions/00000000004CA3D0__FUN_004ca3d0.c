/* Ghidra address: 004ca3d0 */
/* Ghidra symbol: FUN_004ca3d0 */


/* WARNING: Removing unreachable block (ram,0x004cab0f) */
/* WARNING: Removing unreachable block (ram,0x004ca854) */

void FUN_004ca3d0(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  bool bVar8;
  float fVar9;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  longlong local_120;
  undefined8 local_110;
  undefined8 local_108;
  undefined1 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_60;
  int local_5c;
  undefined4 local_58;
  int local_54;
  undefined8 local_50;
  char local_41;
  longlong local_40;
  longlong local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_80 = auStack_148;
  local_110 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  uVar5 = FUN_004bea50(*(undefined8 *)(param_1 + 0x1d0));
  uVar5 = uVar5 & 0xff;
  if (0xd < uVar5) {
    if (uVar5 < 0x13) {
      if (uVar5 == 0x12) {
LAB_004ca7fe:
        FUN_004c1ed0(*(undefined8 *)(param_1 + 0x1d0),&local_40);
        local_54 = 0;
        if (local_40 != 0) {
          local_54 = *(int *)(local_40 + -4);
        }
        local_30 = local_54;
        local_58 = 0;
        if (local_54 == 0) {
          FUN_004c9d80(param_1,&DAT_004cb248);
        }
        else {
          local_24 = 1;
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
          if (0x40 < local_54) {
            FUN_004c9f50(param_1);
          }
          local_2c = local_24;
          do {
            local_41 = '\0';
            lVar7 = (longlong)local_24;
            uVar1 = *(ushort *)(local_40 + -2 + lVar7 * 2);
            if (((uVar1 < 0x20) || (uVar1 == 0x27)) || (0x7f < uVar1)) {
              FUN_004c9d80(param_1,&DAT_004cb26c);
              FUN_0043f750(&local_b0,*(undefined2 *)(local_40 + -2 + lVar7 * 2));
              FUN_004c9d80(param_1,local_b0);
              local_24 = local_24 + 1;
              if (0x3f < local_24 - local_2c) {
                local_41 = '\x01';
              }
            }
            else {
              local_28 = local_24;
              while ((local_24 = local_24 + 1, local_24 <= local_30 &&
                     (0x1f < *(ushort *)(local_40 + -2 + (longlong)local_24 * 2)))) {
                if ((*(short *)(local_40 + -2 + (longlong)local_24 * 2) == 0x27) ||
                   ((0x3f < local_24 - local_2c ||
                    (0x7f < *(ushort *)(local_40 + -2 + (longlong)local_24 * 2))))) break;
              }
              local_41 = 0x3f < local_24 - local_2c;
              FUN_004c9d80(param_1,&DAT_004cb25c);
              if (local_28 < local_24) {
                do {
                  FUN_004c9e70(param_1,*(undefined1 *)(local_40 + -2 + (longlong)local_28 * 2));
                  local_28 = local_28 + 1;
                } while (local_28 < local_24);
              }
              FUN_004c9d80(param_1,&DAT_004cb25c);
            }
            if ((local_41 != '\0') && (local_24 <= local_30)) {
              FUN_004c9d80(param_1,&DAT_004cb27c);
              FUN_004c9f50(param_1);
              local_2c = local_24;
            }
          } while (local_24 <= local_30);
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
        }
        goto code_r0x004cb0f0;
      }
      if (uVar5 == 0xe) {
        FUN_004c23c0(*(undefined8 *)(param_1 + 0x1d0));
        FUN_004c9d80(param_1,&DAT_004cb2c4);
        *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
        while (cVar2 = FUN_004be290(*(undefined8 *)(param_1 + 0x1d0)), cVar2 == '\0') {
          FUN_004c9f50(param_1);
          FUN_004c9d80(param_1,L"item");
          uVar6 = FUN_004bea50(*(undefined8 *)(param_1 + 0x1d0));
          if ((byte)uVar6 < 8) {
            bVar8 = ((int)CONCAT71((int7)((ulonglong)uVar6 >> 8),1) << ((byte)uVar6 & 0x1f) & 0x1cU)
                    != 0;
          }
          else {
            bVar8 = false;
          }
          if (bVar8) {
            FUN_004c9d80(param_1,&PTR_DAT_004cb2ec);
            FUN_004ca3d0(param_1);
            FUN_004c9d80(param_1,&DAT_004cb2b4);
          }
          FUN_004c9d80(param_1,&DAT_004cb300);
          FUN_004be030(*(undefined8 *)(param_1 + 0x1d0),1);
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
          while (cVar2 = FUN_004be290(*(undefined8 *)(param_1 + 0x1d0)), cVar2 == '\0') {
            FUN_004cb330(param_1);
          }
          local_68 = *(undefined8 *)(param_1 + 0x1d0);
          FUN_004be030(local_68,0);
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
          FUN_004c9bf0(param_1);
          FUN_004c9d80(param_1,&DAT_004cb314);
        }
        local_70 = *(undefined8 *)(param_1 + 0x1d0);
        FUN_004be030(local_70,0);
        *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
        FUN_004c9d80(param_1,&LAB_004cb328);
        goto code_r0x004cb0f0;
      }
      if (uVar5 == 0xf) {
        fVar9 = (float)FUN_004c0350(*(undefined8 *)(param_1 + 0x1d0));
        FUN_00448450(&local_98,(double)fVar9,param_1 + 0x40);
        FUN_00416ad0(&local_98,&DAT_004cb218);
        FUN_004c9d80(param_1,local_98);
        goto code_r0x004cb0f0;
      }
      if (uVar5 == 0x10) {
        lVar7 = FUN_004c03b0(*(undefined8 *)(param_1 + 0x1d0));
        FUN_00448450(&local_a0,((double)lVar7 * 10000.0) / 10000.0,param_1 + 0x40);
        FUN_00416ad0(&local_a0,&DAT_004cb228);
        FUN_004c9d80(param_1,local_a0);
        goto code_r0x004cb0f0;
      }
      if (uVar5 == 0x11) {
        uVar6 = FUN_004c0400(*(undefined8 *)(param_1 + 0x1d0));
        FUN_00448450(&local_a8,uVar6,param_1 + 0x40);
        FUN_00416ad0(&local_a8,&DAT_004cb238);
        FUN_004c9d80(param_1,local_a8);
        goto code_r0x004cb0f0;
      }
    }
    else {
      if (uVar5 == 0x13) {
        uVar6 = FUN_004c0750(*(undefined8 *)(param_1 + 0x1d0));
        FUN_0043f780(&local_c8,uVar6);
        FUN_004c9d80(param_1,local_c8);
        goto code_r0x004cb0f0;
      }
      if (uVar5 == 0x14) goto LAB_004ca7fe;
      if (uVar5 == 0x15) {
LAB_004ca685:
        uVar6 = FUN_004c02a0(*(undefined8 *)(param_1 + 0x1d0));
        local_128 = 0x12;
        local_120 = param_1 + 0x40;
        FUN_00448510(&local_90,uVar6,2,0x10);
        FUN_004c9d80(param_1,local_90);
        goto code_r0x004cb0f0;
      }
    }
LAB_004cb05f:
    local_108 = *(undefined8 *)(param_1 + 0x1c8);
    local_100 = 0x11;
    local_f8 = *(undefined8 *)PTR_PTR_02002ae8;
    local_f0 = 0x11;
    local_e8 = *(undefined8 *)(param_1 + 0x38);
    local_e0 = 0x11;
    uVar3 = FUN_004bea50(*(undefined8 *)(param_1 + 0x1d0));
    FUN_0043f750(&local_110,uVar3);
    local_d8 = local_110;
    local_d0 = 0x11;
    local_128 = 3;
    uVar6 = FUN_0044d8d0(&PTR_FUN_00471c70,1,PTR_PTR_02005138,&local_108);
    FUN_004134c0(uVar6);
    goto code_r0x004cb0f0;
  }
  if (uVar5 != 0xd) {
    if (uVar5 < 7) {
      if (uVar5 == 6) {
LAB_004caab9:
        FUN_004c1ed0(*(undefined8 *)(param_1 + 0x1d0),&local_38);
        local_5c = 0;
        if (local_38 != 0) {
          local_5c = *(int *)(local_38 + -4);
        }
        local_30 = local_5c;
        local_60 = 0;
        if (local_5c == 0) {
          FUN_004c9d80(param_1,&DAT_004cb248);
        }
        else {
          local_24 = 1;
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
          if (0x40 < local_5c) {
            FUN_004c9f50(param_1);
          }
          local_2c = local_24;
          do {
            local_41 = '\0';
            lVar7 = (longlong)local_24;
            uVar1 = *(ushort *)(local_38 + -2 + lVar7 * 2);
            if ((uVar1 < 0x20) || (uVar1 == 0x27)) {
              FUN_004c9d80(param_1,&DAT_004cb26c);
              FUN_0043f750(&local_b8,*(undefined2 *)(local_38 + -2 + lVar7 * 2));
              FUN_004c9d80(param_1,local_b8);
              local_24 = local_24 + 1;
              if (0x3f < local_24 - local_2c) {
                local_41 = '\x01';
              }
            }
            else {
              local_28 = local_24;
              do {
                local_24 = local_24 + 1;
                if (((local_30 < local_24) ||
                    (*(ushort *)(local_38 + -2 + (longlong)local_24 * 2) < 0x20)) ||
                   (*(short *)(local_38 + -2 + (longlong)local_24 * 2) == 0x27)) break;
              } while (local_24 - local_2c < 0x40);
              local_41 = 0x3f < local_24 - local_2c;
              FUN_004c9d80(param_1,&DAT_004cb25c);
              FUN_00414480(local_20);
              FUN_00416dc0(local_20,local_38,local_28,local_24 - local_28);
              FUN_004c9d80(param_1,local_20[0]);
              FUN_00414480(local_20);
              FUN_004c9d80(param_1,&DAT_004cb25c);
            }
            if ((local_41 != '\0') && (local_24 <= local_30)) {
              FUN_004c9d80(param_1,&DAT_004cb27c);
              FUN_004c9f50(param_1);
              local_2c = local_24;
            }
          } while (local_24 <= local_30);
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
        }
        goto code_r0x004cb0f0;
      }
      if (uVar5 != 0) {
        if (uVar5 == 1) {
          FUN_004c23c0(*(undefined8 *)(param_1 + 0x1d0));
          FUN_004c9d80(param_1,&DAT_004cb1f8);
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
          while (cVar2 = FUN_004be290(*(undefined8 *)(param_1 + 0x1d0)), cVar2 == '\0') {
            FUN_004c9f50(param_1);
            FUN_004ca3d0(param_1);
          }
          local_50 = *(undefined8 *)(param_1 + 0x1d0);
          FUN_004be030(local_50,0);
          *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + -1;
          FUN_004c9d80(param_1,&DAT_004cb208);
          goto code_r0x004cb0f0;
        }
        if (uVar5 - 2 < 3) {
          uVar4 = FUN_004c06c0(*(undefined8 *)(param_1 + 0x1d0));
          FUN_0043f750(&local_88,uVar4);
          FUN_004c9d80(param_1,local_88);
          goto code_r0x004cb0f0;
        }
        if (uVar5 - 2 == 3) goto LAB_004ca685;
        goto LAB_004cb05f;
      }
    }
    else if (2 < uVar5 - 7) {
      if (uVar5 == 10) {
        FUN_004ca220(param_1);
        goto code_r0x004cb0f0;
      }
      if (uVar5 == 0xb) {
        FUN_004c23c0(*(undefined8 *)(param_1 + 0x1d0));
        FUN_004c9d80(param_1,&DAT_004cb290);
        local_24 = 0;
        while (FUN_004c1d80(*(undefined8 *)(param_1 + 0x1d0),&local_38), local_38 != 0) {
          if (0 < local_24) {
            FUN_004c9d80(param_1,&DAT_004cb2a0);
          }
          FUN_004c9ea0(param_1,local_38);
          local_24 = local_24 + 1;
        }
        FUN_004c9d80(param_1,&DAT_004cb2b4);
        goto code_r0x004cb0f0;
      }
      if (uVar5 != 0xc) goto LAB_004cb05f;
      goto LAB_004caab9;
    }
  }
  FUN_004c0450(*(undefined8 *)(param_1 + 0x1d0),&local_c0);
  FUN_004c9ea0(param_1,local_c0);
code_r0x004cb0f0:
  FUN_00414480(&local_110);
  FUN_00414560(&local_c8,9);
  FUN_00414560(&local_40,2);
  FUN_00414480(local_20);
  return;
}

