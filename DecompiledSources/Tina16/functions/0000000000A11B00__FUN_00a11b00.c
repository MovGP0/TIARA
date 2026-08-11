/* Ghidra address: 00a11b00 */
/* Ghidra symbol: FUN_00a11b00 */


void FUN_00a11b00(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  bool bVar9;
  byte *pbVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  longlong *local_58;
  
  if (0 < param_5) {
    lVar4 = *(longlong *)(param_1 + 0x268);
    uVar3 = *(uint *)(param_1 + 0x88);
    lVar5 = *(longlong *)(param_1 + 0x1a8);
    lVar6 = *(longlong *)(lVar4 + 0x10);
    lVar7 = *(longlong *)(lVar4 + 0x18);
    lVar8 = *(longlong *)(lVar4 + 0x20);
    lVar4 = *(longlong *)(lVar4 + 0x28);
    local_58 = param_4;
    do {
      if (uVar3 != 0) {
        uVar12 = (ulonglong)param_3;
        pbVar10 = *(byte **)(*param_2 + uVar12 * 8);
        pbVar13 = *(byte **)(param_2[1] + uVar12 * 8);
        pbVar14 = *(byte **)(param_2[2] + uVar12 * 8);
        puVar11 = (undefined1 *)(*local_58 + 2);
        uVar12 = (ulonglong)uVar3;
        do {
          uVar15 = (ulonglong)*pbVar10;
          bVar1 = *pbVar14;
          bVar2 = *pbVar13;
          *puVar11 = *(undefined1 *)
                      (lVar5 + (longlong)*(int *)(lVar6 + (ulonglong)bVar1 * 4) + uVar15);
          puVar11[-1] = *(undefined1 *)
                         (lVar5 + (longlong)
                                  (*(int *)(lVar8 + (ulonglong)bVar1 * 4) +
                                   *(int *)(lVar4 + (ulonglong)bVar2 * 4) >> 0x10) + uVar15);
          puVar11[-2] = *(undefined1 *)
                         (lVar5 + (longlong)*(int *)(lVar7 + (ulonglong)bVar2 * 4) + uVar15);
          pbVar10 = pbVar10 + 1;
          pbVar13 = pbVar13 + 1;
          pbVar14 = pbVar14 + 1;
          puVar11 = puVar11 + 3;
          uVar12 = uVar12 - 1;
        } while (uVar12 != 0);
      }
      param_3 = param_3 + 1;
      local_58 = local_58 + 1;
      bVar9 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar9);
  }
  return;
}

