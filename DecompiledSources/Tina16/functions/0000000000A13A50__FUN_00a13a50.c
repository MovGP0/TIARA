/* Ghidra address: 00a13a50 */
/* Ghidra symbol: FUN_00a13a50 */


void FUN_00a13a50(longlong param_1,longlong param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  ulonglong uVar5;
  short sVar6;
  short sVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (0 < (int)param_4) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x270) + 0x30);
    iVar1 = *(int *)(param_1 + 0x88);
    uVar9 = 0;
    do {
      if (iVar1 != 0) {
        pbVar4 = *(byte **)(param_2 + uVar9 * 8);
        iVar3 = iVar1;
        do {
          uVar5 = (ulonglong)(pbVar4[2] >> 2 & 0x3e);
          lVar8 = (ulonglong)((pbVar4[1] & 0xfc) << 4) +
                  *(longlong *)(lVar2 + (ulonglong)(*pbVar4 & 0xf8));
          sVar7 = *(short *)(uVar5 + lVar8);
          sVar6 = sVar7 + 1;
          if (sVar6 != 0) {
            sVar7 = sVar6;
          }
          *(short *)(uVar5 + lVar8) = sVar7;
          pbVar4 = pbVar4 + 3;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != param_4);
  }
  return;
}

