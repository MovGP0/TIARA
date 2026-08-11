/* Ghidra address: 00a13220 */
/* Ghidra symbol: FUN_00a13220 */


void FUN_00a13220(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  byte *pbVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  if (0 < (int)param_4) {
    lVar5 = *(longlong *)(param_1 + 0x270);
    uVar2 = *(uint *)(param_1 + 0x90);
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar14 = 0;
    do {
      FUN_00a1bd20(*(undefined8 *)(param_3 + uVar14 * 8),uVar3);
      iVar4 = *(int *)(lVar5 + 0x4c);
      if (0 < (int)uVar2) {
        uVar13 = 0;
        do {
          if (uVar3 != 0) {
            lVar6 = *(longlong *)(*(longlong *)(lVar5 + 0x30) + uVar13 * 8);
            lVar7 = *(longlong *)(lVar5 + 0x50 + uVar13 * 8);
            pbVar12 = (byte *)(*(longlong *)(param_2 + uVar14 * 8) + uVar13);
            uVar9 = 0;
            pcVar10 = *(char **)(param_3 + uVar14 * 8);
            if (uVar3 != 1) {
              uVar9 = 0;
              iVar8 = (uVar3 & 1) - uVar3;
              do {
                lVar11 = (longlong)iVar4 * 0x40 + lVar7;
                *pcVar10 = *pcVar10 +
                           *(char *)(lVar6 + (ulonglong)*pbVar12 +
                                             (longlong)*(int *)(lVar11 + uVar9 * 4));
                pbVar1 = pbVar12 + (int)uVar2;
                pbVar12 = pbVar12 + (longlong)(int)uVar2 * 2;
                pcVar10[1] = pcVar10[1] +
                             *(char *)(lVar6 + (ulonglong)*pbVar1 +
                                               (longlong)
                                               *(int *)(lVar11 + (ulonglong)((int)uVar9 + 1U & 0xf)
                                                                 * 4));
                pcVar10 = pcVar10 + 2;
                uVar9 = (ulonglong)((int)uVar9 + 2U & 0xf);
                iVar8 = iVar8 + 2;
              } while (iVar8 != 0);
            }
            if ((uVar3 & 1) != 0) {
              *pcVar10 = *pcVar10 +
                         *(char *)(lVar6 + (ulonglong)*pbVar12 +
                                           (longlong)
                                           *(int *)(lVar7 + (longlong)iVar4 * 0x40 + uVar9 * 4));
            }
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 != uVar2);
      }
      *(uint *)(lVar5 + 0x4c) = iVar4 + 1U & 0xf;
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_4);
  }
  return;
}

