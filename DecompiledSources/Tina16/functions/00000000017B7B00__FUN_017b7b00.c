/* Ghidra address: 017b7b00 */
/* Ghidra symbol: FUN_017b7b00 */


void FUN_017b7b00(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(byte *)(param_1 + 0x78) + 1;
  if (3 < uVar1) {
    uVar1 = 0;
  }
  *(char *)(param_1 + 0x78) = (char)uVar1;
  FUN_017b8090(param_1,0);
  return;
}

