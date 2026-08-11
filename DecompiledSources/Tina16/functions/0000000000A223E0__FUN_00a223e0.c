/* Ghidra address: 00a223e0 */
/* Ghidra symbol: FUN_00a223e0 */


void FUN_00a223e0(longlong param_1,undefined8 *param_2,longlong *param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  byte *pbVar14;
  int iVar15;
  undefined8 *local_50;
  uint local_44;
  
  if (0 < param_5) {
    iVar4 = *(int *)(param_1 + 0x30);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
    local_50 = param_2;
    local_44 = param_4;
    do {
      if (iVar4 != 0) {
        uVar9 = (ulonglong)local_44;
        pbVar14 = *(byte **)(param_3[3] + uVar9 * 8);
        puVar13 = *(undefined1 **)(param_3[2] + uVar9 * 8);
        puVar11 = *(undefined1 **)(param_3[1] + uVar9 * 8);
        puVar12 = *(undefined1 **)(*param_3 + uVar9 * 8);
        pbVar6 = (byte *)*local_50;
        iVar15 = iVar4;
        do {
          bVar1 = pbVar6[2];
          bVar2 = *pbVar6;
          bVar3 = pbVar6[1];
          *pbVar14 = pbVar6[3];
          uVar10 = bVar3 ^ 0xff;
          uVar7 = bVar1 ^ 0xff;
          uVar8 = bVar2 ^ 0xff;
          *puVar12 = (char)((uint)(*(int *)(lVar5 + (ulonglong)(uVar10 + 0x100) * 4) +
                                   *(int *)(lVar5 + ((ulonglong)bVar2 ^ 0xff) * 4) +
                                  *(int *)(lVar5 + (ulonglong)(uVar7 + 0x200) * 4)) >> 0x10);
          pbVar6 = pbVar6 + 4;
          puVar12 = puVar12 + 1;
          pbVar14 = pbVar14 + 1;
          *puVar11 = (char)((uint)(*(int *)(lVar5 + (ulonglong)(uVar10 + 0x400) * 4) +
                                   *(int *)(lVar5 + (ulonglong)(uVar8 + 0x300) * 4) +
                                  *(int *)(lVar5 + (ulonglong)(uVar7 | 0x500) * 4)) >> 0x10);
          puVar11 = puVar11 + 1;
          iVar15 = iVar15 + -1;
          *puVar13 = (char)((uint)(*(int *)(lVar5 + (ulonglong)(uVar10 | 0x600) * 4) +
                                   *(int *)(lVar5 + (ulonglong)(uVar8 | 0x500) * 4) +
                                  *(int *)(lVar5 + (ulonglong)(uVar7 + 0x700) * 4)) >> 0x10);
          puVar13 = puVar13 + 1;
        } while (iVar15 != 0);
      }
      local_44 = local_44 + 1;
      local_50 = local_50 + 1;
      param_5 = param_5 + -1;
    } while (0 < param_5);
  }
  return;
}

