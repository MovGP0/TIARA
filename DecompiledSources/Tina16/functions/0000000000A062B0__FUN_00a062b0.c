/* Ghidra address: 00a062b0 */
/* Ghidra symbol: FUN_00a062b0 */


uint FUN_00a062b0(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_00a07450();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 4) & 3;
  }
  return uVar1;
}

