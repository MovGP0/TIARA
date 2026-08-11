/* Ghidra address: 00a1ddc0 */
/* Ghidra symbol: FUN_00a1ddc0 */


void FUN_00a1ddc0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 *puVar7;
  longlong *plVar8;
  int iVar9;
  
  puVar5 = (undefined8 *)param_1[5];
  lVar6 = param_1[0x3a];
  plVar1 = param_1 + 5;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xff;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  puVar5 = (undefined8 *)*plVar1;
  puVar7 = (undefined1 *)*puVar5;
  *puVar5 = puVar7 + 1;
  *puVar7 = 0xd8;
  plVar2 = puVar5 + 1;
  *plVar2 = *plVar2 + -1;
  if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x18;
    (*(code *)*puVar5)(param_1);
  }
  *(undefined4 *)(lVar6 + 0x38) = 0;
  if ((int)param_1[0x24] != 0) {
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xff;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xe0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x10;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x4a;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x46;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x49;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x46;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x124);
    plVar8 = (longlong *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = uVar3;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x125);
    plVar8 = (longlong *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = uVar3;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x126);
    plVar8 = (longlong *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = uVar3;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    lVar6 = param_1[0x25];
    plVar8 = (longlong *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = (char)((ushort)(short)lVar6 >> 8);
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    plVar8 = (longlong *)*plVar1;
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = (char)(short)lVar6;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    uVar4 = *(undefined2 *)((longlong)param_1 + 0x12a);
    plVar8 = (longlong *)param_1[5];
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = (char)((ushort)uVar4 >> 8);
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    plVar8 = (longlong *)*plVar1;
    puVar7 = (undefined1 *)*plVar8;
    *plVar8 = (longlong)(puVar7 + 1);
    *puVar7 = (char)uVar4;
    plVar2 = plVar8 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)plVar8[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
      iVar9 = *(int *)((longlong)param_1 + 300);
      goto joined_r0x00a1e501;
    }
  }
  iVar9 = *(int *)((longlong)param_1 + 300);
joined_r0x00a1e501:
  if (iVar9 != 0) {
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xff;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xee;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0xe;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x41;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 100;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x6f;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x62;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0x65;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 100;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    puVar5 = (undefined8 *)*plVar1;
    puVar7 = (undefined1 *)*puVar5;
    *puVar5 = puVar7 + 1;
    *puVar7 = 0;
    plVar2 = puVar5 + 1;
    *plVar2 = *plVar2 + -1;
    if ((*plVar2 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
      (*(code *)*puVar5)(param_1);
    }
    if ((int)param_1[10] == 5) {
      puVar5 = (undefined8 *)*plVar1;
      puVar7 = (undefined1 *)*puVar5;
      *puVar5 = puVar7 + 1;
      *puVar7 = 2;
      plVar1 = puVar5 + 1;
      *plVar1 = *plVar1 + -1;
      lVar6 = *plVar1;
    }
    else if ((int)param_1[10] == 3) {
      puVar5 = (undefined8 *)*plVar1;
      puVar7 = (undefined1 *)*puVar5;
      *puVar5 = puVar7 + 1;
      *puVar7 = 1;
      plVar1 = puVar5 + 1;
      *plVar1 = *plVar1 + -1;
      lVar6 = *plVar1;
    }
    else {
      puVar5 = (undefined8 *)*plVar1;
      puVar7 = (undefined1 *)*puVar5;
      *puVar5 = puVar7 + 1;
      *puVar7 = 0;
      plVar1 = puVar5 + 1;
      *plVar1 = *plVar1 + -1;
      lVar6 = *plVar1;
    }
    if ((lVar6 == 0) && (iVar9 = (*(code *)puVar5[3])(param_1), iVar9 == 0)) {
      puVar5 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar5 + 5) = 0x18;
                    /* WARNING: Could not recover jumptable at 0x00a1e4e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar5)(param_1);
      return;
    }
  }
  return;
}

