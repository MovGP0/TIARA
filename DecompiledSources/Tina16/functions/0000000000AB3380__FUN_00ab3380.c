/* Ghidra address: 00ab3380 */
/* Ghidra symbol: FUN_00ab3380 */


void FUN_00ab3380(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x168) + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar2 = FUN_00ac4a60(*(undefined8 *)(param_1 + 0x168),iVar6);
      iVar8 = *(int *)(lVar2 + 0x10);
      iVar5 = 0;
      if (-1 < iVar8 + -1) {
        do {
          uVar3 = FUN_004aeac0(lVar2,iVar5);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_00a8c408);
          if (cVar1 != '\0') {
            lVar4 = FUN_004aeac0(lVar2,iVar5);
            FUN_00a9c030(*(undefined8 *)(lVar4 + 0x80));
          }
          iVar5 = iVar5 + 1;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  return;
}

