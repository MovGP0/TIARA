/* Ghidra address: 00707f30 */
/* Ghidra symbol: FUN_00707f30 */


void FUN_00707f30(void)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_02012460 != 0) {
    FUN_004aee50(DAT_02012460,&PTR_PTR_01dfdb88,0);
    FUN_004aee50(DAT_02012460,&PTR_PTR_01dfdb98,0);
    iVar4 = *(int *)(DAT_02012460 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(DAT_02012460,iVar3);
        FUN_00418590(uVar2,&DAT_006bdbc8);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    lVar1 = DAT_02012460;
    DAT_02012460 = 0;
    FUN_00410f20(lVar1);
  }
  return;
}

