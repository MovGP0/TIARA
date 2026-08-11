/* Ghidra address: 00a0f160 */
/* Ghidra symbol: FUN_00a0f160 */


undefined8 FUN_00a0f160(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ulonglong uVar11;
  undefined4 *puVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  int local_64;
  longlong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  
  lVar4 = *(longlong *)(param_1 + 0x250);
  uVar3 = *(undefined4 *)(param_1 + 0x218);
  if ((*(int *)(param_1 + 0x170) != 0) && (*(int *)(lVar4 + 0x34) == 0)) {
    lVar13 = *(longlong *)(param_1 + 0x248);
    piVar1 = (int *)(lVar13 + 0x24);
    *piVar1 = *piVar1 + ((int)(((uint)(*(int *)(lVar4 + 0x1c) >> 0x1f) >> 0x1d) +
                              *(int *)(lVar4 + 0x1c)) >> 3);
    *(undefined4 *)(lVar4 + 0x1c) = 0;
    iVar7 = (**(code **)(lVar13 + 0x10))(param_1);
    if (iVar7 == 0) {
      return 0;
    }
    if (0 < *(int *)(param_1 + 0x1b0)) {
      lVar13 = 0;
      do {
        *(undefined4 *)(lVar4 + 0x24 + lVar13 * 4) = 0;
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x1b0));
    }
    *(undefined4 *)(lVar4 + 0x20) = 0;
    *(undefined4 *)(lVar4 + 0x34) = *(undefined4 *)(param_1 + 0x170);
    if (*(int *)(param_1 + 0x21c) == 0) {
      *(undefined4 *)(lVar4 + 0x10) = 0;
      iVar7 = *(int *)(lVar4 + 0x10);
      goto joined_r0x00a0f1a0;
    }
  }
  iVar7 = *(int *)(lVar4 + 0x10);
joined_r0x00a0f1a0:
  if (iVar7 == 0) {
    puVar12 = *(undefined4 **)(param_1 + 0x28);
    local_78 = *puVar12;
    uStack_74 = puVar12[1];
    uStack_70 = puVar12[2];
    uStack_6c = puVar12[3];
    iVar7 = *(int *)(lVar4 + 0x18);
    iVar14 = *(int *)(lVar4 + 0x1c);
    local_48 = *(undefined4 *)(lVar4 + 0x30);
    local_58 = *(undefined8 *)(lVar4 + 0x20);
    uStack_50 = *(undefined8 *)(lVar4 + 0x28);
    if (0 < *(int *)(param_1 + 0x1e0)) {
      lVar13 = 0;
      local_60 = param_1;
      do {
        puVar5 = *(undefined2 **)(param_2 + lVar13 * 8);
        lVar15 = (longlong)*(int *)(param_1 + 0x1e4 + lVar13 * 4);
        lVar6 = *(longlong *)
                 (lVar4 + 0x38 +
                 (longlong)*(int *)(*(longlong *)(param_1 + 0x1b8 + lVar15 * 8) + 0x14) * 8);
        if (iVar14 < 8) {
          iVar7 = FUN_00a10240(&local_78,iVar7,iVar14,0);
          if (iVar7 == 0) {
            return 0;
          }
          iVar7 = local_68;
          iVar14 = local_64;
          if (7 < local_64) goto LAB_00a0f22e;
LAB_00a0f265:
          uVar8 = FUN_00a10390(&local_78);
          if ((int)uVar8 < 0) {
            return 0;
          }
          iVar7 = local_68;
          iVar14 = local_64;
          if (uVar8 == 0) goto LAB_00a0f253;
LAB_00a0f28d:
          if ((iVar14 < (int)uVar8) &&
             (iVar10 = FUN_00a10240(&local_78,iVar7,iVar14,uVar8), iVar7 = local_68,
             iVar14 = local_64, iVar10 == 0)) {
            return 0;
          }
          iVar14 = iVar14 - uVar8;
          uVar9 = (1 << ((byte)uVar8 & 0x1f)) - 1U & iVar7 >> ((byte)iVar14 & 0x1f);
          if ((int)uVar9 < *(int *)(&DAT_01e6ef50 + (longlong)(int)uVar8 * 4)) {
            uVar9 = uVar9 + *(int *)(&DAT_01e6ef90 + (longlong)(int)uVar8 * 4);
          }
        }
        else {
LAB_00a0f22e:
          uVar11 = (ulonglong)(iVar7 >> ((char)iVar14 - 8U & 0x1f) & 0xff);
          iVar10 = *(int *)(lVar6 + 0x98 + uVar11 * 4);
          if (iVar10 == 0) goto LAB_00a0f265;
          iVar14 = iVar14 - iVar10;
          bVar2 = *(byte *)(lVar6 + 0x498 + uVar11);
          uVar8 = (uint)bVar2;
          if (bVar2 != 0) goto LAB_00a0f28d;
LAB_00a0f253:
          uVar9 = 0;
        }
        iVar10 = uVar9 + *(int *)((longlong)&local_58 + lVar15 * 4 + 4);
        *(int *)((longlong)&local_58 + lVar15 * 4 + 4) = iVar10;
        *puVar5 = (short)(iVar10 << ((byte)uVar3 & 0x1f));
        lVar13 = lVar13 + 1;
      } while (lVar13 < *(int *)(param_1 + 0x1e0));
      puVar12 = *(undefined4 **)(param_1 + 0x28);
    }
    *puVar12 = local_78;
    puVar12[1] = uStack_74;
    puVar12[2] = uStack_70;
    puVar12[3] = uStack_6c;
    *(int *)(lVar4 + 0x18) = iVar7;
    *(int *)(lVar4 + 0x1c) = iVar14;
    *(undefined4 *)(lVar4 + 0x30) = local_48;
    *(undefined8 *)(lVar4 + 0x20) = local_58;
    *(undefined8 *)(lVar4 + 0x28) = uStack_50;
  }
  *(int *)(lVar4 + 0x34) = *(int *)(lVar4 + 0x34) + -1;
  return 1;
}

