/* Ghidra address: 00b6d090 */
/* Ghidra symbol: FUN_00b6d090 */


void FUN_00b6d090(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
    pbVar1 = (byte *)(param_1 + (ulonglong)uVar2);
    *pbVar1 = *pbVar1 ^ *(byte *)(param_2 + (ulonglong)uVar2);
    uVar2 = uVar2 + 1;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}

