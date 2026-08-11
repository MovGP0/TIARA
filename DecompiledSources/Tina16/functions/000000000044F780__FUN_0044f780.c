/* Ghidra address: 0044f780 */
/* Ghidra symbol: FUN_0044f780 */


undefined8 FUN_0044f780(longlong param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  
  if (param_2 < 1) {
    bVar1 = false;
  }
  else {
    iVar3 = 0;
    if (param_1 != 0) {
      iVar3 = *(int *)(param_1 + -4);
    }
    bVar1 = param_2 <= iVar3;
  }
  if (((bVar1) && (*(short *)(param_1 + -2 + (longlong)param_2 * 2) == 0x5c)) &&
     (cVar2 = FUN_0044f380(), cVar2 == '\0')) {
    return 1;
  }
  return 0;
}

