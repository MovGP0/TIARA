/* Ghidra address: 0134eb10 */
/* Ghidra symbol: FUN_0134eb10 */


void FUN_0134eb10(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar3 = ((param_2 - DAT_021078bc) + 4) / 8;
  iVar5 = ((param_3 - DAT_021078c0) + 4) / 8;
  iVar1 = ((param_4 - DAT_021078bc) + 4) / 8;
  iVar2 = ((param_5 - DAT_021078c0) + 4) / 8;
  if ((((-1 < iVar3) && (iVar3 < DAT_021078c4)) && (-1 < iVar5)) && (iVar5 < DAT_021078c8)) {
    *(undefined1 *)(DAT_021078e0 + (longlong)(iVar3 + iVar5 * DAT_021078c4) * 8) = 0xff;
  }
  if (((-1 < iVar1) && (iVar1 < DAT_021078c4)) && ((-1 < iVar2 && (iVar2 < DAT_021078c8)))) {
    *(undefined1 *)(DAT_021078e0 + (longlong)(iVar1 + iVar2 * DAT_021078c4) * 8) = 0xff;
  }
  bVar8 = iVar5 != iVar2;
  iVar7 = DAT_021078c8;
  iVar6 = DAT_021078c4;
  iVar4 = iVar3;
  if (!bVar8) {
    iVar7 = DAT_021078c4;
    iVar6 = DAT_021078c8;
    iVar4 = iVar5;
    iVar5 = iVar3;
    iVar2 = iVar1;
  }
  if ((-1 < iVar4) && (iVar4 < iVar6)) {
    iVar1 = iVar2;
    if (iVar2 < iVar5) {
      iVar1 = iVar5;
      iVar5 = iVar2;
    }
    if (iVar5 < 0) {
      iVar5 = 0;
    }
    if (iVar7 <= iVar1) {
      iVar1 = iVar7 + -1;
    }
    if (iVar5 < iVar1) {
      if (bVar8) {
        if (iVar5 <= iVar1 + -1) {
          iVar3 = ((iVar1 + -1) - iVar5) + 1;
          iVar2 = iVar5;
          do {
            *(undefined1 *)(DAT_021078e0 + 2 + (longlong)(iVar4 + iVar2 * DAT_021078c4) * 8) = 0xff;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar5 = iVar5 + 1;
        if (iVar5 <= iVar1 + -1) {
          iVar2 = ((iVar1 + -1) - iVar5) + 1;
          do {
            *(undefined1 *)(DAT_021078e0 + (longlong)(iVar4 + iVar5 * DAT_021078c4) * 8) = 6;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
      else {
        if (iVar5 <= iVar1 + -1) {
          iVar3 = ((iVar1 + -1) - iVar5) + 1;
          iVar2 = iVar5;
          do {
            *(undefined1 *)(DAT_021078e0 + 1 + (longlong)(iVar2 + iVar4 * DAT_021078c4) * 8) = 0xff;
            iVar2 = iVar2 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar5 = iVar5 + 1;
        if (iVar5 <= iVar1 + -1) {
          iVar2 = ((iVar1 + -1) - iVar5) + 1;
          do {
            *(undefined1 *)(DAT_021078e0 + (longlong)(iVar5 + iVar4 * DAT_021078c4) * 8) = 6;
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
      }
    }
  }
  return;
}

