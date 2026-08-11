/* Ghidra address: 00a1f400 */
/* Ghidra symbol: FUN_00a1f400 */


void FUN_00a1f400(longlong *param_1,int param_2,int param_3)

{
  longlong *plVar1;
  byte bVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined1 *puVar13;
  int iVar14;
  uint uVar15;
  
  iVar10 = param_2;
  lVar4 = (longlong)param_2 + 0x10;
  if (param_3 != 0) {
    iVar10 = param_2 + 0x10;
    lVar4 = (longlong)param_2 + 0x14;
  }
  lVar4 = param_1[lVar4];
  if (lVar4 == 0) {
    lVar12 = *param_1;
    *(undefined4 *)(lVar12 + 0x28) = 0x32;
    *(int *)(lVar12 + 0x2c) = iVar10;
    (**(code **)*param_1)(param_1);
    iVar8 = iRam0000000000000114;
  }
  else {
    iVar8 = *(int *)(lVar4 + 0x114);
  }
  if (iVar8 == 0) {
    puVar5 = (undefined8 *)param_1[5];
    puVar13 = (undefined1 *)*puVar5;
    *puVar5 = puVar13 + 1;
    *puVar13 = 0xff;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar8 = (*(code *)puVar5[3])(param_1), iVar8 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)param_1[5];
    puVar13 = (undefined1 *)*puVar5;
    *puVar5 = puVar13 + 1;
    *puVar13 = 0xc4;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar8 = (*(code *)puVar5[3])(param_1), iVar8 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    iVar14 = (uint)*(byte *)(lVar4 + 0xf) +
             (uint)*(byte *)(lVar4 + 0xe) +
             (uint)*(byte *)(lVar4 + 0xd) +
             (uint)*(byte *)(lVar4 + 0xc) +
             (uint)*(byte *)(lVar4 + 0xb) +
             (uint)*(byte *)(lVar4 + 10) +
             (uint)*(byte *)(lVar4 + 9) +
             (uint)*(byte *)(lVar4 + 8) +
             (uint)*(byte *)(lVar4 + 7) +
             (uint)*(byte *)(lVar4 + 6) +
             (uint)*(byte *)(lVar4 + 5) +
             (uint)*(byte *)(lVar4 + 4) +
             (uint)*(byte *)(lVar4 + 3) + (uint)*(byte *)(lVar4 + 2) + (uint)*(byte *)(lVar4 + 1);
    bVar2 = *(byte *)(lVar4 + 0x10);
    iVar8 = bVar2 + 0x13 + iVar14;
    plVar6 = (longlong *)param_1[5];
    puVar13 = (undefined1 *)*plVar6;
    *plVar6 = (longlong)(puVar13 + 1);
    *puVar13 = (char)((uint)iVar8 >> 8);
    plVar1 = plVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar6[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    plVar6 = (longlong *)param_1[5];
    puVar13 = (undefined1 *)*plVar6;
    *plVar6 = (longlong)(puVar13 + 1);
    *puVar13 = (char)iVar8;
    plVar1 = plVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar8 = (*(code *)plVar6[3])(param_1), iVar8 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    plVar6 = (longlong *)param_1[5];
    puVar13 = (undefined1 *)*plVar6;
    *plVar6 = (longlong)(puVar13 + 1);
    *puVar13 = (char)iVar10;
    plVar1 = plVar6 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar6[3])(param_1), iVar10 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    uVar15 = iVar14 + (uint)bVar2;
    lVar12 = 0;
    do {
      uVar3 = *(undefined1 *)(lVar4 + 1 + lVar12);
      plVar6 = (longlong *)param_1[5];
      puVar13 = (undefined1 *)*plVar6;
      *plVar6 = (longlong)(puVar13 + 1);
      *puVar13 = uVar3;
      plVar1 = plVar6 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar6[3])(param_1), iVar10 == 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x18;
        (*(code *)*puVar5)(param_1);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 0x10);
    if (uVar15 != 0) {
      uVar11 = (ulonglong)uVar15;
      puVar13 = (undefined1 *)(lVar4 + 0x11);
      do {
        uVar3 = *puVar13;
        plVar6 = (longlong *)param_1[5];
        puVar7 = (undefined1 *)*plVar6;
        *plVar6 = (longlong)(puVar7 + 1);
        *puVar7 = uVar3;
        plVar1 = plVar6 + 1;
        *plVar1 = *plVar1 + -1;
        if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar6[3])(param_1), iVar10 == 0)) {
          puVar5 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar5 + 5) = 0x18;
          (*(code *)*puVar5)(param_1);
        }
        puVar13 = puVar13 + 1;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    *(undefined4 *)(lVar4 + 0x114) = 1;
  }
  return;
}

