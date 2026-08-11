/* Ghidra address: 00a1e660 */
/* Ghidra symbol: FUN_00a1e660 */


void FUN_00a1e660(longlong *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  
  lVar14 = param_1[0x3a];
  if ((*(int *)((longlong)param_1 + 0x104) == 0) && (0 < *(int *)((longlong)param_1 + 0x144))) {
    lVar13 = 0;
    do {
      lVar4 = param_1[lVar13 + 0x29];
      if (*(int *)((longlong)param_1 + 0x134) == 0) {
        FUN_00a1f400(param_1,*(undefined4 *)(lVar4 + 0x14),0);
LAB_00a1e6ce:
        uVar3 = *(undefined4 *)(lVar4 + 0x18);
        uVar15 = 1;
LAB_00a1e6d7:
        FUN_00a1f400(param_1,uVar3,uVar15);
      }
      else {
        if (*(int *)((longlong)param_1 + 0x19c) != 0) goto LAB_00a1e6ce;
        if (*(int *)((longlong)param_1 + 0x1a4) == 0) {
          uVar3 = *(undefined4 *)(lVar4 + 0x14);
          uVar15 = 0;
          goto LAB_00a1e6d7;
        }
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 < *(int *)((longlong)param_1 + 0x144));
  }
  if ((int)param_1[0x23] != *(int *)(lVar14 + 0x38)) {
    puVar5 = (undefined8 *)param_1[5];
    puVar6 = (undefined1 *)*puVar5;
    *puVar5 = puVar6 + 1;
    *puVar6 = 0xff;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar11 = (*(code *)puVar5[3])(param_1), iVar11 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)param_1[5];
    puVar6 = (undefined1 *)*puVar5;
    *puVar5 = puVar6 + 1;
    *puVar6 = 0xdd;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar11 = (*(code *)puVar5[3])(param_1), iVar11 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)param_1[5];
    puVar6 = (undefined1 *)*puVar5;
    *puVar5 = puVar6 + 1;
    *puVar6 = 0;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar11 = (*(code *)puVar5[3])(param_1), iVar11 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)param_1[5];
    puVar6 = (undefined1 *)*puVar5;
    *puVar5 = puVar6 + 1;
    *puVar6 = 4;
    plVar1 = puVar5 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar11 = (*(code *)puVar5[3])(param_1), iVar11 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    lVar13 = param_1[0x23];
    plVar7 = (longlong *)param_1[5];
    puVar6 = (undefined1 *)*plVar7;
    *plVar7 = (longlong)(puVar6 + 1);
    *puVar6 = (char)((uint)(int)lVar13 >> 8);
    plVar1 = plVar7 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    plVar7 = (longlong *)param_1[5];
    puVar6 = (undefined1 *)*plVar7;
    *plVar7 = (longlong)(puVar6 + 1);
    *puVar6 = (char)(int)lVar13;
    plVar1 = plVar7 + 1;
    *plVar1 = *plVar1 + -1;
    if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    *(int *)(lVar14 + 0x38) = (int)param_1[0x23];
  }
  puVar5 = (undefined8 *)param_1[5];
  puVar6 = (undefined1 *)*puVar5;
  *puVar5 = puVar6 + 1;
  *puVar6 = 0xff;
  plVar1 = puVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)puVar5[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)param_1[5];
  puVar6 = (undefined1 *)*puVar5;
  *puVar5 = puVar6 + 1;
  *puVar6 = 0xda;
  plVar1 = puVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)puVar5[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  iVar11 = *(int *)((longlong)param_1 + 0x144) * 2 + 6;
  plVar7 = (longlong *)param_1[5];
  puVar6 = (undefined1 *)*plVar7;
  *plVar7 = (longlong)(puVar6 + 1);
  *puVar6 = (char)((uint)iVar11 >> 8);
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar12 = (*(code *)plVar7[3])(param_1), iVar12 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  plVar7 = (longlong *)param_1[5];
  puVar6 = (undefined1 *)*plVar7;
  *plVar7 = (longlong)(puVar6 + 1);
  *puVar6 = (char)iVar11;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x144);
  plVar7 = (longlong *)param_1[5];
  puVar6 = (undefined1 *)*plVar7;
  *plVar7 = (longlong)(puVar6 + 1);
  *puVar6 = uVar2;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  if (0 < *(int *)((longlong)param_1 + 0x144)) {
    lVar14 = 0;
    do {
      puVar6 = (undefined1 *)param_1[lVar14 + 0x29];
      uVar2 = *puVar6;
      plVar7 = (longlong *)param_1[5];
      puVar8 = (undefined1 *)*plVar7;
      *plVar7 = (longlong)(puVar8 + 1);
      *puVar8 = uVar2;
      plVar1 = plVar7 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(), iVar11 == 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x18;
        (*(code *)*puVar5)();
      }
      iVar11 = *(int *)(puVar6 + 0x14);
      iVar12 = iVar11;
      cVar10 = (char)*(undefined4 *)(puVar6 + 0x18);
      if ((*(int *)((longlong)param_1 + 0x134) != 0) &&
         (iVar12 = 0, *(int *)((longlong)param_1 + 0x19c) == 0)) {
        iVar12 = iVar11;
        cVar10 = '\0';
        if ((*(int *)((longlong)param_1 + 0x1a4) != 0) && (*(int *)((longlong)param_1 + 0x104) == 0)
           ) {
          iVar12 = 0;
          cVar10 = '\0';
        }
      }
      plVar7 = (longlong *)param_1[5];
      pcVar9 = (char *)*plVar7;
      *plVar7 = (longlong)(pcVar9 + 1);
      *pcVar9 = (char)(iVar12 << 4) + cVar10;
      plVar1 = plVar7 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
        puVar5 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar5 + 5) = 0x18;
        (*(code *)*puVar5)(param_1);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)((longlong)param_1 + 0x144));
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x19c);
  plVar7 = (longlong *)param_1[5];
  puVar6 = (undefined1 *)*plVar7;
  *plVar7 = (longlong)(puVar6 + 1);
  *puVar6 = uVar2;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  lVar14 = param_1[0x34];
  plVar7 = (longlong *)param_1[5];
  puVar6 = (undefined1 *)*plVar7;
  *plVar7 = (longlong)(puVar6 + 1);
  *puVar6 = (char)lVar14;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  iVar11 = *(int *)((longlong)param_1 + 0x1a4);
  lVar14 = param_1[0x35];
  plVar7 = (longlong *)param_1[5];
  pcVar9 = (char *)*plVar7;
  *plVar7 = (longlong)(pcVar9 + 1);
  *pcVar9 = (char)(iVar11 << 4) + (char)(int)lVar14;
  plVar1 = plVar7 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar11 = (*(code *)plVar7[3])(param_1), iVar11 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00a1eac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar5)(param_1);
    return;
  }
  return;
}

