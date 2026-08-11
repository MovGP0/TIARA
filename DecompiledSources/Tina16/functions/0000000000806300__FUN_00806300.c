/* Ghidra address: 00806300 */
/* Ghidra symbol: FUN_00806300 */


undefined8 FUN_00806300(undefined8 param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 0x391) != '\0') {
    iVar2 = FUN_00654c00();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar4 = FUN_00654bc0(param_2,iVar5);
        if (((*(char *)(lVar4 + 0xa9) != '\0') &&
            (cVar1 = FUN_008062c0(param_1,lVar4), cVar1 != '\0')) ||
           ((cVar1 = FUN_004113d0(lVar4,&PTR_FUN_00640c18), cVar1 != '\0' &&
            ((iVar3 = FUN_00654c00(lVar4), 0 < iVar3 &&
             (cVar1 = FUN_00806300(param_1,lVar4), cVar1 != '\0')))))) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

