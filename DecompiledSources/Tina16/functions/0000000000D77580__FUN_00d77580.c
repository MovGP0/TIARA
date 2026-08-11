/* Ghidra address: 00d77580 */
/* Ghidra symbol: FUN_00d77580 */


longlong FUN_00d77580(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  lVar3 = param_1;
  if ((*(char *)(param_1 + 0x79) != (char)param_2) &&
     (iVar1 = FUN_00d77c90(param_1), lVar3 = 0, iVar1 != 0)) {
    iVar1 = FUN_00d77c90();
    iVar4 = 0;
    if (-1 < iVar1 + -1) {
      do {
        uVar2 = FUN_00d77ca0(param_1,iVar4);
        lVar3 = FUN_00d77580(uVar2,param_2);
        if (lVar3 != 0) {
          return lVar3;
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
        lVar3 = 0;
      } while (iVar1 != 0);
    }
  }
  return lVar3;
}

