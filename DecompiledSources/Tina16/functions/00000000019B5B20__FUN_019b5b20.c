/* Ghidra address: 019b5b20 */
/* Ghidra symbol: FUN_019b5b20 */


undefined1 FUN_019b5b20(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x490) == '\0') {
    uVar1 = PTR_DAT_02004010[0x2ad];
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x73f);
  }
  return uVar1;
}

