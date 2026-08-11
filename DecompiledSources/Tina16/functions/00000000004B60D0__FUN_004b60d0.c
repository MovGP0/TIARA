/* Ghidra address: 004b60d0 */
/* Ghidra symbol: FUN_004b60d0 */


uint FUN_004b60d0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  int iVar10;
  int unaff_EDI;
  int unaff_R13D;
  uint uVar11;
  
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = *(int *)(param_2 + -4);
  }
  uVar6 = FUN_00416740(param_2);
  uVar4 = (uint)*(byte *)((longlong)param_1 + 0x4a) * 2 +
          (uint)((*(byte *)((longlong)param_1 + 0x32) & 8) != 0);
  iVar10 = 0;
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      uVar11 = (uint)(iVar10 + iVar2) >> 1;
      lVar7 = FUN_00416740(*(undefined8 *)(param_1[7] + (longlong)(int)uVar11 * 0x10));
      if (uVar4 == 0) {
        unaff_EDI = FUN_004428c0(lVar7,uVar6,iVar3);
      }
      else if (uVar4 == 1) {
        unaff_EDI = FUN_0043e7e0(lVar7,uVar6,iVar3);
      }
      else if (uVar4 == 2) {
        unaff_EDI = FUN_00442880(lVar7,uVar6,iVar3);
      }
      else if (uVar4 == 3) {
        unaff_EDI = FUN_0043e7a0(lVar7,uVar6,iVar3);
      }
      iVar5 = unaff_EDI;
      if ((unaff_EDI == 0) &&
         (lVar8 = (longlong)iVar3, *(short *)(lVar7 + lVar8 * 2) != (short)param_1[6])) {
        plVar1 = param_1 + 6;
        uVar9 = uVar4 & 1;
        if (uVar9 == 0) {
          iVar5 = FUN_004428c0(lVar7 + lVar8 * 2,plVar1,1);
          unaff_R13D = iVar5;
        }
        else if (uVar9 == 1) {
          iVar5 = FUN_0043e7e0(lVar7 + lVar8 * 2,plVar1,1);
          unaff_R13D = iVar5;
        }
        else if (uVar9 == 2) {
          iVar5 = FUN_00442880(lVar7 + lVar8 * 2,plVar1,1);
          unaff_R13D = iVar5;
        }
        else {
          iVar5 = unaff_R13D;
          if (uVar9 == 3) {
            iVar5 = FUN_0043e7a0(lVar7 + lVar8 * 2,plVar1,1);
            unaff_R13D = iVar5;
          }
        }
      }
      if (iVar5 == 0) {
        return uVar11;
      }
      if (iVar5 < 0) {
        iVar10 = uVar11 + 1;
      }
      else {
        iVar2 = uVar11 - 1;
      }
    } while (iVar10 <= iVar2);
  }
  return 0xffffffff;
}

