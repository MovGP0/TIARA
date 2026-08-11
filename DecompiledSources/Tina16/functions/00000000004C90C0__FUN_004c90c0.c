/* Ghidra address: 004c90c0 */
/* Ghidra symbol: FUN_004c90c0 */


longlong FUN_004c90c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x40);
  lVar2 = thunk_FUN_004ae3c6(*(undefined8 *)(param_1 + 0x18),lVar1);
  return lVar1 - lVar2;
}

