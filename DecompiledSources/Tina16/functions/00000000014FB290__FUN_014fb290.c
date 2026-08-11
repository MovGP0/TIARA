/* Ghidra address: 014fb290 */
/* Ghidra symbol: FUN_014fb290 */


undefined8 FUN_014fb290(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1[(longlong)iVar1 + 0x567] = param_1[(longlong)iVar1 + 0x587];
    iVar1 = iVar1 + 1;
  }
  FUN_014fb230();
  return 0;
}

