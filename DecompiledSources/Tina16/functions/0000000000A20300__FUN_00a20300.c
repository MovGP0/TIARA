/* Ghidra address: 00a20300 */
/* Ghidra symbol: FUN_00a20300 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00a20300(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = *(int *)((longlong)param_1 + 0x144);
  if (iVar10 == 1) {
    lVar9 = param_1[0x29];
    *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar9 + 0x1c);
    uVar7 = *(uint *)(lVar9 + 0x20);
    *(uint *)((longlong)param_1 + 0x16c) = uVar7;
    uVar4 = uRam0000000001e704b8;
    *(undefined8 *)(lVar9 + 0x34) = _DAT_01e704b0;
    *(undefined8 *)(lVar9 + 0x3c) = uVar4;
    *(undefined4 *)(lVar9 + 0x44) = 1;
    uVar7 = uVar7 % *(uint *)(lVar9 + 0xc);
    if (uVar7 == 0) {
      uVar7 = *(uint *)(lVar9 + 0xc);
    }
    *(uint *)(lVar9 + 0x48) = uVar7;
    param_1[0x2e] = 1;
  }
  else {
    if (3 < iVar10 - 1U) {
      lVar9 = *param_1;
      *(undefined4 *)(lVar9 + 0x28) = 0x1a;
      *(int *)(lVar9 + 0x2c) = iVar10;
      *(undefined4 *)(*param_1 + 0x30) = 4;
      (**(code **)*param_1)(param_1);
    }
    uVar5 = FUN_00a1bc70((int)param_1[6],(int)param_1[0x27] << 3);
    *(undefined4 *)(param_1 + 0x2d) = uVar5;
    uVar5 = FUN_00a1bc70(*(undefined4 *)((longlong)param_1 + 0x34));
    *(undefined4 *)((longlong)param_1 + 0x16c) = uVar5;
    *(undefined4 *)(param_1 + 0x2e) = 0;
    if (0 < *(int *)((longlong)param_1 + 0x144)) {
      iVar10 = 0;
      lVar9 = 0;
      while( true ) {
        lVar2 = param_1[lVar9 + 0x29];
        uVar7 = *(uint *)(lVar2 + 8);
        uVar1 = *(uint *)(lVar2 + 0xc);
        *(uint *)(lVar2 + 0x34) = uVar7;
        *(uint *)(lVar2 + 0x38) = uVar1;
        iVar6 = uVar1 * uVar7;
        *(int *)(lVar2 + 0x3c) = iVar6;
        *(uint *)(lVar2 + 0x40) = uVar7 * 8;
        uVar8 = *(uint *)(lVar2 + 0x1c) % uVar7;
        if (uVar8 == 0) {
          uVar8 = uVar7;
        }
        *(uint *)(lVar2 + 0x44) = uVar8;
        uVar7 = (uint)((ulonglong)*(uint *)(lVar2 + 0x20) % (ulonglong)uVar1);
        if (uVar7 == 0) {
          uVar7 = uVar1;
        }
        *(uint *)(lVar2 + 0x48) = uVar7;
        if (10 < iVar10 + iVar6) {
          puVar3 = (undefined8 *)*param_1;
          *(undefined4 *)(puVar3 + 5) = 0xd;
          (*(code *)*puVar3)(param_1);
        }
        if (0 < iVar6) {
          iVar6 = iVar6 + 1;
          do {
            lVar2 = param_1[0x2e];
            *(int *)(param_1 + 0x2e) = (int)lVar2 + 1;
            *(int *)((longlong)param_1 + (longlong)(int)lVar2 * 4 + 0x174) = (int)lVar9;
            iVar6 = iVar6 + -1;
          } while (1 < iVar6);
        }
        lVar9 = lVar9 + 1;
        if (*(int *)((longlong)param_1 + 0x144) <= lVar9) break;
        iVar10 = (int)param_1[0x2e];
      }
    }
  }
  if (0 < *(int *)((longlong)param_1 + 0x11c)) {
    iVar6 = *(int *)((longlong)param_1 + 0x11c) * (int)param_1[0x2d];
    iVar10 = 0xffff;
    if (iVar6 < 0x10000) {
      iVar10 = iVar6;
    }
    *(int *)(param_1 + 0x23) = iVar10;
  }
  return;
}

