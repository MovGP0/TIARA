/* Ghidra address: 016373b0 */
/* Ghidra symbol: FUN_016373b0 */


longlong FUN_016373b0(undefined8 param_1,undefined8 param_2,char param_3,byte param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  
  lVar2 = FUN_016353c0();
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(lVar2,iVar4);
      if ((((param_4 & *(char *)(lVar3 + 8) == param_3) != 0) || (param_4 == 0)) &&
         (cVar1 = FUN_016262d0(*(undefined8 *)(lVar3 + 0x58),param_2), cVar1 != '\0')) {
        return lVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return 0;
}

