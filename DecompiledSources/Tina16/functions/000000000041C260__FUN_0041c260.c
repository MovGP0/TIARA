/* Ghidra address: 0041c260 */
/* Ghidra symbol: FUN_0041c260 */


longlong FUN_0041c260(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_00408330(0x200);
  uVar2 = FUN_00411cf0();
  *(undefined8 *)(lVar1 + 8) = uVar2;
  return lVar1;
}

