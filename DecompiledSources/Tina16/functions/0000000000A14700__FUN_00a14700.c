/* Ghidra address: 00a14700 */
/* Ghidra symbol: FUN_00a14700 */


void FUN_00a14700(longlong param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  short sVar4;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  int iVar8;
  byte *pbVar9;
  
  if (0 < (int)param_4) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x30);
    iVar2 = *(int *)(param_1 + 0x88);
    uVar7 = 0;
    do {
      if (iVar2 != 0) {
        pcVar6 = *(char **)(param_3 + uVar7 * 8);
        pbVar9 = *(byte **)(param_2 + uVar7 * 8);
        iVar8 = iVar2;
        do {
          bVar1 = pbVar9[2];
          lVar5 = (ulonglong)(pbVar9[1] >> 2) * 0x40 +
                  *(longlong *)(lVar3 + (ulonglong)((uint)(*pbVar9 >> 3) * 8));
          sVar4 = *(short *)(lVar5 + (ulonglong)(bVar1 >> 3) * 2);
          if (sVar4 == 0) {
            FUN_00a14d20(param_1);
            sVar4 = *(short *)(lVar5 + (ulonglong)(bVar1 >> 3) * 2);
          }
          *pcVar6 = (char)sVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pbVar9 = pbVar9 + 3;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != param_4);
  }
  return;
}

