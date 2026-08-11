/* Ghidra address: 00d3a7e0 */
/* Ghidra symbol: FUN_00d3a7e0 */


int FUN_00d3a7e0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar1 = FUN_007e2ef0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_007e2f10(param_2,iVar4);
      if (*(char *)(lVar2 + 0x86) != '\0') {
        iVar3 = iVar3 + 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return iVar3;
}

