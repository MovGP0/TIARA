/* Ghidra address: 00a222a0 */
/* Ghidra symbol: FUN_00a222a0 */


void FUN_00a222a0(longlong param_1,longlong *param_2,longlong *param_3,uint param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  int iVar11;
  uint local_44;
  
  if (0 < param_5) {
    iVar4 = *(int *)(param_1 + 0x30);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x1d8) + 0x10);
    local_44 = param_4;
    do {
      if (iVar4 != 0) {
        uVar6 = (ulonglong)local_44;
        puVar10 = *(undefined1 **)(param_3[2] + uVar6 * 8);
        puVar8 = *(undefined1 **)(param_3[1] + uVar6 * 8);
        puVar9 = *(undefined1 **)(*param_3 + uVar6 * 8);
        pbVar7 = (byte *)(*param_2 + 2);
        iVar11 = iVar4;
        do {
          bVar1 = pbVar7[-1];
          bVar2 = *pbVar7;
          bVar3 = pbVar7[-2];
          pbVar7 = pbVar7 + 3;
          *puVar9 = (char)((uint)(*(int *)(lVar5 + (ulonglong)(bVar1 + 0x100) * 4) +
                                  *(int *)(lVar5 + (ulonglong)bVar2 * 4) +
                                 *(int *)(lVar5 + (ulonglong)(bVar3 + 0x200) * 4)) >> 0x10);
          puVar9 = puVar9 + 1;
          *puVar8 = (char)((uint)(*(int *)(lVar5 + (ulonglong)(bVar1 + 0x400) * 4) +
                                  *(int *)(lVar5 + (ulonglong)(bVar2 + 0x300) * 4) +
                                 *(int *)(lVar5 + (ulonglong)(bVar3 + 0x500) * 4)) >> 0x10);
          puVar8 = puVar8 + 1;
          iVar11 = iVar11 + -1;
          *puVar10 = (char)((uint)(*(int *)(lVar5 + 0x1800 + (ulonglong)bVar1 * 4) +
                                   *(int *)(lVar5 + (ulonglong)(bVar2 | 0x500) * 4) +
                                  *(int *)(lVar5 + 0x1c00 + (ulonglong)bVar3 * 4)) >> 0x10);
          puVar10 = puVar10 + 1;
        } while (iVar11 != 0);
      }
      local_44 = local_44 + 1;
      param_2 = param_2 + 1;
      param_5 = param_5 + -1;
    } while (0 < param_5);
  }
  return;
}

