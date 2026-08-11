/* Ghidra address: 00a1eeb0 */
/* Ghidra symbol: FUN_00a1eeb0 */


char FUN_00a1eeb0(longlong *param_1,int param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  undefined1 uVar10;
  char cVar11;
  
  lVar2 = param_1[(longlong)param_2 + 0xc];
  if (lVar2 == 0) {
    lVar9 = *param_1;
    *(undefined4 *)(lVar9 + 0x28) = 0x34;
    *(int *)(lVar9 + 0x2c) = param_2;
    (**(code **)*param_1)(param_1);
  }
  lVar9 = 0;
  cVar11 = '\0';
  do {
    if (0xff < (ushort)(*(ushort *)(lVar2 + 6 + lVar9 * 2) | *(ushort *)(lVar2 + 4 + lVar9 * 2) |
                       *(ushort *)(lVar2 + 2 + lVar9 * 2) | *(ushort *)(lVar2 + lVar9 * 2))) {
      cVar11 = '\x01';
    }
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x40);
  if (*(int *)(lVar2 + 0x80) == 0) {
    puVar3 = (undefined8 *)param_1[5];
    puVar4 = (undefined1 *)*puVar3;
    *puVar3 = puVar4 + 1;
    *puVar4 = 0xff;
    plVar5 = puVar3 + 1;
    *plVar5 = *plVar5 + -1;
    if (*plVar5 == 0) {
      iVar8 = (*(code *)puVar3[3])(param_1);
      if (iVar8 == 0) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x18;
        (*(code *)*puVar3)(param_1);
      }
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar4 = (undefined1 *)*puVar3;
    *puVar3 = puVar4 + 1;
    *puVar4 = 0xdb;
    plVar5 = puVar3 + 1;
    *plVar5 = *plVar5 + -1;
    if (*plVar5 == 0) {
      iVar8 = (*(code *)puVar3[3])(param_1);
      if (iVar8 == 0) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x18;
        (*(code *)*puVar3)(param_1);
      }
    }
    puVar3 = (undefined8 *)param_1[5];
    puVar4 = (undefined1 *)*puVar3;
    *puVar3 = puVar4 + 1;
    *puVar4 = 0;
    plVar5 = puVar3 + 1;
    *plVar5 = *plVar5 + -1;
    if (*plVar5 == 0) {
      iVar8 = (*(code *)puVar3[3])(param_1);
      if (iVar8 == 0) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x18;
        (*(code *)*puVar3)(param_1);
      }
    }
    plVar5 = (longlong *)param_1[5];
    uVar10 = 0x83;
    if (cVar11 == '\0') {
      uVar10 = 0x43;
    }
    puVar4 = (undefined1 *)*plVar5;
    *plVar5 = (longlong)(puVar4 + 1);
    *puVar4 = uVar10;
    plVar6 = plVar5 + 1;
    *plVar6 = *plVar6 + -1;
    if (*plVar6 == 0) {
      iVar8 = (*(code *)plVar5[3])(param_1);
      if (iVar8 == 0) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x18;
        (*(code *)*puVar3)(param_1);
      }
    }
    plVar6 = (longlong *)param_1[5];
    pcVar7 = (char *)*plVar6;
    *plVar6 = (longlong)(pcVar7 + 1);
    *pcVar7 = cVar11 * '\x10' + (char)param_2;
    plVar5 = plVar6 + 1;
    *plVar5 = *plVar5 + -1;
    if (*plVar5 == 0) {
      iVar8 = (*(code *)plVar6[3])(param_1);
      if (iVar8 == 0) {
        puVar3 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar3 + 5) = 0x18;
        (*(code *)*puVar3)(param_1);
      }
    }
    lVar9 = 0;
    do {
      uVar1 = *(undefined2 *)(lVar2 + (longlong)*(int *)((longlong)&DAT_01e6fbe0 + lVar9) * 2);
      if (cVar11 != '\0') {
        plVar6 = (longlong *)param_1[5];
        puVar4 = (undefined1 *)*plVar6;
        *plVar6 = (longlong)(puVar4 + 1);
        *puVar4 = (char)((ushort)uVar1 >> 8);
        plVar5 = plVar6 + 1;
        *plVar5 = *plVar5 + -1;
        if (*plVar5 == 0) {
          iVar8 = (*(code *)plVar6[3])(param_1);
          if (iVar8 == 0) {
            puVar3 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar3 + 5) = 0x18;
            (*(code *)*puVar3)(param_1);
          }
        }
      }
      plVar6 = (longlong *)param_1[5];
      puVar4 = (undefined1 *)*plVar6;
      *plVar6 = (longlong)(puVar4 + 1);
      *puVar4 = (char)uVar1;
      plVar5 = plVar6 + 1;
      *plVar5 = *plVar5 + -1;
      if (*plVar5 == 0) {
        iVar8 = (*(code *)plVar6[3])(param_1);
        if (iVar8 == 0) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0x18;
          (*(code *)*puVar3)(param_1);
        }
      }
      lVar9 = lVar9 + 4;
    } while (lVar9 != 0x100);
    *(undefined4 *)(lVar2 + 0x80) = 1;
  }
  return cVar11;
}

