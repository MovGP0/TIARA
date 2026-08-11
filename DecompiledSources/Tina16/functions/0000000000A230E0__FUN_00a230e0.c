/* Ghidra address: 00a230e0 */
/* Ghidra symbol: FUN_00a230e0 */


void FUN_00a230e0(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  
  uVar1 = *(uint *)(param_2 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0x13c);
  if (0 < (int)uVar2) {
    uVar3 = *(uint *)(param_1 + 0x30);
    uVar13 = (ulonglong)uVar3;
    uVar9 = uVar1 * 0x10;
    if (0 < (int)(uVar9 - uVar3)) {
      iVar10 = -2;
      if (-3 < (int)(~uVar9 + uVar3)) {
        iVar10 = ~uVar9 + uVar3;
      }
      lVar11 = (ulonglong)(((uVar9 | 1) - uVar3) + iVar10) + 1;
      uVar7 = (ulonglong)(uVar2 & 3);
      if ((ulonglong)uVar2 - 1 < 3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        do {
          lVar4 = *(longlong *)(param_3 + lVar14 * 8);
          FUN_00626680(lVar4 + uVar13,*(undefined1 *)(lVar4 + -1 + uVar13),lVar11);
          lVar4 = *(longlong *)(param_3 + 8 + lVar14 * 8);
          FUN_00626680(lVar4 + uVar13,*(undefined1 *)(lVar4 + -1 + uVar13),lVar11);
          lVar4 = *(longlong *)(param_3 + 0x10 + lVar14 * 8);
          FUN_00626680(lVar4 + uVar13,*(undefined1 *)(lVar4 + -1 + uVar13),lVar11);
          lVar4 = *(longlong *)(param_3 + 0x18 + lVar14 * 8);
          FUN_00626680(lVar4 + uVar13,*(undefined1 *)(lVar4 + -1 + uVar13));
          lVar14 = lVar14 + 4;
        } while (uVar2 - uVar7 != lVar14);
      }
      if (uVar7 != 0) {
        plVar12 = (longlong *)(param_3 + lVar14 * 8);
        lVar11 = -uVar7;
        do {
          FUN_00626680(*plVar12 + uVar13,*(undefined1 *)(*plVar12 + -1 + uVar13));
          plVar12 = plVar12 + 1;
          lVar11 = lVar11 + 1;
        } while (lVar11 != 0);
      }
    }
  }
  iVar10 = *(int *)(param_2 + 0xc);
  if (0 < iVar10) {
    lVar11 = 0;
    uVar13 = 0;
    do {
      if ((uVar1 & 0x1fffffff) != 0) {
        pbVar5 = *(byte **)(param_3 + (uVar13 | 1) * 8);
        pbVar8 = *(byte **)(param_3 + uVar13 * 8);
        puVar6 = *(undefined1 **)(param_4 + lVar11 * 8);
        iVar10 = uVar1 << 3;
        do {
          *puVar6 = (char)(pbVar5[1] + 1 + (uint)*pbVar5 + (uint)pbVar8[1] + (uint)*pbVar8 >> 2);
          puVar6[1] = (char)(pbVar5[3] + 2 + (uint)pbVar5[2] + (uint)pbVar8[3] + (uint)pbVar8[2] >>
                            2);
          pbVar8 = pbVar8 + 4;
          pbVar5 = pbVar5 + 4;
          puVar6 = puVar6 + 2;
          iVar10 = iVar10 + -2;
        } while (iVar10 != 0);
        iVar10 = *(int *)(param_2 + 0xc);
      }
      uVar13 = uVar13 + 2;
      lVar11 = lVar11 + 1;
    } while (lVar11 < iVar10);
  }
  return;
}

