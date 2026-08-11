/* Ghidra address: 004c3810 */
/* Ghidra symbol: FUN_004c3810 */


longlong FUN_004c3810(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_004b6da0(*(undefined8 *)(param_1 + 8));
  return lVar1 + *(longlong *)(param_1 + 0x20);
}

