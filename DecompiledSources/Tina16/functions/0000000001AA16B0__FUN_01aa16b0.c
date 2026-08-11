/* Ghidra address: 01aa16b0 */
/* Ghidra symbol: FUN_01aa16b0 */


void FUN_01aa16b0(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 1;
  for (uVar2 = (uint)*(byte *)(param_1 + 1); uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)(param_1 + (longlong)iVar1 * 0x788 + -0x1df) = 0;
    iVar1 = iVar1 + 1;
  }
  return;
}

