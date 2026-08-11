/* Ghidra address: 00a0f850 */
/* Ghidra symbol: FUN_00a0f850 */


undefined8 FUN_00a0f850(longlong *param_1,longlong *param_2)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  int *piVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  int local_188;
  uint local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  uint local_168;
  uint local_164;
  longlong *local_160;
  longlong *local_158;
  longlong local_150;
  int aiStack_148 [66];
  
  lVar12 = param_1[0x4a];
  iVar2 = (int)param_1[0x42];
  uVar17 = 1 << (*(byte *)(param_1 + 0x43) & 0x1f);
  uVar5 = -1 << (*(byte *)(param_1 + 0x43) & 0x1f);
  if (((int)param_1[0x2e] != 0) && (*(int *)(lVar12 + 0x34) == 0)) {
    lVar10 = param_1[0x49];
    piVar15 = (int *)(lVar10 + 0x24);
    *piVar15 = *piVar15 +
               ((int)(((uint)(*(int *)(lVar12 + 0x1c) >> 0x1f) >> 0x1d) + *(int *)(lVar12 + 0x1c))
               >> 3);
    *(undefined4 *)(lVar12 + 0x1c) = 0;
    iVar18 = (**(code **)(lVar10 + 0x10))(param_1);
    if (iVar18 == 0) {
      return 0;
    }
    if (0 < (int)param_1[0x36]) {
      lVar10 = 0;
      do {
        *(undefined4 *)(lVar12 + 0x24 + lVar10 * 4) = 0;
        lVar10 = lVar10 + 1;
      } while (lVar10 < (int)param_1[0x36]);
    }
    *(undefined4 *)(lVar12 + 0x20) = 0;
    *(int *)(lVar12 + 0x34) = (int)param_1[0x2e];
    if (*(int *)((longlong)param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar12 + 0x10) = 0;
      iVar18 = *(int *)(lVar12 + 0x10);
      goto joined_r0x00a0f8b2;
    }
  }
  iVar18 = *(int *)(lVar12 + 0x10);
joined_r0x00a0f8b2:
  if (iVar18 == 0) {
    puVar3 = (undefined4 *)param_1[5];
    local_178 = *puVar3;
    uStack_174 = puVar3[1];
    uStack_170 = puVar3[2];
    uStack_16c = puVar3[3];
    uVar20 = *(uint *)(lVar12 + 0x18);
    uVar13 = *(uint *)(lVar12 + 0x1c);
    iVar18 = *(int *)(lVar12 + 0x20);
    lVar10 = *param_2;
    local_188 = *(int *)((longlong)param_1 + 0x20c);
    iVar19 = 0;
    local_160 = param_1;
    local_158 = param_1;
    if (iVar18 == 0) {
      iVar18 = 0;
      if (local_188 <= iVar2) {
        local_150 = *(longlong *)(lVar12 + 0x58);
        iVar19 = 0;
        do {
          lVar14 = local_150;
          param_1 = local_158;
          if ((int)uVar13 < 8) {
            iVar18 = FUN_00a10240(&local_178,uVar20,uVar13,0);
            if (iVar18 == 0) goto LAB_00a0fd0d;
            uVar7 = 1;
            uVar20 = local_168;
            uVar13 = local_164;
            if (7 < (int)local_164) goto LAB_00a0fad5;
LAB_00a0fafc:
            uVar8 = FUN_00a10390(&local_178,uVar20,uVar13,lVar14,uVar7);
            uVar20 = local_168;
            uVar13 = local_164;
            if ((int)uVar8 < 0) goto LAB_00a0fd0d;
          }
          else {
LAB_00a0fad5:
            uVar11 = (ulonglong)((int)uVar20 >> ((char)uVar13 - 8U & 0x1f) & 0xff);
            iVar18 = *(int *)(lVar14 + 0x98 + uVar11 * 4);
            if (iVar18 == 0) {
              uVar7 = 9;
              goto LAB_00a0fafc;
            }
            uVar8 = (uint)*(byte *)(lVar14 + 0x498 + uVar11);
            uVar13 = uVar13 - iVar18;
          }
          iVar6 = (int)uVar8 >> 4;
          if ((uVar8 & 0xf) == 0) {
            local_17c = 0;
            if (iVar6 != 0xf) {
              iVar18 = 1 << ((byte)iVar6 & 0x1f);
              if (iVar6 == 0) goto LAB_00a0f8ee;
              if (((int)uVar13 < iVar6) &&
                 (iVar9 = FUN_00a10240(&local_178,uVar20,uVar13,iVar6), uVar20 = local_168,
                 uVar13 = local_164, iVar9 == 0)) goto LAB_00a0fd0d;
              uVar13 = uVar13 - iVar6;
              iVar18 = iVar18 + (iVar18 - 1U & (int)uVar20 >> ((byte)uVar13 & 0x1f));
              if (iVar18 != 0) goto LAB_00a0f8ee;
              break;
            }
          }
          else {
            if (((byte)uVar8 & 0xf) != 1) {
              lVar14 = *param_1;
              *(undefined4 *)(lVar14 + 0x28) = 0x76;
              (**(code **)(lVar14 + 8))(param_1,0xffffffff);
            }
            if (((int)uVar13 < 1) &&
               (iVar18 = FUN_00a10240(&local_178,uVar20,uVar13,1), uVar20 = local_168,
               uVar13 = local_164, iVar18 == 0)) goto LAB_00a0fd0d;
            uVar13 = uVar13 - 1;
            local_17c = uVar17;
            if ((uVar20 >> (uVar13 & 0x1f) & 1) == 0) {
              local_17c = uVar5;
            }
          }
          piVar15 = &DAT_01e6fbe0 + local_188;
          lVar14 = (longlong)local_188 + -1;
          do {
            lVar16 = (longlong)*piVar15;
            if (*(short *)(lVar10 + lVar16 * 2) == 0) {
              if (iVar6 < 1) break;
              iVar6 = iVar6 + -1;
            }
            else {
              if (((int)uVar13 < 1) &&
                 (iVar18 = FUN_00a10240(&local_178,uVar20,uVar13,1), uVar20 = local_168,
                 uVar13 = local_164, iVar18 == 0)) goto LAB_00a0fd0d;
              uVar13 = uVar13 - 1;
              if (((uVar20 >> (uVar13 & 0x1f) & 1) != 0) &&
                 (sVar1 = *(short *)(lVar10 + lVar16 * 2), (uVar17 & (int)sVar1) == 0)) {
                uVar8 = uVar17;
                if (sVar1 < 0) {
                  uVar8 = uVar5;
                }
                *(short *)(lVar10 + lVar16 * 2) = (short)uVar8 + sVar1;
              }
            }
            lVar14 = lVar14 + 1;
            piVar15 = piVar15 + 1;
          } while (lVar14 < iVar2);
          iVar18 = (int)lVar14 + 1;
          if (local_17c != 0) {
            iVar6 = (&DAT_01e6fbe0)[iVar18];
            *(short *)(lVar10 + (longlong)iVar6 * 2) = (short)local_17c;
            lVar16 = (longlong)iVar19;
            iVar19 = iVar19 + 1;
            aiStack_148[lVar16] = iVar6;
          }
          local_188 = (int)lVar14 + 2;
          param_1 = local_158;
        } while (iVar18 < iVar2);
        iVar18 = 0;
      }
    }
    else {
LAB_00a0f8ee:
      if (local_188 <= iVar2) {
        piVar15 = &DAT_01e6fbe0 + local_188;
        lVar14 = (longlong)local_188 + -1;
        do {
          lVar16 = (longlong)*piVar15;
          if (*(short *)(lVar10 + lVar16 * 2) != 0) {
            if (((int)uVar13 < 1) &&
               (iVar6 = FUN_00a10240(&local_178,uVar20,uVar13,1), uVar20 = local_168,
               uVar13 = local_164, iVar6 == 0)) {
LAB_00a0fd0d:
              if (iVar19 < 1) {
                return 0;
              }
              lVar12 = (longlong)iVar19 + 1;
              do {
                *(undefined2 *)(lVar10 + (longlong)aiStack_148[lVar12 + -2] * 2) = 0;
                lVar12 = lVar12 + -1;
              } while (1 < lVar12);
              return 0;
            }
            uVar13 = uVar13 - 1;
            if (((uVar20 >> (uVar13 & 0x1f) & 1) != 0) &&
               (sVar1 = *(short *)(lVar10 + lVar16 * 2), (uVar17 & (int)sVar1) == 0)) {
              uVar8 = uVar17;
              if (sVar1 < 0) {
                uVar8 = uVar5;
              }
              *(short *)(lVar10 + lVar16 * 2) = (short)uVar8 + sVar1;
            }
          }
          lVar14 = lVar14 + 1;
          piVar15 = piVar15 + 1;
        } while (lVar14 < iVar2);
      }
      iVar18 = iVar18 + -1;
      param_1 = local_158;
    }
    puVar4 = (undefined8 *)param_1[5];
    *puVar4 = CONCAT44(uStack_174,local_178);
    puVar4[1] = CONCAT44(uStack_16c,uStack_170);
    *(uint *)(lVar12 + 0x18) = uVar20;
    *(uint *)(lVar12 + 0x1c) = uVar13;
    *(int *)(lVar12 + 0x20) = iVar18;
  }
  *(int *)(lVar12 + 0x34) = *(int *)(lVar12 + 0x34) + -1;
  return 1;
}

