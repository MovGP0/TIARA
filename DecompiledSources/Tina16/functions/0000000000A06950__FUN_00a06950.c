/* Ghidra address: 00a06950 */
/* Ghidra symbol: FUN_00a06950 */


longlong * FUN_00a06950(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  bool bVar12;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  int local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  longlong local_f0;
  longlong local_e0;
  undefined4 *local_d0;
  undefined2 *local_c8;
  char local_be;
  char local_bd;
  int local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  uint local_ac;
  undefined1 *local_a8;
  char *local_a0;
  longlong local_98;
  undefined1 *local_90;
  undefined2 *local_88;
  ulonglong local_80;
  undefined4 local_74;
  longlong local_70;
  undefined2 *local_68;
  int local_5c;
  int local_58;
  uint local_54;
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  longlong local_30;
  
  local_120 = auStack_148;
  local_38 = 0;
  local_40 = (longlong *)0x0;
  local_a0 = (char *)0x0;
  local_98 = 0;
  iVar2 = FUN_00a04e10(param_1);
  iVar3 = FUN_00a061b0(param_1);
  local_54 = iVar2 * 3 * iVar3;
  if ((local_54 & 3) != 0) {
    local_54 = (local_54 & 0xfffffffc) + 4;
  }
  local_58 = FUN_00a04e00(param_1);
  local_58 = local_54 * local_58;
  local_5c = local_58 + 0x36;
  if ((200000000 < local_5c) ||
     ((cVar1 = FUN_00a04e20(param_1), cVar1 != '\0' && (100000000 < local_5c)))) {
    FUN_00a074d0(0x19);
  }
  local_30 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  FUN_004b6e40(local_30,(longlong)local_5c);
  local_68 = *(undefined2 **)(local_30 + 8);
  FUN_0040d200(local_68,(longlong)local_5c,0);
  local_c8 = local_68;
  *local_68 = 0x4d42;
  *(int *)(local_68 + 1) = local_5c;
  local_68[3] = 0;
  local_68[4] = 0;
  *(undefined4 *)(local_68 + 5) = 0x36;
  local_d0 = (undefined4 *)(local_68 + 7);
  *local_d0 = 0x28;
  iVar2 = FUN_00a04e10(param_1);
  iVar3 = FUN_00a061b0(param_1);
  local_d0[1] = iVar2 * iVar3;
  uVar4 = FUN_00a04e00(param_1);
  local_d0[2] = uVar4;
  *(undefined2 *)(local_d0 + 3) = 1;
  *(undefined2 *)((longlong)local_d0 + 0xe) = 0x18;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_88 = local_68 + 0x1b;
  local_be = FUN_00a04e20(param_1);
  if (local_be != '\0') {
    local_38 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    FUN_004b6e40(local_38,(longlong)local_5c);
    local_70 = *(longlong *)(local_38 + 8);
    FUN_00409a70(local_68,local_70,(longlong)local_5c);
    local_98 = local_70 + 0x36;
    FUN_0040d200(local_98,(longlong)local_58,0xff);
  }
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x30) + 0x10);
  local_ac = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_48 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),local_ac);
      if (local_48 != 0) {
        local_e0 = local_48;
        local_50 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(local_48 + 0x1c));
        local_bc = FUN_00a062d0(param_1,local_ac);
        local_b8 = 0;
        local_f4 = FUN_00a04e00(param_1);
        local_f4 = local_f4 + -1;
        local_f8 = FUN_00a04e00(param_1);
        local_f8 = local_f8 - *(int *)(local_e0 + 0x10);
        local_fc = FUN_00a06370(param_1,local_ac);
        local_100 = local_fc;
        if (local_fc < local_f8) {
          local_100 = local_f8;
        }
        local_b4 = local_f4;
        if (local_100 <= local_f4) {
          iVar3 = (local_100 - local_f4) + -1;
          do {
            iVar5 = FUN_00a06370(param_1,local_ac);
            iVar6 = FUN_00a04e10(param_1);
            iVar7 = FUN_00a06350(param_1,local_ac);
            local_90 = (undefined1 *)
                       ((longlong)local_88 +
                       (longlong)(int)(local_ac * iVar6 * 3) +
                       (longlong)(iVar7 * 3) + (longlong)(int)((local_b4 - iVar5) * local_54));
            iVar5 = FUN_00a04e10(param_1);
            local_a8 = local_90 + iVar5 * 3;
            if (local_be != '\0') {
              iVar5 = FUN_00a06370(param_1,local_ac);
              iVar6 = FUN_00a04e10(param_1);
              iVar7 = FUN_00a06350(param_1,local_ac);
              local_a0 = (char *)((longlong)(int)(local_ac * iVar6 * 3) +
                                 (longlong)(iVar7 * 3) +
                                 local_98 + (int)((local_b4 - iVar5) * local_54));
            }
            iVar5 = *(int *)(local_e0 + 0xc);
            local_b0 = 0;
            if (-1 < iVar5 + -1) {
              do {
                if ((longlong)local_90 < (longlong)local_a8) {
                  local_80 = (ulonglong)
                             *(byte *)(*(longlong *)(local_e0 + 0x30) + (longlong)local_b8);
                  local_74 = *(undefined4 *)(local_50 + 4 + local_80 * 4);
                  if (local_80 == (longlong)local_bc) {
                    if (local_ac == 0) {
                      *local_90 = 0;
                      local_90[1] = 0;
                      local_90[2] = 0;
                    }
                  }
                  else {
                    *local_90 = (char)((uint)local_74 >> 0x10);
                    local_90[1] = (char)((uint)local_74 >> 8);
                    local_90[2] = (undefined1)local_74;
                  }
                  local_90 = local_90 + 3;
                  if (local_be != '\0') {
                    if (local_80 == (longlong)local_bc) {
                      local_bd = -1;
                    }
                    else {
                      local_bd = '\0';
                    }
                    if ((local_ac == 0) || (local_bd == '\0')) {
                      *local_a0 = local_bd;
                      local_a0[1] = local_bd;
                      local_a0[2] = local_bd;
                      local_a0 = local_a0 + 3;
                    }
                    else {
                      local_a0 = local_a0 + 3;
                    }
                  }
                }
                local_b8 = local_b8 + 1;
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            local_b4 = local_b4 + -1;
            iVar3 = iVar3 + 1;
          } while (iVar3 != 0);
        }
      }
      if ((int)local_ac < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10) + -1) {
        local_b4 = FUN_00a04e00(param_1);
        local_b4 = local_b4 + -1;
        if (-1 < local_b4) {
          do {
            iVar5 = local_b4 * local_54;
            iVar3 = FUN_00a04e10(param_1);
            local_90 = (undefined1 *)
                       ((longlong)local_88 + (longlong)(int)(local_ac * iVar3 * 3) + (longlong)iVar5
                       );
            if (local_be != '\0') {
              iVar3 = FUN_00a04e10(param_1);
              local_a0 = (char *)(local_98 + iVar5 + (longlong)(int)(local_ac * iVar3 * 3));
            }
            iVar3 = FUN_00a04e10(param_1);
            iVar5 = FUN_00a04e10(param_1);
            FUN_00409a70(local_90,local_90 + iVar3 * 3,(longlong)(iVar5 * 3));
            if (local_be != '\0') {
              iVar3 = FUN_00a04e10(param_1);
              iVar5 = FUN_00a04e10(param_1);
              FUN_00409a70(local_a0,local_a0 + iVar3 * 3,(longlong)(iVar5 * 3));
            }
            local_b4 = local_b4 + -1;
          } while (local_b4 != -1);
        }
        if (local_be != '\0') {
          uVar11 = (ulonglong)local_ac;
          uVar8 = FUN_00a062b0(param_1,uVar11);
          if (uVar8 < 8) {
            bVar12 = ((int)CONCAT71((int7)(uVar11 >> 8),1) << ((byte)uVar8 & 0x1f) & 0xcU) != 0;
          }
          else {
            bVar12 = false;
          }
          if (bVar12) {
            local_f0 = local_48;
            local_104 = FUN_00a04e00(param_1);
            local_104 = local_104 + -1;
            local_108 = FUN_00a04e00(param_1);
            local_108 = local_108 - *(int *)(local_f0 + 0x10);
            local_10c = FUN_00a06370(param_1,local_ac);
            local_110 = local_10c;
            if (local_10c < local_108) {
              local_110 = local_108;
            }
            local_b4 = local_104;
            if (local_110 <= local_104) {
              iVar3 = (local_110 - local_104) + -1;
              do {
                iVar5 = FUN_00a06370(param_1,local_ac);
                iVar6 = FUN_00a04e10(param_1);
                iVar7 = FUN_00a06350(param_1,local_ac);
                local_a0 = (char *)(local_98 + (int)((local_b4 - iVar5) * local_54) +
                                    (longlong)(int)((local_ac + 1) * iVar6 * 3) +
                                   (longlong)(iVar7 * 3));
                FUN_0040d200(local_a0,(longlong)(*(int *)(local_f0 + 0xc) * 3),0xff);
                local_b4 = local_b4 + -1;
                iVar3 = iVar3 + 1;
              } while (iVar3 != 0);
            }
          }
        }
      }
      local_ac = local_ac + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  local_40 = (longlong *)FUN_009ec850(&PTR_FUN_009eb620,1,local_be);
  (**(code **)(*local_40 + 0xf8))(local_40,0);
  (**(code **)(*local_40 + 0xc0))(local_40,local_30);
  if (local_be != '\0') {
    (**(code **)(*local_40 + 0xf8))(local_40,0);
    plVar9 = (longlong *)FUN_009ec7c0(local_40);
    (**(code **)(*plVar9 + 0xc0))(plVar9,local_38);
    uVar10 = FUN_009ec7c0(local_40);
    FUN_0060b9b0(uVar10,1);
  }
  FUN_00410f20(local_30);
  FUN_00410f20(local_38);
  return local_40;
}

