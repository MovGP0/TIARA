/* Ghidra address: 00e14030 */
/* Ghidra symbol: FUN_00e14030 */


undefined8 FUN_00e14030(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      lVar2 = FUN_01d347d0(param_1,iVar3);
      if (*(char *)(lVar2 + 8) == '\0') {
        cVar1 = FUN_01d3ff70(*(undefined4 *)(lVar2 + 0x18),*(undefined4 *)(lVar2 + 0x1c),param_2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      else {
        cVar1 = FUN_01d3fee0(*(undefined8 *)(lVar2 + 0x10),param_2);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

