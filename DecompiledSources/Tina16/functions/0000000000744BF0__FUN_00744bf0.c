/* Ghidra address: 00744bf0 */
/* Ghidra symbol: FUN_00744bf0 */


longlong FUN_00744bf0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_00746840(*(undefined8 *)(param_1 + 0x4b8));
  FUN_007461a0(lVar1,2);
  *(undefined1 *)(lVar1 + 0x2c) = 1;
  return lVar1;
}

