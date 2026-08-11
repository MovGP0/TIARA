/* Ghidra address: 00a0f3f0 */
/* Ghidra symbol: FUN_00a0f3f0 */


undefined8 FUN_00a0f3f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int local_58;
  int local_54;
  longlong local_50;
  longlong local_48;
  
  lVar3 = *(longlong *)(param_1 + 0x250);
  iVar8 = *(int *)(param_1 + 0x210);
  uVar2 = *(undefined4 *)(param_1 + 0x218);
  if ((*(int *)(param_1 + 0x170) != 0) && (*(int *)(lVar3 + 0x34) == 0)) {
    lVar9 = *(longlong *)(param_1 + 0x248);
    piVar1 = (int *)(lVar9 + 0x24);
    *piVar1 = *piVar1 + ((int)(((uint)(*(int *)(lVar3 + 0x1c) >> 0x1f) >> 0x1d) +
                              *(int *)(lVar3 + 0x1c)) >> 3);
    *(undefined4 *)(lVar3 + 0x1c) = 0;
    iVar6 = (**(code **)(lVar9 + 0x10))(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar9 = 0;
      do {
        *(undefined4 *)(lVar3 + 0x24 + lVar9 * 4) = 0;
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x1b0));
    }
    *(undefined4 *)(lVar3 + 0x20) = 0;
    *(undefined4 *)(lVar3 + 0x34) = *(undefined4 *)(param_1 + 0x170);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar3 + 0x10) = 0;
      iVar6 = *(int *)(lVar3 + 0x10);
      goto joined_r0x00a0f42f;
    }
  }
  iVar6 = *(int *)(lVar3 + 0x10);
joined_r0x00a0f42f:
  if (iVar6 == 0) {
    if (*(int *)(lVar3 + 0x20) == 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x28);
      local_68 = *puVar4;
      uStack_64 = puVar4[1];
      uStack_60 = puVar4[2];
      uStack_5c = puVar4[3];
      iVar6 = *(int *)(lVar3 + 0x18);
      iVar14 = *(int *)(lVar3 + 0x1c);
      iVar15 = *(int *)(param_1 + 0x20c);
      iVar11 = 0;
      if (iVar15 <= iVar8) {
        local_48 = *param_2;
        lVar9 = *(longlong *)(lVar3 + 0x58);
        local_50 = param_1;
        do {
          if (iVar14 < 8) {
            iVar6 = FUN_00a10240(&local_68,iVar6,iVar14,0);
            if (iVar6 == 0) {
              return 0;
            }
            iVar6 = local_58;
            iVar14 = local_54;
            if (7 < local_54) goto LAB_00a0f54f;
LAB_00a0f585:
            uVar12 = FUN_00a10390(&local_68);
            iVar14 = local_54;
            iVar6 = local_58;
            if ((int)uVar12 < 0) {
              return 0;
            }
          }
          else {
LAB_00a0f54f:
            uVar10 = (ulonglong)(iVar6 >> ((char)iVar14 - 8U & 0x1f) & 0xff);
            iVar11 = *(int *)(lVar9 + 0x98 + uVar10 * 4);
            if (iVar11 == 0) goto LAB_00a0f585;
            uVar12 = (uint)*(byte *)(lVar9 + 0x498 + uVar10);
            iVar14 = iVar14 - iVar11;
          }
          iVar13 = (int)uVar12 >> 4;
          uVar12 = uVar12 & 0xf;
          if (uVar12 == 0) {
            if (iVar13 != 0xf) {
              iVar11 = 1 << ((byte)iVar13 & 0x1f);
              if (iVar13 != 0) {
                if ((iVar14 < iVar13) &&
                   (iVar8 = FUN_00a10240(&local_68,iVar6,iVar14,iVar13), iVar14 = local_54,
                   iVar6 = local_58, iVar8 == 0)) {
                  return 0;
                }
                iVar14 = iVar14 - iVar13;
                iVar11 = (iVar11 - 1U & iVar6 >> ((byte)iVar14 & 0x1f)) + iVar11;
              }
              iVar11 = iVar11 + -1;
              goto LAB_00a0f68e;
            }
            iVar13 = iVar15 + 0xf;
          }
          else {
            if ((iVar14 < (int)uVar12) &&
               (iVar11 = FUN_00a10240(&local_68,iVar6,iVar14,uVar12), iVar14 = local_54,
               iVar6 = local_58, iVar11 == 0)) {
              return 0;
            }
            iVar13 = iVar13 + iVar15;
            iVar14 = iVar14 - uVar12;
            uVar7 = (1 << (sbyte)uVar12) - 1U & iVar6 >> ((byte)iVar14 & 0x1f);
            if ((int)uVar7 < *(int *)(&DAT_01e6ef50 + (ulonglong)uVar12 * 4)) {
              uVar7 = uVar7 + *(int *)(&DAT_01e6ef90 + (ulonglong)uVar12 * 4);
            }
            *(short *)(local_48 + (longlong)(int)(&DAT_01e6fbe0)[iVar13] * 2) =
                 (short)(uVar7 << ((byte)uVar2 & 0x1f));
          }
          iVar15 = iVar13 + 1;
        } while (iVar13 < iVar8);
        iVar11 = 0;
      }
LAB_00a0f68e:
      puVar5 = *(undefined8 **)(param_1 + 0x28);
      *puVar5 = CONCAT44(uStack_64,local_68);
      puVar5[1] = CONCAT44(uStack_5c,uStack_60);
      *(int *)(lVar3 + 0x18) = iVar6;
      *(int *)(lVar3 + 0x1c) = iVar14;
    }
    else {
      iVar11 = *(int *)(lVar3 + 0x20) + -1;
    }
    *(int *)(lVar3 + 0x20) = iVar11;
  }
  *(int *)(lVar3 + 0x34) = *(int *)(lVar3 + 0x34) + -1;
  return 1;
}

