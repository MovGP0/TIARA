/* Ghidra address: 0058c2b0 */
/* Ghidra symbol: FUN_0058c2b0 */


byte FUN_0058c2b0(char *param_1)

{
  byte *pbVar1;
  byte bVar2;
  
  if (*param_1 == '\x06') {
    pbVar1 = (byte *)(param_1 + 1);
    bVar2 = *(byte *)((longlong)(pbVar1 + (ulonglong)*pbVar1 + 10) +
                     (ulonglong)*(ushort *)(pbVar1 + (ulonglong)*pbVar1 + 10));
  }
  else {
    bVar2 = 0;
  }
  return bVar2;
}

