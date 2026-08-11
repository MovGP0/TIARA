/* Ghidra address: 00a11e90 */
/* Ghidra symbol: FUN_00a11e90 */


void FUN_00a11e90(longlong param_1,longlong *param_2,uint param_3,undefined8 *param_4,int param_5)

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
  undefined1 *puVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulonglong uVar15;
  uint uVar16;
  uint local_64;
  undefined8 *local_58;
  
  if (0 < param_5) {
    lVar4 = *(longlong *)(param_1 + 0x268);
    uVar3 = *(uint *)(param_1 + 0x88);
    lVar5 = *(longlong *)(param_1 + 0x1a8);
    lVar6 = *(longlong *)(lVar4 + 0x10);
    lVar7 = *(longlong *)(lVar4 + 0x18);
    lVar8 = *(longlong *)(lVar4 + 0x20);
    lVar4 = *(longlong *)(lVar4 + 0x28);
    local_64 = param_3;
    local_58 = param_4;
    do {
      if (uVar3 != 0) {
        uVar15 = (ulonglong)local_64;
        pbVar14 = *(byte **)(*param_2 + uVar15 * 8);
        pbVar12 = *(byte **)(param_2[1] + uVar15 * 8);
        pbVar13 = *(byte **)(param_2[2] + uVar15 * 8);
        puVar10 = *(undefined1 **)(param_2[3] + uVar15 * 8);
        puVar11 = (undefined1 *)*local_58;
        uVar15 = (ulonglong)uVar3;
        do {
          bVar1 = *pbVar13;
          uVar16 = *pbVar14 ^ 0xff;
          bVar2 = *pbVar12;
          *puVar11 = *(undefined1 *)(lVar5 + (int)(uVar16 - *(int *)(lVar6 + (ulonglong)bVar1 * 4)))
          ;
          puVar11[1] = *(undefined1 *)
                        (lVar5 + (int)(uVar16 - (*(int *)(lVar8 + (ulonglong)bVar1 * 4) +
                                                 *(int *)(lVar4 + (ulonglong)bVar2 * 4) >> 0x10)));
          puVar11[2] = *(undefined1 *)
                        (lVar5 + (int)(uVar16 - *(int *)(lVar7 + (ulonglong)bVar2 * 4)));
          puVar11[3] = *puVar10;
          pbVar14 = pbVar14 + 1;
          pbVar12 = pbVar12 + 1;
          pbVar13 = pbVar13 + 1;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 4;
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      local_64 = local_64 + 1;
      local_58 = local_58 + 1;
      bVar9 = 1 < param_5;
      param_5 = param_5 + -1;
    } while (bVar9);
  }
  return;
}

