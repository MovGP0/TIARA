/* Ghidra address: 006f7090 */
/* Ghidra symbol: FUN_006f7090 */


longlong FUN_006f7090(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_006f71f0(param_1,0,4,4);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x550);
  }
  return lVar1;
}

