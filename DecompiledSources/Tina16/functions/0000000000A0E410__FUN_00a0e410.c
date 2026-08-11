/* Ghidra address: 00a0e410 */
/* Ghidra symbol: FUN_00a0e410 */


void FUN_00a0e410(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  iVar8 = *(int *)((longlong)param_1 + 0x24);
  if (iVar8 != 0xca) {
    lVar1 = *param_1;
    *(undefined4 *)(lVar1 + 0x28) = 0x14;
    *(int *)(lVar1 + 0x2c) = iVar8;
    (**(code **)*param_1)(param_1);
  }
  iVar8 = *(int *)((longlong)param_1 + 0x44);
  uVar9 = *(uint *)(param_1 + 9);
  if (uVar9 < (uint)(iVar8 * 8)) {
    if (uVar9 < (uint)(iVar8 * 4)) {
      if (uVar9 < (uint)(iVar8 * 2)) {
        *(int *)(param_1 + 0x11) = (int)param_1[6];
        uVar4 = *(undefined4 *)((longlong)param_1 + 0x34);
        uVar9 = 8;
      }
      else {
        uVar4 = FUN_00a1bc70((int)param_1[6],2);
        *(undefined4 *)(param_1 + 0x11) = uVar4;
        uVar4 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34),2);
        uVar9 = 4;
      }
    }
    else {
      uVar4 = FUN_00a1bc70((int)param_1[6],4);
      *(undefined4 *)(param_1 + 0x11) = uVar4;
      uVar4 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34),4);
      uVar9 = 2;
    }
  }
  else {
    uVar4 = FUN_00a1bc70((int)param_1[6],8);
    *(undefined4 *)(param_1 + 0x11) = uVar4;
    uVar4 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34),8);
    uVar9 = 1;
  }
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar4;
  *(uint *)(param_1 + 0x34) = uVar9;
  iVar8 = (int)param_1[7];
  if (0 < iVar8) {
    lVar1 = param_1[0x26];
    iVar10 = 0;
    lVar7 = lVar1;
    do {
      uVar5 = uVar9;
      if (uVar9 < 8) {
        do {
          uVar3 = uVar5 * 2;
          if (((int)((int)param_1[0x33] * uVar9) < (int)(uVar3 * *(int *)(lVar7 + 8))) ||
             ((int)(*(int *)((longlong)param_1 + 0x19c) * uVar9) <
              (int)(*(int *)(lVar7 + 0xc) * uVar3))) break;
          bVar2 = (int)uVar5 < 4;
          uVar5 = uVar3;
        } while (bVar2);
      }
      *(uint *)(lVar7 + 0x24) = uVar5;
      iVar10 = iVar10 + 1;
      lVar7 = lVar7 + 0x60;
    } while (iVar10 < iVar8);
    if (0 < iVar8) {
      puVar11 = (undefined4 *)(lVar1 + 0x2c);
      iVar10 = 0;
      do {
        uVar4 = FUN_00a1bc70(puVar11[-9] * (int)param_1[6] * puVar11[-2],(int)param_1[0x33] << 3);
        puVar11[-1] = uVar4;
        uVar4 = FUN_00a1bc70(puVar11[-8] * *(int *)((longlong)param_1 + 0x34) * puVar11[-2],
                             *(int *)((longlong)param_1 + 0x19c) << 3);
        *puVar11 = uVar4;
        iVar10 = iVar10 + 1;
        iVar8 = (int)param_1[7];
        puVar11 = puVar11 + 0x18;
      } while (iVar10 < iVar8);
    }
  }
  uVar9 = (int)param_1[8] - 1;
  iVar10 = iVar8;
  if (uVar9 < 5) {
    iVar10 = *(int *)(&DAT_01e6eef0 + (longlong)(int)uVar9 * 4);
  }
  *(int *)(param_1 + 0x12) = iVar10;
  uVar4 = 1;
  iVar6 = 1;
  if (*(int *)((longlong)param_1 + 0x6c) == 0) {
    iVar6 = iVar10;
  }
  *(int *)((longlong)param_1 + 0x94) = iVar6;
  if (((((*(int *)((longlong)param_1 + 100) == 0) && ((int)param_1[0x31] == 0)) && (iVar10 == 3)) &&
      ((((int)param_1[8] == 2 && (iVar8 == 3)) &&
       ((*(int *)((longlong)param_1 + 0x3c) == 3 &&
        ((lVar1 = param_1[0x26], *(int *)(lVar1 + 8) == 2 && (*(int *)(lVar1 + 0x68) == 1)))))))) &&
     ((*(int *)(lVar1 + 200) == 1 &&
      (((((*(int *)(lVar1 + 0xc) < 3 && (*(int *)(lVar1 + 0x6c) == 1)) &&
         (*(int *)(lVar1 + 0xcc) == 1)) &&
        ((iVar8 = *(int *)(lVar1 + 0x24), iVar8 == (int)param_1[0x34] &&
         (*(int *)(lVar1 + 0x84) == iVar8)))) && (*(int *)(lVar1 + 0xe4) == iVar8)))))) {
    uVar4 = *(undefined4 *)((longlong)param_1 + 0x19c);
  }
  *(undefined4 *)(param_1 + 0x13) = uVar4;
  return;
}

