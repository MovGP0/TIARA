/* Ghidra address: 00c3c230 */
/* Ghidra symbol: FUN_00c3c230 */


int FUN_00c3c230(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = 4;
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      piVar1 = (int *)FUN_004aeac0(param_2,iVar4);
      if (*piVar1 == 100) {
        if (*(byte *)(param_1 + 0x78) < 8) {
          bVar6 = ((int)CONCAT71((int7)((ulonglong)piVar1 >> 8),1) <<
                   (*(byte *)(param_1 + 0x78) & 0x1f) & 0x39U) != 0;
        }
        else {
          bVar6 = false;
        }
        if (bVar6) goto LAB_00c3c2a9;
        lVar2 = FUN_004aeac0(param_2,iVar4);
        iVar3 = iVar3 + *(int *)(lVar2 + 8) + 8;
      }
      else {
LAB_00c3c2a9:
        piVar1 = (int *)FUN_004aeac0(param_2,iVar4);
        if (*piVar1 == 0x6a) {
          if (*(byte *)(param_1 + 0x78) < 8) {
            bVar6 = ((int)CONCAT71((int7)((ulonglong)piVar1 >> 8),1) <<
                     (*(byte *)(param_1 + 0x78) & 0x1f) & 0x39U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (!bVar6) {
            lVar2 = FUN_004aeac0(param_2,iVar4);
            iVar3 = iVar3 + *(int *)(lVar2 + 8) + 8;
            goto LAB_00c3c300;
          }
        }
        lVar2 = FUN_004aeac0(param_2,iVar4);
        iVar3 = iVar3 + *(int *)(lVar2 + 8) + 0xc;
      }
LAB_00c3c300:
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return iVar3;
}

