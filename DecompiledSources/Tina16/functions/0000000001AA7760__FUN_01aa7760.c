/* Ghidra address: 01aa7760 */
/* Ghidra symbol: FUN_01aa7760 */


void FUN_01aa7760(byte *param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_01aa7660();
  iVar1 = 1;
  for (uVar2 = (uint)*param_1; uVar2 != 0; uVar2 = uVar2 - 1) {
    param_1[(longlong)iVar1 + 0x567] = param_1[(longlong)iVar1 + 0x587];
    iVar1 = iVar1 + 1;
  }
  return;
}

