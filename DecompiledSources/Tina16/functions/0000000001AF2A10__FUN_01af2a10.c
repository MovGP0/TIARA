/* Ghidra address: 01af2a10 */
/* Ghidra symbol: FUN_01af2a10 */


undefined1 FUN_01af2a10(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x7b1);
  }
  return uVar1;
}

