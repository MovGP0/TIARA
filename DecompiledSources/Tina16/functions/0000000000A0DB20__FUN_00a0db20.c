/* Ghidra address: 00a0db20 */
/* Ghidra symbol: FUN_00a0db20 */


void FUN_00a0db20(longlong *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  
  iVar12 = (int)param_1[0x36];
  if (iVar12 == 1) {
    lVar11 = param_1[0x37];
    *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(lVar11 + 0x1c);
    uVar8 = *(uint *)(lVar11 + 0x20);
    *(uint *)((longlong)param_1 + 0x1dc) = uVar8;
    *(undefined8 *)(lVar11 + 0x34) = 0x100000001;
    *(undefined4 *)(lVar11 + 0x3c) = 1;
    *(undefined4 *)(lVar11 + 0x40) = *(undefined4 *)(lVar11 + 0x24);
    *(undefined4 *)(lVar11 + 0x44) = 1;
    uVar8 = uVar8 % *(uint *)(lVar11 + 0xc);
    if (uVar8 == 0) {
      uVar8 = *(uint *)(lVar11 + 0xc);
    }
    *(uint *)(lVar11 + 0x48) = uVar8;
    param_1[0x3c] = 1;
    uVar6 = 1;
  }
  else {
    if (3 < iVar12 - 1U) {
      lVar11 = *param_1;
      *(undefined4 *)(lVar11 + 0x28) = 0x1a;
      *(int *)(lVar11 + 0x2c) = iVar12;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar5 = FUN_00a1bc70((int)param_1[6],(int)param_1[0x33] << 3);
    *(undefined4 *)(param_1 + 0x3b) = uVar5;
    uVar5 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34));
    *(undefined4 *)((longlong)param_1 + 0x1dc) = uVar5;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    if ((int)param_1[0x36] < 1) goto LAB_00a0dd4c;
    iVar12 = 0;
    lVar11 = 0;
    while( true ) {
      lVar3 = param_1[lVar11 + 0x37];
      uVar8 = *(uint *)(lVar3 + 8);
      uVar1 = *(uint *)(lVar3 + 0xc);
      *(uint *)(lVar3 + 0x34) = uVar8;
      *(uint *)(lVar3 + 0x38) = uVar1;
      iVar10 = uVar1 * uVar8;
      *(int *)(lVar3 + 0x3c) = iVar10;
      *(uint *)(lVar3 + 0x40) = *(int *)(lVar3 + 0x24) * uVar8;
      uVar9 = *(uint *)(lVar3 + 0x1c) % uVar8;
      if (uVar9 == 0) {
        uVar9 = uVar8;
      }
      *(uint *)(lVar3 + 0x44) = uVar9;
      uVar8 = (uint)((ulonglong)*(uint *)(lVar3 + 0x20) % (ulonglong)uVar1);
      if (uVar8 == 0) {
        uVar8 = uVar1;
      }
      *(uint *)(lVar3 + 0x48) = uVar8;
      if (10 < iVar12 + iVar10) {
        puVar2 = (undefined8 *)*param_1;
        *(undefined4 *)(puVar2 + 5) = 0xd;
        (*(code *)*puVar2)(param_1);
      }
      if (0 < iVar10) {
        iVar10 = iVar10 + 1;
        do {
          lVar3 = param_1[0x3c];
          *(int *)(param_1 + 0x3c) = (int)lVar3 + 1;
          *(int *)((longlong)param_1 + (longlong)(int)lVar3 * 4 + 0x1e4) = (int)lVar11;
          iVar10 = iVar10 + -1;
        } while (1 < iVar10);
      }
      lVar11 = lVar11 + 1;
      uVar6 = (ulonglong)(int)param_1[0x36];
      if ((longlong)uVar6 <= lVar11) break;
      iVar12 = (int)param_1[0x3c];
    }
    if ((int)param_1[0x36] < 1) goto LAB_00a0dd4c;
  }
  lVar11 = 0;
  do {
    lVar3 = param_1[lVar11 + 0x37];
    if (*(longlong *)(lVar3 + 0x50) == 0) {
      iVar12 = *(int *)(lVar3 + 0x10);
      uVar6 = (ulonglong)iVar12;
      if ((3 < uVar6) || (param_1[uVar6 + 0x19] == 0)) {
        lVar4 = *param_1;
        *(undefined4 *)(lVar4 + 0x28) = 0x34;
        *(int *)(lVar4 + 0x2c) = iVar12;
        (**(code **)*param_1)(param_1);
      }
      uVar7 = (**(code **)param_1[1])(param_1,1,0x84);
      FUN_00626670(uVar7,param_1[uVar6 + 0x19],0x84);
      *(undefined8 *)(lVar3 + 0x50) = uVar7;
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x36);
    }
    lVar11 = lVar11 + 1;
  } while (lVar11 < (int)uVar6);
LAB_00a0dd4c:
  (**(code **)param_1[0x4a])(param_1);
  (**(code **)param_1[0x46])(param_1);
  *(undefined8 *)param_1[0x48] = *(undefined8 *)(param_1[0x46] + 8);
  return;
}

