/* Ghidra address: 01d36ef0 */
/* Ghidra symbol: FUN_01d36ef0 */


short FUN_01d36ef0(longlong param_1,int param_2,int param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  
  sVar2 = 0;
  if (param_2 <= param_3) {
    iVar3 = (param_3 - param_2) + 1;
    do {
      cVar1 = *(char *)(param_1 + param_2);
      if (cVar1 == '\x01') {
        sVar2 = sVar2 + 4;
      }
      else if (cVar1 == '\x02') {
        sVar2 = sVar2 + 1;
      }
      else if (cVar1 == '\x03') {
        sVar2 = sVar2 + 1;
      }
      param_2 = param_2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return sVar2;
}

