/* Ghidra address: 00d774e0 */
/* Ghidra symbol: FUN_00d774e0 */


longlong FUN_00d774e0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  
  cVar1 = FUN_004113d0(param_1,&PTR_FUN_00d60198);
  if (((cVar1 == '\0') || (lVar4 = param_1, *(char *)(param_1 + 0x140) != (char)param_2)) &&
     (iVar2 = FUN_00d77c90(param_1), lVar4 = 0, iVar2 != 0)) {
    iVar2 = FUN_00d77c90();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar3 = FUN_00d77ca0(param_1,iVar5);
        lVar4 = FUN_00d774e0(uVar3,param_2);
        if (lVar4 != 0) {
          return lVar4;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
        lVar4 = 0;
      } while (iVar2 != 0);
    }
  }
  return lVar4;
}

