/* Ghidra address: 01778130 */
/* Ghidra symbol: FUN_01778130 */


undefined1 FUN_01778130(longlong param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 200) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0xca);
  }
  return uVar1;
}

