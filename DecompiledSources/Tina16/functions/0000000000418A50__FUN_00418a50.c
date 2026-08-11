/* Ghidra address: 00418a50 */
/* Ghidra symbol: FUN_00418a50 */


void FUN_00418a50(longlong param_1,int *param_2)

{
  short sVar1;
  ushort uVar2;
  byte bVar3;
  bool bVar4;
  ulonglong uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  
  iVar7 = 1;
  uVar5 = 0;
  if (param_1 == 0) {
    *param_2 = 1;
  }
  else {
    while (*(short *)(param_1 + -2 + (longlong)iVar7 * 2) == 0x20) {
      iVar7 = iVar7 + 1;
    }
    bVar4 = false;
    sVar1 = *(short *)(param_1 + -2 + (longlong)iVar7 * 2);
    if (sVar1 == 0x2d) {
      bVar4 = true;
      iVar7 = iVar7 + 1;
    }
    else if (sVar1 == 0x2b) {
      iVar7 = iVar7 + 1;
    }
    bVar3 = 1;
    uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar7 * 2);
    if (uVar2 == 0x24) {
      bVar10 = true;
    }
    else {
      uVar6 = uVar2;
      if ((ushort)(uVar2 - 0x61) < 0x1a) {
        uVar6 = uVar2 & 0xffdf;
      }
      bVar10 = uVar6 == 0x58;
    }
    if (bVar10) {
      bVar10 = true;
    }
    else {
      if (uVar2 == 0x30) {
        iVar8 = 0;
        if (param_1 != 0) {
          iVar8 = *(int *)(param_1 + -4);
        }
        bVar10 = iVar7 < iVar8;
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        uVar6 = *(ushort *)(param_1 + -2 + (longlong)(iVar7 + 1) * 2);
        if ((ushort)(uVar6 - 0x61) < 0x1a) {
          uVar6 = uVar6 & 0xffdf;
        }
        bVar10 = uVar6 == 0x58;
      }
      else {
        bVar10 = false;
      }
    }
    if (bVar10) {
      if (uVar2 == 0x30) {
        iVar7 = iVar7 + 1;
      }
      do {
        iVar7 = iVar7 + 1;
        uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar7 * 2);
        if ((ushort)(uVar2 - 0x30) < 10) {
          uVar9 = uVar2 - 0x30;
        }
        else if ((ushort)(uVar2 - 0x41) < 6) {
          uVar9 = uVar2 - 0x37;
        }
        else {
          if (5 < (ushort)(uVar2 - 0x61)) goto LAB_00418c5a;
          uVar9 = uVar2 - 0x57;
        }
        if ((0xfffffffffffffff < uVar5) || ((bVar4 && (uVar9 != 0)))) goto LAB_00418c5a;
        uVar5 = uVar5 * 0x10 + (ulonglong)uVar9;
        bVar3 = 0;
      } while( true );
    }
    while (uVar2 = *(ushort *)(param_1 + -2 + (longlong)iVar7 * 2), (ushort)(uVar2 - 0x30) < 10) {
      uVar9 = uVar2 - 0x30;
      if (0x1999999999999998 < uVar5) {
        if (0x1999999999999999 < uVar5) break;
        if (((longlong)(int)uVar9 < 0) || ((ulonglong)(longlong)(int)uVar9 <= uVar5 * -10 - 1)) {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
        if (bVar10) break;
      }
      if ((bVar4) && (uVar9 != 0)) break;
      uVar5 = uVar5 * 10 + (ulonglong)uVar9;
      iVar7 = iVar7 + 1;
      bVar3 = 0;
    }
LAB_00418c5a:
    if ((bool)(*(short *)(param_1 + -2 + (longlong)iVar7 * 2) != 0 | bVar3)) {
      *param_2 = iVar7;
    }
    else {
      *param_2 = 0;
    }
  }
  return;
}

