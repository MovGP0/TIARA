/* Ghidra address: 00c2cea0 */
/* Ghidra symbol: FUN_00c2cea0 */


void FUN_00c2cea0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  char *pcVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  int local_40;
  int local_3c;
  int local_38;
  uint uVar10;
  
  cVar2 = FUN_00c28880(param_1);
  if ((cVar2 == '\0') && (cVar2 = FUN_00c2a4a0(param_1), cVar2 != '\0')) {
    cVar2 = FUN_00c2e3e0(*(undefined8 *)(param_1 + 0x60));
    local_40 = 0;
    iVar8 = *(ushort *)(param_1 + 0x4d) - 1;
    local_3c = 0;
    uVar10 = (uint)*(ushort *)(param_1 + 0x4f);
    iVar9 = uVar10 - 1;
    bVar1 = true;
    while ((local_40 <= iVar8 && (bVar1))) {
      local_38 = 0;
      uVar13 = uVar10;
      if (-1 < iVar9) {
        do {
          cVar3 = FUN_00c2a250(param_1,local_40,local_38);
          if (cVar3 != cVar2) {
            bVar1 = false;
            break;
          }
          local_38 = local_38 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (bVar1) {
        local_40 = local_40 + 1;
      }
    }
    bVar1 = true;
    while ((local_40 <= iVar8 && (bVar1))) {
      local_38 = 0;
      uVar13 = uVar10;
      if (-1 < iVar9) {
        do {
          cVar3 = FUN_00c2a250(param_1,iVar8,local_38);
          if (cVar3 != cVar2) {
            bVar1 = false;
            break;
          }
          local_38 = local_38 + 1;
          uVar13 = uVar13 - 1;
        } while (uVar13 != 0);
      }
      if (bVar1) {
        iVar8 = iVar8 + -1;
      }
    }
    if (local_40 <= iVar8) {
      bVar1 = true;
      while ((local_3c <= iVar9 && (bVar1))) {
        local_38 = local_40;
        if (local_40 <= iVar8) {
          iVar7 = (iVar8 - local_40) + 1;
          do {
            cVar3 = FUN_00c2a250(param_1,local_38,local_3c);
            if (cVar3 != cVar2) {
              bVar1 = false;
              break;
            }
            local_38 = local_38 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (bVar1) {
          local_3c = local_3c + 1;
        }
      }
      bVar1 = true;
      while ((local_3c <= iVar9 && (bVar1))) {
        local_38 = local_40;
        if (local_40 <= iVar8) {
          iVar7 = (iVar8 - local_40) + 1;
          do {
            cVar3 = FUN_00c2a250(param_1,local_38,iVar9);
            if (cVar3 != cVar2) {
              bVar1 = false;
              break;
            }
            local_38 = local_38 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        if (bVar1) {
          iVar9 = iVar9 + -1;
        }
      }
    }
    if ((iVar8 < local_40) || (iVar9 < local_3c)) {
      iVar8 = FUN_00c1aa10(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50));
      if (((iVar8 < 2) || (sVar4 = FUN_00c2e520(*(undefined8 *)(param_1 + 0x60)), sVar4 == 0)) &&
         (iVar8 = FUN_00c1aa10(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x50)), iVar8 != 1)) {
        FUN_00c28830(param_1);
      }
      else {
        FUN_00c28ad0(param_1);
        FUN_00c28ba0(param_1);
        FUN_00c28bd0(param_1);
        *(undefined2 *)(param_1 + 0x49) = 0;
        *(undefined2 *)(param_1 + 0x4b) = 0;
        *(undefined2 *)(param_1 + 0x4d) = 1;
        *(undefined2 *)(param_1 + 0x4f) = 1;
        FUN_00c28a90();
        pcVar5 = (char *)FUN_00c2a3f0(param_1,0);
        *pcVar5 = cVar2;
      }
    }
    else {
      iVar7 = (iVar8 - local_40) + 1;
      iVar9 = iVar9 - local_3c;
      iVar8 = iVar7 * (iVar9 + 1);
      lVar6 = FUN_004095c0((longlong)iVar8);
      lVar11 = *(longlong *)(param_1 + 0x30) +
               (longlong)(int)(local_3c * (uint)*(ushort *)(param_1 + 0x4d)) + (longlong)local_40;
      if (-1 < iVar9) {
        iVar14 = iVar9 + 1;
        lVar12 = lVar6;
        do {
          FUN_00409a70(lVar11,lVar12,(longlong)iVar7);
          lVar11 = lVar11 + (ulonglong)*(ushort *)(param_1 + 0x4d);
          lVar12 = lVar12 + iVar7;
          iVar14 = iVar14 + -1;
        } while (iVar14 != 0);
      }
      FUN_00c28ad0(param_1);
      *(longlong *)(param_1 + 0x30) = lVar6;
      *(int *)(param_1 + 0x38) = iVar8;
      *(short *)(param_1 + 0x49) = *(short *)(param_1 + 0x49) + (short)local_40;
      *(short *)(param_1 + 0x4b) = *(short *)(param_1 + 0x4b) + (short)local_3c;
      *(short *)(param_1 + 0x4d) = (short)iVar7;
      *(short *)(param_1 + 0x4f) = (short)(iVar9 + 1);
      FUN_00c28ba0();
      FUN_00c28bd0(param_1);
    }
  }
  return;
}

