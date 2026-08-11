/* Ghidra address: 011767e0 */
/* Ghidra symbol: FUN_011767e0 */


int FUN_011767e0(int *param_1,short param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  int local_60;
  int local_5c;
  
  if (param_2 == 0x58) {
LAB_01176824:
    iVar2 = param_1[2];
    iVar6 = *param_1;
    iVar3 = param_1[6];
    iVar7 = param_1[8];
    iVar5 = param_1[0xc];
    iVar4 = 1;
    local_5c = iVar6;
  }
  else {
    if (param_2 != 0x59) {
      if (param_2 == 0x78) goto LAB_01176824;
      if (param_2 != 0x79) {
        return 0;
      }
    }
    iVar2 = param_1[3];
    iVar3 = param_1[7];
    iVar7 = param_1[9];
    iVar5 = param_1[0xd];
    iVar4 = -1;
    iVar6 = iVar2;
    local_5c = param_1[1];
  }
  dVar10 = (double)iVar3;
  if (iVar5 == 0) {
    iVar5 = 0;
    local_60 = 0;
    if (-1 < iVar3 + -1) {
      do {
        iVar7 = 1;
        do {
          fVar8 = (float)FUN_00526700(0x41200000,(float)local_60);
          dVar9 = (double)FUN_00c42800((double)iVar7 * (double)fVar8);
          iVar1 = FUN_0040c770((dVar9 * (double)(iVar2 - local_5c)) / dVar10 + 0.5);
          (&DAT_020417ac)[iVar5] = iVar6 + iVar4 * iVar1;
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar7 != 10);
        local_60 = local_60 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (iVar5 == 1) {
    iVar5 = 0;
    local_60 = 0;
    if (-1 < iVar3 + -1) {
      do {
        iVar4 = iVar7 + -1;
        iVar6 = 1;
        if (0 < iVar4) {
          do {
            iVar1 = FUN_0040c770(((double)(iVar6 + local_60 * iVar7) * (double)(iVar2 - local_5c)) /
                                 (dVar10 * (double)iVar7) + 0.5);
            (&DAT_020417ac)[iVar5] = iVar1 + local_5c;
            iVar5 = iVar5 + 1;
            iVar6 = iVar6 + 1;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        local_60 = local_60 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    iVar5 = 0;
  }
  return iVar5;
}

