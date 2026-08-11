/* Ghidra address: 00420b20 */
/* Ghidra symbol: FUN_00420b20 */


undefined8 FUN_00420b20(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  ulonglong uVar9;
  char *pcVar10;
  ImgDelayDescr *pIVar11;
  undefined8 uVar12;
  
  uVar12 = 0x8007007e;
  pIVar11 = &ImgDelayDescr_0356f000;
  if (ImgDelayDescr_0356f000.szName != 0) {
    uVar2 = ImgDelayDescr_0356f000.szName;
    do {
      pcVar10 = (char *)((ulonglong)uVar2 + 0x400000);
      pcVar7 = pcVar10;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      pcVar8 = param_1;
      do {
        cVar1 = *pcVar8;
        pcVar8 = pcVar8 + 1;
      } while (cVar1 != '\0');
      pcVar3 = pcVar7 + ~(ulonglong)pcVar10;
      if (pcVar3 == pcVar8 + ~(ulonglong)param_1) {
        if (pcVar3 == (char *)0x0) break;
        pcVar8 = param_1;
        if (pcVar3 != (char *)0x1) {
          lVar4 = ((ulonglong)uVar2 + 0x400002) - (longlong)pcVar7;
          do {
            if (*pcVar8 != *pcVar10) break;
            pcVar8 = pcVar8 + 1;
            pcVar10 = pcVar10 + 1;
            lVar4 = lVar4 + 1;
          } while (lVar4 != 0);
        }
        if (*pcVar8 == *pcVar10) break;
      }
      uVar2 = pIVar11[1].szName;
      pIVar11 = pIVar11 + 1;
    } while (uVar2 != 0);
  }
  if (pIVar11->szName != 0) {
    uVar5 = (ulonglong)(uint)pIVar11->pIAT;
    uVar9 = uVar5 + 0x400000;
    uVar12 = 0;
    if (*(longlong *)(uVar5 + 0x400000) != 0) {
      uVar6 = 0;
      do {
        lVar4 = uVar6 * 8;
        uVar6 = uVar6 + 1;
      } while (*(longlong *)(uVar5 + 0x400008 + lVar4) != 0);
      uVar5 = uVar9 + (uVar6 & 0xffffffff) * 8;
      for (; uVar9 < uVar5; uVar9 = uVar9 + 8) {
        FUN_00420190(pIVar11,uVar9);
      }
    }
  }
  return uVar12;
}

