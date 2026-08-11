/* Ghidra address: 0181e510 */
/* Ghidra symbol: FUN_0181e510 */


int FUN_0181e510(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  
  iVar1 = FUN_0181e3e0();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar3 = FUN_0181e3c0(param_1,iVar4);
      iVar2 = FUN_0043e6d0(*(undefined8 *)(lVar3 + 0x18),param_2);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return -1;
}

