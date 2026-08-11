/* Ghidra address: 00a062d0 */
/* Ghidra symbol: FUN_00a062d0 */


undefined4 FUN_00a062d0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00a07450();
  uVar2 = 0xffffffff;
  if ((lVar1 != 0) && (uVar2 = 0xffffffff, *(char *)(lVar1 + 9) != '\0')) {
    uVar2 = *(undefined4 *)(lVar1 + 0x10);
  }
  return uVar2;
}

