/* Ghidra address: 00746ff0 */
/* Ghidra symbol: FUN_00746ff0 */


undefined8 FUN_00746ff0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00747010();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
  }
  return uVar2;
}

