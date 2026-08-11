/* Ghidra address: 00a22ba0 */
/* Ghidra symbol: FUN_00a22ba0 */


void FUN_00a22ba0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  longlong *plVar13;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x13c);
  if (0 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar7 = (ulonglong)uVar3;
    uVar11 = uVar1 * 0x10;
    if (0 < (int)(uVar11 - uVar3)) {
      iVar8 = -2;
      if (-3 < (int)(~uVar11 + uVar3)) {
        iVar8 = ~uVar11 + uVar3;
      }
      lVar12 = (ulonglong)(((uVar11 | 1) - uVar3) + iVar8) + 1;
      uVar9 = (ulonglong)(uVar2 & 3);
      if ((ulonglong)uVar2 - 1 < 3) {
        lVar10 = 0;
      }
      else {
        lVar10 = 0;
        do {
          lVar4 = *(longlong *)(param_3 + lVar10 * 8);
          FUN_00626680(lVar4 + uVar7,*(undefined1 *)(lVar4 + -1 + uVar7),lVar12);
          lVar4 = *(longlong *)(param_3 + 8 + lVar10 * 8);
          FUN_00626680(lVar4 + uVar7,*(undefined1 *)(lVar4 + -1 + uVar7),lVar12);
          lVar4 = *(longlong *)(param_3 + 0x10 + lVar10 * 8);
          FUN_00626680(lVar4 + uVar7,*(undefined1 *)(lVar4 + -1 + uVar7),lVar12);
          lVar4 = *(longlong *)(param_3 + 0x18 + lVar10 * 8);
          FUN_00626680(lVar4 + uVar7,*(undefined1 *)(lVar4 + -1 + uVar7),lVar12);
          lVar10 = lVar10 + 4;
        } while (uVar2 - uVar9 != lVar10);
      }
      if (uVar9 != 0) {
        plVar13 = (longlong *)(param_3 + lVar10 * 8);
        lVar10 = -uVar9;
        do {
          FUN_00626680(*plVar13 + uVar7,*(undefined1 *)(*plVar13 + -1 + uVar7),lVar12);
          plVar13 = plVar13 + 1;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0);
      }
    }
  }
  iVar8 = *(int *)(param_2 + 0xc);
  if (0 < iVar8) {
    lVar12 = 0;
    do {
      if ((uVar1 & 0x1fffffff) != 0) {
        pbVar5 = *(byte **)(param_3 + lVar12 * 8);
        puVar6 = *(undefined1 **)(param_4 + lVar12 * 8);
        iVar8 = uVar1 << 3;
        do {
          *puVar6 = (char)((uint)pbVar5[1] + (uint)*pbVar5 >> 1);
          puVar6[1] = (char)(pbVar5[2] + 1 + (uint)pbVar5[3] >> 1);
          pbVar5 = pbVar5 + 4;
          puVar6 = puVar6 + 2;
          iVar8 = iVar8 + -2;
        } while (iVar8 != 0);
        iVar8 = *(int *)(param_2 + 0xc);
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar8);
  }
  return;
}

