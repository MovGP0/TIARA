/* Ghidra address: 0062d340 */
/* Ghidra symbol: FUN_0062d340 */


uint FUN_0062d340(longlong param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  int iVar15;
  char cVar16;
  longlong lVar17;
  char cVar18;
  int iVar19;
  uint uVar20;
  
  lVar5 = *(longlong *)(param_1 + 0x50);
  uVar3 = *(uint *)(param_1 + 0x94);
  pcVar1 = (char *)(lVar5 + (ulonglong)uVar3);
  uVar9 = (ulonglong)(int)*(uint *)(param_1 + 0xa0);
  uVar11 = *(int *)(param_1 + 0x44) - 0x106;
  uVar20 = uVar3 - uVar11;
  if (uVar3 < uVar11 || uVar20 == 0) {
    uVar20 = 0;
  }
  cVar18 = pcVar1[uVar9 - 1];
  cVar16 = pcVar1[uVar9];
  uVar11 = *(uint *)(param_1 + 0xa4) >> 2;
  if (*(uint *)(param_1 + 0xa0) < *(uint *)(param_1 + 0xb4)) {
    uVar11 = *(uint *)(param_1 + 0xa4);
  }
  uVar4 = *(uint *)(param_1 + 0x9c);
  uVar10 = *(uint *)(param_1 + 0xb8);
  if (uVar4 < *(uint *)(param_1 + 0xb8)) {
    uVar10 = uVar4;
  }
  do {
    pcVar2 = (char *)(lVar5 + (ulonglong)param_2);
    iVar8 = (int)uVar9;
    if ((((pcVar2[iVar8] == cVar16) && (pcVar2[(longlong)iVar8 + -1] == cVar18)) &&
        (*pcVar2 == *pcVar1)) && (pcVar2[1] == pcVar1[1])) {
      lVar17 = (ulonglong)param_2 + lVar5 + 10;
      lVar14 = 0;
      iVar15 = 2;
      do {
        iVar6 = (int)pcVar1;
        if (pcVar1[lVar14 + 3] != *(char *)(lVar17 + -7 + lVar14)) {
          iVar19 = iVar6 + 3 + (int)lVar14;
          break;
        }
        iVar19 = iVar6 + iVar15;
        if (pcVar1[lVar14 + 4] != *(char *)(lVar17 + -6 + lVar14)) {
          iVar19 = iVar19 + 2;
          break;
        }
        if (pcVar1[lVar14 + 5] != *(char *)(lVar17 + -5 + lVar14)) {
          iVar19 = iVar19 + 3;
          break;
        }
        if (pcVar1[lVar14 + 6] != *(char *)(lVar17 + -4 + lVar14)) {
          iVar19 = iVar19 + 4;
          break;
        }
        if (pcVar1[lVar14 + 7] != *(char *)(lVar17 + -3 + lVar14)) {
          iVar19 = iVar19 + 5;
          break;
        }
        if (pcVar1[lVar14 + 8] != *(char *)(lVar17 + -2 + lVar14)) {
          iVar19 = iVar19 + 6;
          break;
        }
        if (pcVar1[lVar14 + 9] != *(char *)(lVar17 + -1 + lVar14)) {
          iVar19 = iVar19 + 7;
          break;
        }
        iVar19 = iVar6 + 8 + iVar15;
        if (0xf9 < lVar14 + 2U) break;
        iVar15 = iVar15 + 8;
        pcVar2 = (char *)(lVar17 + lVar14);
        lVar7 = lVar14 + 10;
        lVar14 = lVar14 + 8;
      } while (pcVar1[lVar7] == *pcVar2);
      lVar14 = -(longlong)(int)(((int)lVar5 + 0x102 + uVar3) - iVar19);
      uVar13 = lVar14 + 0x102;
      uVar12 = (uint)uVar13;
      if (iVar8 < (int)uVar12) {
        *(uint *)(param_1 + 0x98) = param_2;
        if ((int)uVar10 <= (int)uVar12) {
LAB_0062d534:
          if (uVar4 < uVar12) {
            uVar12 = uVar4;
          }
          return uVar12;
        }
        cVar18 = pcVar1[lVar14 + 0x101];
        cVar16 = pcVar1[uVar13];
        uVar9 = uVar13 & 0xffffffff;
      }
    }
    uVar12 = (uint)uVar9;
    param_2 = (uint)*(ushort *)
                     (*(longlong *)(param_1 + 0x60) +
                     (ulonglong)(param_2 & *(uint *)(param_1 + 0x4c)) * 2);
    if ((param_2 <= uVar20) || (uVar11 = uVar11 - 1, uVar11 == 0)) goto LAB_0062d534;
  } while( true );
}

