/* Ghidra address: 01676670 */
/* Ghidra symbol: FUN_01676670 */


longlong FUN_01676670(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_01b0faf0(param_1,1);
  if (iVar1 < 1) {
    iVar1 = FUN_01b0faf0(param_1,0);
  }
  else {
    iVar1 = FUN_01b0faf0(param_1,0);
    iVar2 = FUN_01b0faf0(param_1,1);
    iVar1 = iVar1 * iVar2;
  }
  return (longlong)iVar1;
}

