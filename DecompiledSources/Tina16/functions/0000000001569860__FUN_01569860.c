/* Ghidra address: 01569860 */
/* Ghidra symbol: FUN_01569860 */


void FUN_01569860(longlong param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *(int *)(*(longlong *)(param_1 + 0x8f0) + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      lVar2 = FUN_01d347d0(*(undefined8 *)(param_1 + 0x8f0),iVar4);
      cVar1 = FUN_01d3f210(*(undefined8 *)(lVar2 + 0x40));
      if (cVar1 == '\0') {
        iVar7 = *(int *)(*(longlong *)(lVar2 + 0x28) + 0x10);
        iVar5 = 0;
        if (-1 < iVar7 + -1) {
          do {
            lVar3 = FUN_01571ee0(*(undefined8 *)(lVar2 + 0x28),iVar5);
            if ((*(int *)(lVar3 + 0x30) == param_2) && (*(int *)(lVar3 + 0x54) == 1)) {
              FUN_004ae7e0(param_3,lVar2);
            }
            iVar5 = iVar5 + 1;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  return;
}

