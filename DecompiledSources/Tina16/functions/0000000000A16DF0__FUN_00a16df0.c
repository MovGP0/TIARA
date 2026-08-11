/* Ghidra address: 00a16df0 */
/* Ghidra symbol: FUN_00a16df0 */


int FUN_00a16df0(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  longlong lVar3;
  ushort *puVar4;
  code *pcVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  longlong lVar18;
  ulonglong uVar19;
  int iVar20;
  short *psVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  short *psVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  short *psVar37;
  longlong lVar38;
  int iVar39;
  uint uVar40;
  int local_19c;
  int local_198;
  int local_190;
  int local_18c;
  longlong local_188;
  longlong local_130;
  undefined1 local_c8 [2];
  short local_c6;
  short local_c4;
  short local_b8;
  short local_b6;
  short local_a8;
  
  lVar3 = *(longlong *)(param_1 + 0x230);
  iVar2 = *(int *)(param_1 + 0x1a4);
  while( true ) {
    if (((*(int *)(param_1 + 0xb4) < *(int *)(param_1 + 0xac)) ||
        (*(int *)((longlong)*(undefined8 **)(param_1 + 0x240) + 0x24) != 0)) ||
       ((*(int *)(param_1 + 0xac) == *(int *)(param_1 + 0xb4) &&
        (*(int *)(param_1 + 0xb8) + (uint)(*(int *)(param_1 + 0x20c) == 0) <
         *(uint *)(param_1 + 0xb0))))) break;
    iVar10 = (*(code *)**(undefined8 **)(param_1 + 0x240))(param_1);
    if (iVar10 == 0) {
      return 0;
    }
  }
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar38 = *(longlong *)(param_1 + 0x130);
    local_188 = 0;
    do {
      if (*(int *)(lVar38 + 0x30) != 0) {
        uVar26 = *(uint *)(param_1 + 0xb8);
        if (uVar26 < iVar2 - 1U) {
          uVar40 = *(uint *)(lVar38 + 0xc);
          uVar19 = (ulonglong)(uVar40 * 2);
          bVar9 = false;
          uVar32 = uVar40;
          uVar31 = uVar40 * 2;
          if (uVar26 != 0) goto LAB_00a16ee1;
LAB_00a16f56:
          lVar18 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                             (param_1,*(undefined8 *)(lVar3 + 0x88 + local_188 * 8),0,uVar19,0);
          bVar8 = true;
        }
        else {
          uVar40 = *(uint *)(lVar38 + 0xc);
          uVar19 = (ulonglong)*(uint *)(lVar38 + 0x20) % (ulonglong)uVar40;
          if ((int)uVar19 == 0) {
            uVar19 = (ulonglong)uVar40;
          }
          bVar9 = true;
          uVar32 = (uint)uVar19;
          uVar31 = uVar32;
          if (uVar26 == 0) goto LAB_00a16f56;
LAB_00a16ee1:
          lVar18 = (**(code **)(*(longlong *)(param_1 + 8) + 0x40))
                             (param_1,*(undefined8 *)(lVar3 + 0x88 + local_188 * 8),
                              (uVar26 - 1) * uVar40,uVar31 + uVar40,0);
          lVar18 = lVar18 + (longlong)*(int *)(lVar38 + 0xc) * 8;
          bVar8 = false;
        }
        if (0 < (int)uVar32) {
          puVar4 = *(ushort **)(lVar38 + 0x50);
          uVar1 = *puVar4;
          pcVar5 = *(code **)(*(longlong *)(param_1 + 600) + 8 + local_188 * 8);
          iVar10 = (uint)uVar1 + (uint)uVar1 * 8;
          iVar11 = (uint)puVar4[2] * 0x80;
          iVar20 = (uint)puVar4[2] << 8;
          iVar12 = (uint)puVar4[9] * 0x80;
          iVar29 = (uint)puVar4[9] << 8;
          iVar13 = (uint)puVar4[0x10] * 0x80;
          iVar35 = (uint)puVar4[0x10] << 8;
          iVar14 = (uint)puVar4[8] * 0x80;
          iVar34 = (uint)puVar4[8] << 8;
          iVar15 = (uint)puVar4[1] * 0x80;
          iVar33 = (uint)puVar4[1] << 8;
          lVar6 = *(longlong *)(lVar3 + 0xd8);
          local_130 = *(longlong *)(param_2 + local_188 * 8);
          uVar19 = 0;
          do {
            psVar21 = *(short **)(lVar18 + uVar19 * 8);
            if ((!bVar8) || (psVar37 = psVar21, uVar19 != 0)) {
              psVar37 = *(short **)(lVar18 + -8 + uVar19 * 8);
            }
            if ((!bVar9) || (psVar25 = psVar21, uVar19 != uVar32 - 1)) {
              psVar25 = *(short **)(lVar18 + 8 + uVar19 * 8);
            }
            local_19c = (int)*psVar37;
            local_198 = (int)*psVar25;
            uVar40 = *(int *)(lVar38 + 0x1c) - 1;
            uVar26 = 0;
            iVar28 = 0;
            iVar36 = (int)*psVar21;
            local_190 = local_198;
            local_18c = local_19c;
            iVar27 = (int)*psVar21;
            do {
              iVar30 = iVar36;
              iVar23 = local_18c;
              iVar17 = local_190;
              iVar24 = local_198;
              iVar39 = local_19c;
              psVar37 = psVar37 + 0x40;
              psVar25 = psVar25 + 0x40;
              local_19c = local_18c;
              local_198 = local_190;
              FUN_00a1bd00(psVar21,local_c8,1);
              iVar36 = iVar30;
              if (uVar26 < uVar40) {
                local_18c = (int)*psVar37;
                iVar36 = (int)psVar21[0x40];
                local_190 = (int)*psVar25;
              }
              iVar22 = *(int *)(lVar6 + 4 + local_188 * 0x18);
              if ((iVar22 != 0) && (local_c6 == 0)) {
                iVar16 = (iVar27 - iVar36) * (uint)uVar1 * 0x24;
                if (iVar16 < 0) {
                  iVar16 = (iVar15 - iVar16) / iVar33;
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar16)) {
                    iVar16 = iVar22 + -1;
                  }
                  local_c6 = -(short)iVar16;
                }
                else {
                  lVar7 = (longlong)(iVar16 + iVar15) / (longlong)iVar33;
                  local_c6 = (short)lVar7;
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= (int)lVar7)) {
                    local_c6 = (short)iVar22 + -1;
                  }
                }
              }
              iVar22 = *(int *)(lVar6 + 8 + local_188 * 0x18);
              if ((iVar22 != 0) && (local_b8 == 0)) {
                iVar16 = (iVar23 - iVar17) * (uint)uVar1 * 0x24;
                if (iVar16 < 0) {
                  iVar16 = (iVar14 - iVar16) / iVar34;
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= iVar16)) {
                    iVar16 = iVar22 + -1;
                  }
                  local_b8 = -(short)iVar16;
                }
                else {
                  lVar7 = (longlong)(iVar16 + iVar14) / (longlong)iVar34;
                  local_b8 = (short)lVar7;
                  if ((0 < iVar22) && (iVar22 = 1 << ((byte)iVar22 & 0x1f), iVar22 <= (int)lVar7)) {
                    local_b8 = (short)iVar22 + -1;
                  }
                }
              }
              iVar22 = *(int *)(lVar6 + 0xc + local_188 * 0x18);
              if ((iVar22 != 0) && (local_a8 == 0)) {
                iVar17 = (iVar23 + iVar30 * -2 + iVar17) * iVar10;
                if (iVar17 < 0) {
                  iVar17 = (iVar13 - iVar17) / iVar35;
                  if ((0 < iVar22) && (iVar23 = 1 << ((byte)iVar22 & 0x1f), iVar23 <= iVar17)) {
                    iVar17 = iVar23 + -1;
                  }
                  local_a8 = -(short)iVar17;
                }
                else {
                  lVar7 = (longlong)(iVar17 + iVar13) / (longlong)iVar35;
                  local_a8 = (short)lVar7;
                  if ((0 < iVar22) && (iVar17 = 1 << ((byte)iVar22 & 0x1f), iVar17 <= (int)lVar7)) {
                    local_a8 = (short)iVar17 + -1;
                  }
                }
              }
              iVar17 = *(int *)(lVar6 + 0x10 + local_188 * 0x18);
              if ((iVar17 != 0) && (local_b6 == 0)) {
                iVar39 = (((iVar39 - iVar24) - local_18c) + local_190) *
                         ((uint)uVar1 + (uint)uVar1 * 4);
                if (iVar39 < 0) {
                  iVar39 = (iVar12 - iVar39) / iVar29;
                  if ((0 < iVar17) && (iVar24 = 1 << ((byte)iVar17 & 0x1f), iVar24 <= iVar39)) {
                    iVar39 = iVar24 + -1;
                  }
                  local_b6 = -(short)iVar39;
                }
                else {
                  lVar7 = (longlong)(iVar39 + iVar12) / (longlong)iVar29;
                  local_b6 = (short)lVar7;
                  if ((0 < iVar17) && (iVar39 = 1 << ((byte)iVar17 & 0x1f), iVar39 <= (int)lVar7)) {
                    local_b6 = (short)iVar39 + -1;
                  }
                }
              }
              iVar39 = *(int *)(lVar6 + 0x14 + local_188 * 0x18);
              if ((iVar39 != 0) && (local_c4 == 0)) {
                iVar27 = (iVar27 + iVar30 * -2 + iVar36) * iVar10;
                if (iVar27 < 0) {
                  iVar27 = (iVar11 - iVar27) / iVar20;
                  if ((0 < iVar39) && (iVar39 = 1 << ((byte)iVar39 & 0x1f), iVar39 <= iVar27)) {
                    iVar27 = iVar39 + -1;
                  }
                  local_c4 = -(short)iVar27;
                }
                else {
                  lVar7 = (longlong)(iVar27 + iVar11) / (longlong)iVar20;
                  local_c4 = (short)lVar7;
                  if ((0 < iVar39) && (iVar27 = 1 << ((byte)iVar39 & 0x1f), iVar27 <= (int)lVar7)) {
                    local_c4 = (short)iVar27 + -1;
                  }
                }
              }
              (*pcVar5)(param_1,lVar38,local_c8,local_130,iVar28);
              psVar21 = psVar21 + 0x40;
              iVar28 = iVar28 + *(int *)(lVar38 + 0x24);
              uVar26 = uVar26 + 1;
              iVar27 = iVar30;
            } while (uVar26 <= uVar40);
            local_130 = local_130 + (longlong)*(int *)(lVar38 + 0x24) * 8;
            uVar19 = uVar19 + 1;
          } while (uVar19 != uVar32);
        }
      }
      local_188 = local_188 + 1;
      lVar38 = lVar38 + 0x60;
    } while (local_188 < *(int *)(param_1 + 0x38));
  }
  uVar26 = *(int *)(param_1 + 0xb8) + 1;
  *(uint *)(param_1 + 0xb8) = uVar26;
  return 4 - (uint)(uVar26 < *(uint *)(param_1 + 0x1a4));
}

