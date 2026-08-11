/* Ghidra address: 00b8e4a0 */
/* Ghidra symbol: FUN_00b8e4a0 */


void FUN_00b8e4a0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  iVar1 = FUN_00808090();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar3);
      if (*(char *)(lVar2 + 0xa9) != '\0') {
        FUN_00b8d260(param_1,lVar2,param_2);
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

