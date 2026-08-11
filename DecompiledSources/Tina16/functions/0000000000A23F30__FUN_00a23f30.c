/* Ghidra address: 00a23f30 */
/* Ghidra symbol: FUN_00a23f30 */


undefined8 FUN_00a23f30(longlong *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  longlong lVar15;
  int iVar16;
  uint uVar17;
  
  lVar2 = param_1[0x3e];
  lVar10 = param_1[0x35];
  puVar3 = (undefined4 *)param_1[5];
  uVar6 = puVar3[1];
  uVar7 = puVar3[2];
  uVar8 = puVar3[3];
  *(undefined4 *)(lVar2 + 0x20) = *puVar3;
  *(undefined4 *)(lVar2 + 0x24) = uVar6;
  *(undefined4 *)(lVar2 + 0x28) = uVar7;
  *(undefined4 *)(lVar2 + 0x2c) = uVar8;
  if (((int)param_1[0x23] == 0) || (*(int *)(lVar2 + 0x68) != 0)) {
    iVar13 = (int)param_1[0x2e];
  }
  else {
    FUN_00a248a0(lVar2,*(undefined4 *)(lVar2 + 0x6c));
    iVar13 = (int)param_1[0x2e];
  }
  if (0 < iVar13) {
    lVar15 = 0;
    do {
      lVar12 = (longlong)*(int *)((longlong)param_1 + lVar15 * 4 + 0x174);
      lVar4 = param_1[lVar12 + 0x29];
      iVar13 = (int)**(short **)(param_2 + lVar15 * 8) >> ((byte)(int)lVar10 & 0x1f);
      iVar16 = iVar13 - *(int *)(lVar2 + 0x40 + lVar12 * 4);
      uVar11 = iVar16 >> 0x1f;
      uVar17 = iVar16 + uVar11;
      *(int *)(lVar2 + 0x40 + lVar12 * 4) = iVar13;
      uVar11 = uVar11 ^ uVar17;
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = 0x1f;
        if (uVar11 != 0) {
          for (; uVar11 >> uVar14 == 0; uVar14 = uVar14 - 1) {
          }
        }
        uVar14 = (uVar14 ^ 0xffffffe0) + 0x21;
        if (0xb < uVar14) {
          puVar5 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar5 + 5) = 6;
          (*(code *)*puVar5)(param_1);
        }
      }
      if (*(int *)(lVar2 + 0x18) == 0) {
        lVar4 = *(longlong *)(lVar2 + 0x70 + (longlong)*(int *)(lVar4 + 0x14) * 8);
        FUN_00a249a0(lVar2,*(undefined4 *)(lVar4 + (longlong)(int)uVar14 * 4),
                     (int)*(char *)(lVar4 + 0x400 + (longlong)(int)uVar14));
      }
      else {
        piVar1 = (int *)(*(longlong *)(lVar2 + 0x90 + (longlong)*(int *)(lVar4 + 0x14) * 8) +
                        (longlong)(int)uVar14 * 4);
        *piVar1 = *piVar1 + 1;
      }
      if (uVar14 != 0) {
        FUN_00a249a0(lVar2,uVar17,uVar14);
      }
      lVar15 = lVar15 + 1;
    } while (lVar15 < (int)param_1[0x2e]);
  }
  puVar5 = (undefined8 *)param_1[5];
  uVar9 = *(undefined8 *)(lVar2 + 0x28);
  *puVar5 = *(undefined8 *)(lVar2 + 0x20);
  puVar5[1] = uVar9;
  iVar13 = (int)param_1[0x23];
  if (iVar13 != 0) {
    iVar16 = *(int *)(lVar2 + 0x68);
    if (*(int *)(lVar2 + 0x68) == 0) {
      *(int *)(lVar2 + 0x68) = iVar13;
      *(uint *)(lVar2 + 0x6c) = *(int *)(lVar2 + 0x6c) + 1U & 7;
      iVar16 = iVar13;
    }
    *(int *)(lVar2 + 0x68) = iVar16 + -1;
  }
  return 1;
}

