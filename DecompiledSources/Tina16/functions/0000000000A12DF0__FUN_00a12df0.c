/* Ghidra address: 00a12df0 */
/* Ghidra symbol: FUN_00a12df0 */


void FUN_00a12df0(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  uint uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  
  if (0 < (int)param_4) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x270) + 0x30);
    lVar6 = *plVar5;
    lVar7 = plVar5[1];
    lVar8 = plVar5[2];
    uVar4 = *(uint *)(param_1 + 0x88);
    uVar12 = 0;
    do {
      if (uVar4 != 0) {
        pcVar9 = *(char **)(param_3 + uVar12 * 8);
        pbVar11 = *(byte **)(param_2 + uVar12 * 8);
        uVar10 = uVar4;
        if ((uVar4 & 1) != 0) {
          bVar3 = *pbVar11;
          pbVar1 = pbVar11 + 1;
          pbVar2 = pbVar11 + 2;
          pbVar11 = pbVar11 + 3;
          *pcVar9 = *(char *)(lVar7 + (ulonglong)*pbVar1) + *(char *)(lVar6 + (ulonglong)bVar3) +
                    *(char *)(lVar8 + (ulonglong)*pbVar2);
          pcVar9 = pcVar9 + 1;
          uVar10 = uVar4 - 1;
        }
        if (uVar4 != 1) {
          do {
            *pcVar9 = *(char *)(lVar7 + (ulonglong)pbVar11[1]) +
                      *(char *)(lVar6 + (ulonglong)*pbVar11) +
                      *(char *)(lVar8 + (ulonglong)pbVar11[2]);
            pcVar9[1] = *(char *)(lVar7 + (ulonglong)pbVar11[4]) +
                        *(char *)(lVar6 + (ulonglong)pbVar11[3]) +
                        *(char *)(lVar8 + (ulonglong)pbVar11[5]);
            pbVar11 = pbVar11 + 6;
            pcVar9 = pcVar9 + 2;
            uVar10 = uVar10 - 2;
          } while (uVar10 != 0);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != param_4);
  }
  return;
}

