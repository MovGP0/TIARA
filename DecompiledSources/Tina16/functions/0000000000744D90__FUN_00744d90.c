/* Ghidra address: 00744d90 */
/* Ghidra symbol: FUN_00744d90 */


longlong FUN_00744d90(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_007465c0(*(undefined8 *)(param_1 + 0x4b0));
  FUN_007461a0(lVar1,2);
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  return lVar1;
}

