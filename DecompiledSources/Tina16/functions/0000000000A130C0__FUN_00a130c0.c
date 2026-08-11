/* Ghidra address: 00a130c0 */
/* Ghidra symbol: FUN_00a130c0 */


void FUN_00a130c0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  byte *pbVar12;
  char *pcVar13;
  int iVar14;
  uint local_80;
  ulonglong local_78;
  
  if (0 < (int)param_4) {
    lVar2 = *(longlong *)(param_1 + 0x270);
    plVar3 = *(longlong **)(lVar2 + 0x30);
    lVar4 = *plVar3;
    lVar5 = plVar3[1];
    lVar6 = plVar3[2];
    iVar1 = *(int *)(param_1 + 0x88);
    local_80 = *(uint *)(lVar2 + 0x4c);
    local_78 = 0;
    do {
      if (iVar1 != 0) {
        lVar7 = *(longlong *)(lVar2 + 0x50);
        lVar8 = *(longlong *)(lVar2 + 0x58);
        lVar9 = *(longlong *)(lVar2 + 0x60);
        pcVar13 = *(char **)(param_3 + local_78 * 8);
        pbVar12 = *(byte **)(param_2 + local_78 * 8);
        uVar11 = 0;
        iVar14 = iVar1;
        do {
          lVar10 = (longlong)(int)local_80 * 0x40;
          *pcVar13 = *(char *)(lVar5 + (ulonglong)pbVar12[1] +
                                       (longlong)*(int *)(lVar8 + lVar10 + uVar11 * 4)) +
                     *(char *)(lVar4 + (ulonglong)*pbVar12 +
                                       (longlong)*(int *)(lVar7 + lVar10 + uVar11 * 4)) +
                     *(char *)(lVar6 + (ulonglong)pbVar12[2] +
                                       (longlong)*(int *)(lVar10 + lVar9 + uVar11 * 4));
          pcVar13 = pcVar13 + 1;
          uVar11 = (ulonglong)((int)uVar11 + 1U & 0xf);
          pbVar12 = pbVar12 + 3;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      local_80 = local_80 + 1 & 0xf;
      *(uint *)(lVar2 + 0x4c) = local_80;
      local_78 = local_78 + 1;
    } while (local_78 != param_4);
  }
  return;
}

