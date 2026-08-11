/* Ghidra address: 00a1f0d0 */
/* Ghidra symbol: FUN_00a1f0d0 */


void FUN_00a1f0d0(longlong *param_1,undefined1 param_2)

{
  longlong *plVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  char *pcVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  undefined1 *puVar11;
  
  puVar4 = (undefined8 *)param_1[5];
  puVar11 = (undefined1 *)*puVar4;
  *puVar4 = puVar11 + 1;
  *puVar11 = 0xff;
  plVar1 = puVar4 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)puVar4[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = param_2;
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  iVar9 = *(int *)((longlong)param_1 + 0x4c) * 3 + 8;
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)((uint)iVar9 >> 8);
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar5[3])(param_1), iVar10 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)iVar9;
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
    iVar9 = *(int *)((longlong)param_1 + 0x34);
  }
  else {
    iVar9 = *(int *)((longlong)param_1 + 0x34);
  }
  if ((0xffff < iVar9) || (0xffff < (int)param_1[6])) {
    *(undefined8 *)(*param_1 + 0x28) = 0xffff00000029;
    (**(code **)*param_1)(param_1);
  }
  lVar8 = param_1[9];
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)lVar8;
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  uVar3 = *(undefined4 *)((longlong)param_1 + 0x34);
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)((uint)uVar3 >> 8);
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)uVar3;
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  lVar8 = param_1[6];
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)((uint)(int)lVar8 >> 8);
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = (char)(int)lVar8;
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x4c);
  plVar5 = (longlong *)param_1[5];
  puVar11 = (undefined1 *)*plVar5;
  *plVar5 = (longlong)(puVar11 + 1);
  *puVar11 = uVar2;
  plVar1 = plVar5 + 1;
  *plVar1 = *plVar1 + -1;
  if ((*plVar1 == 0) && (iVar9 = (*(code *)plVar5[3])(param_1), iVar9 == 0)) {
    puVar4 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar4 + 5) = 0x18;
    (*(code *)*puVar4)(param_1);
  }
  if (0 < *(int *)((longlong)param_1 + 0x4c)) {
    puVar11 = (undefined1 *)param_1[0xb];
    iVar9 = 0;
    do {
      uVar2 = *puVar11;
      plVar5 = (longlong *)param_1[5];
      puVar6 = (undefined1 *)*plVar5;
      *plVar5 = (longlong)(puVar6 + 1);
      *puVar6 = uVar2;
      plVar1 = plVar5 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar5[3])(param_1), iVar10 == 0)) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x18;
        (*(code *)*puVar4)(param_1);
      }
      iVar10 = *(int *)(puVar11 + 8);
      uVar3 = *(undefined4 *)(puVar11 + 0xc);
      plVar5 = (longlong *)param_1[5];
      pcVar7 = (char *)*plVar5;
      *plVar5 = (longlong)(pcVar7 + 1);
      *pcVar7 = (char)(iVar10 << 4) + (char)uVar3;
      plVar1 = plVar5 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar5[3])(param_1), iVar10 == 0)) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x18;
        (*(code *)*puVar4)(param_1);
      }
      uVar2 = puVar11[0x10];
      plVar5 = (longlong *)param_1[5];
      puVar6 = (undefined1 *)*plVar5;
      *plVar5 = (longlong)(puVar6 + 1);
      *puVar6 = uVar2;
      plVar1 = plVar5 + 1;
      *plVar1 = *plVar1 + -1;
      if ((*plVar1 == 0) && (iVar10 = (*(code *)plVar5[3])(param_1), iVar10 == 0)) {
        puVar4 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar4 + 5) = 0x18;
        (*(code *)*puVar4)(param_1);
      }
      iVar9 = iVar9 + 1;
      puVar11 = puVar11 + 0x60;
    } while (iVar9 < *(int *)((longlong)param_1 + 0x4c));
  }
  return;
}

