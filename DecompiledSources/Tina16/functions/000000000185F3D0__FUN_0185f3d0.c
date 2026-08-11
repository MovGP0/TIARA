/* Ghidra address: 0185f3d0 */
/* Ghidra symbol: FUN_0185f3d0 */


uint FUN_0185f3d0(void)

{
  uint uVar1;
  longlong lVar2;
  
  lVar2 = FUN_01860480();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(uint *)(lVar2 + 4) & 3;
  }
  return uVar1;
}

