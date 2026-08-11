/* Ghidra address: 01770610 */
/* Ghidra symbol: FUN_01770610 */


undefined1 FUN_01770610(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x111) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x114);
  }
  return uVar1;
}

