/* Ghidra address: 0040f800 */
/* Ghidra symbol: FUN_0040f800 */


void FUN_0040f800(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 - 1U < 0x80000000) {
    do {
      pbVar1 = (byte *)(param_1 + iVar2);
      *pbVar1 = *pbVar1 & ~*(byte *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}

