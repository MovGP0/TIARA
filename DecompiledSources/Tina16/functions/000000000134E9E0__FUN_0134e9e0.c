/* Ghidra address: 0134e9e0 */
/* Ghidra symbol: FUN_0134e9e0 */


void FUN_0134e9e0(undefined8 param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = ((param_2 - DAT_021078bc) + 4) / 8;
  iVar3 = ((param_3 - DAT_021078c0) + 4) / 8;
  iVar4 = ((param_4 - DAT_021078bc) + 4) / 8;
  param_5 = ((param_5 - DAT_021078c0) + 4) / 8;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  if (DAT_021078c4 <= iVar4) {
    iVar4 = DAT_021078c4 + -1;
  }
  if (DAT_021078c8 <= param_5) {
    param_5 = DAT_021078c8 + -1;
  }
  if (((iVar2 <= iVar4) && (iVar3 <= param_5)) && (iVar3 <= param_5)) {
    iVar6 = (param_5 - iVar3) + 1;
    do {
      if (iVar2 <= iVar4) {
        iVar7 = (iVar4 - iVar2) + 1;
        iVar5 = iVar2;
        do {
          pbVar1 = (byte *)(DAT_021078e0 + (longlong)(iVar5 + iVar3 * DAT_021078c4) * 8);
          if (*pbVar1 < 0xfa) {
            *pbVar1 = *pbVar1 + 5;
          }
          else {
            *pbVar1 = 0xff;
          }
          iVar5 = iVar5 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

