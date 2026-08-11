/* Ghidra address: 00409810 */
/* Ghidra symbol: FUN_00409810 */


undefined8 FUN_00409810(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_0041f930();
  lVar1 = *(longlong *)(lVar1 + 0x208);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    if (DAT_02006048 != (code *)0x0) {
      (*DAT_02006048)(uVar2);
    }
  }
  return uVar2;
}

