/* Ghidra address: 01872f30 */
/* Ghidra symbol: FUN_01872f30 */


undefined8 FUN_01872f30(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_01872f50();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
  }
  return uVar2;
}

