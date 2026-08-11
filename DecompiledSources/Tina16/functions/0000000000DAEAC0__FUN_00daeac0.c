/* Ghidra address: 00daeac0 */
/* Ghidra symbol: FUN_00daeac0 */


ulonglong FUN_00daeac0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  undefined1 local_2c [4];
  
  iVar2 = FUN_00dae9e0(param_1);
  iVar3 = FUN_00daea50(param_1);
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
  if (iVar2 <= iVar3) {
    iVar3 = (iVar3 - iVar2) + 1;
    do {
      cVar1 = FUN_00dae960(param_1,iVar2,local_2c);
      if (cVar1 == '\0') {
        uVar4 = 0;
        break;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return uVar4 & 0xffffffff;
}

