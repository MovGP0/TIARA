/* Ghidra address: 01af2a50 */
/* Ghidra symbol: FUN_01af2a50 */


undefined1 FUN_01af2a50(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x7b2);
  }
  return uVar1;
}

