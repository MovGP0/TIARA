/* Ghidra address: 018889c0 */
/* Ghidra symbol: FUN_018889c0 */


longlong FUN_018889c0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004095c0(0x14);
  *(undefined4 *)(lVar1 + 8) = 1;
  *(undefined4 *)(lVar1 + 0xc) = 0;
  *(undefined4 *)(lVar1 + 0x10) = 0;
  FUN_004ae7e0(*(undefined8 *)(param_1 + 8),lVar1);
  return lVar1;
}

