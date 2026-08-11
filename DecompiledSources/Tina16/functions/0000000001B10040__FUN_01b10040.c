/* Ghidra address: 01b10040 */
/* Ghidra symbol: FUN_01b10040 */


longlong FUN_01b10040(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b0faf0(param_1,0);
  iVar2 = FUN_01b0faf0(param_1,0);
  if (DAT_01fd1d80 != '\0') {
    iVar2 = iVar1 + 2;
  }
  return (longlong)iVar2;
}

