/* Ghidra address: 018a51c0 */
/* Ghidra symbol: FUN_018a51c0 */


int FUN_018a51c0(undefined8 param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 local_40;
  undefined1 local_38 [16];
  
  iVar7 = 0;
  iVar3 = FUN_004b2060(param_1);
  iVar3 = iVar3 + -1;
  if (-1 < iVar3) {
    do {
      uVar1 = (longlong)(iVar7 + iVar3) / 2;
      uVar5 = uVar1 & 0xffffffff;
      if (param_3 == 0) {
        lVar6 = FUN_018a4e90(param_1,uVar5);
        iVar8 = FUN_0040c770((double)*(int *)(lVar6 + 0x18) / 5.0);
      }
      else {
        iVar8 = 0;
      }
      lVar6 = FUN_018a4e90(param_1,uVar5);
      if (param_2 + iVar8 < *(int *)(lVar6 + 0x24)) {
        iVar8 = 1;
      }
      else {
        iVar8 = -1;
      }
      iVar4 = (int)uVar1;
      if (iVar8 < 0) {
        iVar7 = iVar4 + 1;
      }
      else {
        iVar3 = iVar4 + -1;
      }
    } while (iVar7 <= iVar3);
  }
  if (param_3 != 0) {
    iVar7 = iVar3 + -0x14;
    if (iVar7 <= iVar3 + 0x14) {
      iVar8 = ((iVar3 + 0x14) - iVar7) + 1;
      do {
        if ((-1 < iVar7) && (iVar4 = FUN_004b2060(param_1), iVar7 < iVar4)) {
          lVar6 = FUN_018a4e90(param_1,iVar7);
          FUN_00498350(local_38,*(int *)(lVar6 + 0x20),*(int *)(lVar6 + 0x24),
                       *(int *)(lVar6 + 0x20) + *(int *)(lVar6 + 0x1c),
                       *(int *)(lVar6 + 0x24) + *(int *)(lVar6 + 0x18));
          local_40 = FUN_00498310(param_3,param_2);
          cVar2 = FUN_004231e0(local_38,&local_40);
          if (cVar2 != '\0') {
            return iVar7;
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return iVar3;
}

