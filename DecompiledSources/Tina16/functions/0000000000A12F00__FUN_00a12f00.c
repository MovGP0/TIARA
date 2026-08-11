/* Ghidra address: 00a12f00 */
/* Ghidra symbol: FUN_00a12f00 */


void FUN_00a12f00(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  byte *pbVar6;
  longlong lVar7;
  byte *pbVar8;
  char cVar9;
  ulonglong uVar10;
  int iVar11;
  char *pcVar12;
  ulonglong local_70;
  
  if (0 < (int)param_4) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x30);
    iVar2 = *(int *)(param_1 + 0x88);
    uVar3 = *(uint *)(param_1 + 0x90);
    uVar10 = (ulonglong)(uVar3 & 3);
    local_70 = 0;
    do {
      if (iVar2 != 0) {
        pcVar12 = *(char **)(param_3 + local_70 * 8);
        pbVar6 = *(byte **)(param_2 + local_70 * 8);
        iVar11 = iVar2;
        do {
          if ((int)uVar3 < 1) {
            cVar9 = '\0';
          }
          else {
            lVar7 = 0;
            cVar9 = '\0';
            pbVar8 = pbVar6;
            if (2 < (ulonglong)uVar3 - 1) {
              do {
                cVar9 = *(char *)(*(longlong *)(lVar4 + 0x18 + lVar7 * 8) +
                                 (ulonglong)pbVar6[lVar7 + 3]) +
                        *(char *)(*(longlong *)(lVar4 + 0x10 + lVar7 * 8) +
                                 (ulonglong)pbVar6[lVar7 + 2]) +
                        *(char *)(*(longlong *)(lVar4 + 8 + lVar7 * 8) +
                                 (ulonglong)pbVar6[lVar7 + 1]) +
                        *(char *)(*(longlong *)(lVar4 + lVar7 * 8) + (ulonglong)pbVar6[lVar7]) +
                        cVar9;
                lVar7 = lVar7 + 4;
              } while (uVar3 - uVar10 != lVar7);
              pbVar8 = pbVar6 + lVar7;
            }
            if (uVar10 != 0) {
              plVar5 = (longlong *)(lVar4 + lVar7 * 8);
              lVar7 = -uVar10;
              do {
                bVar1 = *pbVar8;
                pbVar8 = pbVar8 + 1;
                cVar9 = cVar9 + *(char *)(*plVar5 + (ulonglong)bVar1);
                plVar5 = plVar5 + 1;
                lVar7 = lVar7 + 1;
              } while (lVar7 != 0);
            }
            pbVar6 = pbVar6 + (ulonglong)(uVar3 - 1) + 1;
          }
          *pcVar12 = cVar9;
          pcVar12 = pcVar12 + 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      local_70 = local_70 + 1;
    } while (local_70 != param_4);
  }
  return;
}

