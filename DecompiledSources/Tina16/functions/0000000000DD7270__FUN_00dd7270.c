/* Ghidra address: 00dd7270 */
/* Ghidra symbol: FUN_00dd7270 */


undefined1 FUN_00dd7270(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    uVar1 = *(undefined1 *)(param_1 + 0xa0);
  }
  else {
    uVar1 = 3;
  }
  return uVar1;
}

