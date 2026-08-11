/* Ghidra address: 019c0780 */
/* Ghidra symbol: FUN_019c0780 */


int FUN_019c0780(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    iVar3 = (int)*(undefined8 *)(param_2 + -8);
  }
  iVar2 = 0;
  if (iVar3 - 1U < 0x80000000) {
    do {
      cVar1 = FUN_00422c40(param_2 + (longlong)iVar2 * 8,param_3);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return -1;
}

