/* Ghidra address: 00a1b8f0 */
/* Ghidra symbol: FUN_00a1b8f0 */


undefined8 FUN_00a1b8f0(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 *puVar9;
  byte *pbVar10;
  uint *puVar11;
  longlong lVar12;
  
  puVar4 = (undefined8 *)param_1[5];
  puVar9 = (undefined1 *)*puVar4;
  lVar12 = puVar4[1];
  *(undefined4 *)(param_1 + 0x27) = param_2;
  *(undefined4 *)((longlong)param_1 + 0x13c) = param_3;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar9 = (undefined1 *)*puVar4;
    lVar12 = puVar4[1];
  }
  uVar1 = *puVar9;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    puVar9 = (undefined1 *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    puVar9 = puVar9 + 1;
  }
  uVar2 = *puVar9;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    pbVar10 = puVar9 + 1;
  }
  *(uint *)(param_1 + 0x25) = (uint)*pbVar10;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    pbVar10 = pbVar10 + 1;
  }
  iVar6 = (uint)*pbVar10 << 8;
  *(int *)((longlong)param_1 + 0x34) = iVar6;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = *(int *)((longlong)param_1 + 0x34);
    pbVar10 = (byte *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    pbVar10 = pbVar10 + 1;
  }
  *(uint *)((longlong)param_1 + 0x34) = (uint)*pbVar10 + iVar6;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    pbVar10 = pbVar10 + 1;
  }
  iVar6 = (uint)*pbVar10 << 8;
  *(int *)(param_1 + 6) = iVar6;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    iVar6 = (int)param_1[6];
    pbVar10 = (byte *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    pbVar10 = pbVar10 + 1;
  }
  *(uint *)(param_1 + 6) = (uint)*pbVar10 + iVar6;
  lVar12 = lVar12 + -1;
  if (lVar12 == 0) {
    iVar6 = (*(code *)puVar4[3])(param_1);
    if (iVar6 == 0) {
      return 0;
    }
    pbVar10 = (byte *)*puVar4;
    lVar12 = puVar4[1];
  }
  else {
    pbVar10 = pbVar10 + 1;
  }
  *(uint *)(param_1 + 7) = (uint)*pbVar10;
  lVar7 = *param_1;
  *(undefined4 *)(lVar7 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x21c);
  *(int *)(lVar7 + 0x30) = (int)param_1[6];
  *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)((longlong)param_1 + 0x34);
  *(int *)(lVar7 + 0x38) = (int)param_1[7];
  *(undefined4 *)(lVar7 + 0x28) = 100;
  (**(code **)(lVar7 + 8))(param_1,1);
  if (*(int *)(param_1[0x49] + 0x1c) != 0) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x3a;
    (*(code *)*puVar5)(param_1);
  }
  if (((*(int *)((longlong)param_1 + 0x34) == 0) || ((int)param_1[6] == 0)) ||
     (iVar6 = (int)param_1[7], iVar6 < 1)) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0x20;
    (*(code *)*puVar5)(param_1);
    iVar6 = (int)param_1[7];
  }
  if (CONCAT11(uVar1,uVar2) - 8 != iVar6 * 3) {
    puVar5 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar5 + 5) = 0xb;
    (*(code *)*puVar5)(param_1);
  }
  lVar7 = param_1[0x26];
  if (lVar7 == 0) {
    lVar7 = (**(code **)param_1[1])(param_1,1,(longlong)(int)param_1[7] * 0x60);
    param_1[0x26] = lVar7;
  }
  lVar12 = lVar12 + -1;
  pbVar10 = pbVar10 + 1;
  if (0 < (int)param_1[7]) {
    puVar11 = (uint *)(lVar7 + 0x10);
    uVar8 = 0;
    do {
      puVar11[-3] = uVar8;
      if (lVar12 == 0) {
        iVar6 = (*(code *)puVar4[3])(param_1);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar10 = (byte *)*puVar4;
        lVar12 = puVar4[1];
      }
      puVar11[-4] = (uint)*pbVar10;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) {
        iVar6 = (*(code *)puVar4[3])(param_1);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar10 = (byte *)*puVar4;
        lVar12 = puVar4[1];
      }
      else {
        pbVar10 = pbVar10 + 1;
      }
      bVar3 = *pbVar10;
      puVar11[-2] = (uint)(bVar3 >> 4);
      puVar11[-1] = bVar3 & 0xf;
      lVar12 = lVar12 + -1;
      if (lVar12 == 0) {
        iVar6 = (*(code *)puVar4[3])(param_1);
        if (iVar6 == 0) {
          return 0;
        }
        pbVar10 = (byte *)*puVar4;
        lVar12 = puVar4[1];
      }
      else {
        pbVar10 = pbVar10 + 1;
      }
      *puVar11 = (uint)*pbVar10;
      lVar7 = *param_1;
      *(uint *)(lVar7 + 0x2c) = puVar11[-4];
      *(uint *)(lVar7 + 0x30) = puVar11[-2];
      *(uint *)(lVar7 + 0x34) = puVar11[-1];
      *(uint *)(lVar7 + 0x38) = *puVar11;
      *(undefined4 *)(lVar7 + 0x28) = 0x65;
      (**(code **)(lVar7 + 8))(param_1,1);
      puVar11 = puVar11 + 0x18;
      lVar12 = lVar12 + -1;
      pbVar10 = pbVar10 + 1;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)param_1[7]);
  }
  *(undefined4 *)(param_1[0x49] + 0x1c) = 1;
  *puVar4 = pbVar10;
  puVar4[1] = lVar12;
  return 1;
}

