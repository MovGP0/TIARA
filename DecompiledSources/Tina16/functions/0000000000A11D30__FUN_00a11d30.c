/* Ghidra address: 00a11d30 */
/* Ghidra symbol: FUN_00a11d30 */


void FUN_00a11d30(longlong param_1,longlong param_2,uint param_3,longlong *param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint local_50;
  
  if (0 < param_5) {
    uVar2 = *(uint *)(param_1 + 0x38);
    lVar6 = (longlong)(int)uVar2;
    uVar3 = *(uint *)(param_1 + 0x88);
    local_50 = param_3;
    do {
      if (0 < (int)uVar2) {
        uVar8 = 0;
        do {
          if (uVar3 != 0) {
            puVar9 = (undefined1 *)(*param_4 + uVar8);
            puVar10 = *(undefined1 **)(*(longlong *)(param_2 + uVar8 * 8) + (ulonglong)local_50 * 8)
            ;
            uVar7 = uVar3;
            uVar11 = -(uVar3 & 7);
            uVar5 = uVar3 & 7;
            while (uVar5 != 0) {
              uVar1 = *puVar10;
              puVar10 = puVar10 + 1;
              *puVar9 = uVar1;
              puVar9 = puVar9 + lVar6;
              uVar7 = uVar7 - 1;
              uVar11 = uVar11 + 1;
              uVar5 = uVar11;
            }
            if (6 < uVar3 - 1) {
              do {
                *puVar9 = *puVar10;
                puVar9[lVar6] = puVar10[1];
                puVar9[lVar6 * 2] = puVar10[2];
                puVar9[lVar6 * 3] = puVar10[3];
                puVar9[lVar6 * 4] = puVar10[4];
                puVar9[lVar6 * 5] = puVar10[5];
                puVar9[lVar6 * 6] = puVar10[6];
                puVar9[lVar6 * 7] = puVar10[7];
                puVar9 = puVar9 + lVar6 * 8;
                puVar10 = puVar10 + 8;
                uVar7 = uVar7 - 8;
              } while (uVar7 != 0);
            }
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != uVar2);
      }
      local_50 = local_50 + 1;
      param_4 = param_4 + 1;
      bVar4 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar4);
  }
  return;
}

