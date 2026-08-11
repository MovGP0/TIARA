/* Ghidra address: 00cebc80 */
/* Ghidra symbol: FUN_00cebc80 */


longlong FUN_00cebc80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x10) + -1;
  if (-1 < iVar3) {
    do {
      lVar2 = FUN_004aeac0(param_1,iVar3);
      cVar1 = (**(code **)(lVar2 + 0x10))(lVar2,param_2);
      if (cVar1 != '\0') {
        return lVar2;
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != -1);
  }
  return 0;
}

