/* Ghidra address: 00a12c60 */
/* Ghidra symbol: FUN_00a12c60 */


void FUN_00a12c60(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  undefined8 uVar14;
  longlong lVar15;
  
  lVar5 = *(longlong *)(param_1 + 0x270);
  iVar3 = *(int *)(param_1 + 0x70);
  *(uint *)(lVar5 + 0x38) = (uint)(iVar3 == 1);
  uVar14 = 0x100;
  if (iVar3 == 1) {
    uVar14 = 0x2fe;
  }
  uVar14 = (**(code **)(*(longlong *)(param_1 + 8) + 0x10))
                     (param_1,1,uVar14,*(undefined4 *)(param_1 + 0x90));
  *(undefined8 *)(lVar5 + 0x30) = uVar14;
  if (0 < *(int *)(param_1 + 0x90)) {
    iVar8 = *(int *)(lVar5 + 0x28);
    lVar15 = 0;
    do {
      iVar4 = *(int *)(lVar5 + 0x3c + lVar15 * 4);
      iVar8 = iVar8 / iVar4;
      if (iVar3 == 1) {
        plVar1 = (longlong *)(*(longlong *)(lVar5 + 0x30) + lVar15 * 8);
        *plVar1 = *plVar1 + 0xff;
      }
      puVar6 = *(undefined1 **)(*(longlong *)(lVar5 + 0x30) + lVar15 * 8);
      iVar2 = iVar4 * 2 + -2;
      uVar9 = (longlong)(iVar4 + 0xfe) / (longlong)iVar2 & 0xffffffff;
      lVar12 = 0;
      iVar11 = 0;
      do {
        if ((int)uVar9 < lVar12) {
          iVar13 = iVar11 * 0x1fe + iVar4 + 0x2fc;
          do {
            iVar11 = iVar11 + 1;
            uVar7 = (longlong)iVar13 / (longlong)iVar2;
            uVar9 = uVar7 & 0xffffffff;
            iVar13 = iVar13 + 0x1fe;
          } while ((int)uVar7 < lVar12);
        }
        puVar6[lVar12] = (char)iVar11 * (char)iVar8;
        lVar12 = lVar12 + 1;
      } while (lVar12 != 0x100);
      if (iVar3 == 1) {
        puVar10 = puVar6 + 0x102;
        lVar12 = 0;
        do {
          puVar6[lVar12 + -1] = *puVar6;
          puVar10[-2] = puVar6[0xff];
          puVar6[lVar12 + -2] = *puVar6;
          puVar10[-1] = puVar6[0xff];
          puVar6[lVar12 + -3] = *puVar6;
          *puVar10 = puVar6[0xff];
          lVar12 = lVar12 + -3;
          puVar10 = puVar10 + 3;
        } while (lVar12 != -0xff);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < *(int *)(param_1 + 0x90));
  }
  return;
}

