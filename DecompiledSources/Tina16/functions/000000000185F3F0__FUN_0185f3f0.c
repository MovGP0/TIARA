/* Ghidra address: 0185f3f0 */
/* Ghidra symbol: FUN_0185f3f0 */


undefined4 FUN_0185f3f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_01860480();
  uVar2 = 0xffffffff;
  if ((lVar1 != 0) && (uVar2 = 0xffffffff, *(char *)(lVar1 + 9) != '\0')) {
    uVar2 = *(undefined4 *)(lVar1 + 0x10);
  }
  return uVar2;
}

