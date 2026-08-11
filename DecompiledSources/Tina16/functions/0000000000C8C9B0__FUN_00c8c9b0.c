/* Ghidra address: 00c8c9b0 */
/* Ghidra symbol: FUN_00c8c9b0 */


undefined1 FUN_00c8c9b0(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  
  if (DAT_01ea9398 != 0) {
    cVar2 = FUN_008752a0();
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_00c8c9cd;
    }
  }
  bVar1 = false;
LAB_00c8c9cd:
  uVar3 = 0;
  if (bVar1) {
    uVar3 = *(undefined1 *)(DAT_01ea9398 + 0x78);
  }
  return uVar3;
}

