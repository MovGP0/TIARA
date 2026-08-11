/* Ghidra address: 006613c0 */
/* Ghidra symbol: FUN_006613c0 */


undefined8 FUN_006613c0(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00661cc0();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  return uVar2;
}

