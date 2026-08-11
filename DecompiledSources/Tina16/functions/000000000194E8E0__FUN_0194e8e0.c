/* Ghidra address: 0194e8e0 */
/* Ghidra symbol: FUN_0194e8e0 */


undefined4 FUN_0194e8e0(longlong param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x1b4) == '\0') && (*(char *)(param_1 + 0x1b5) == '\x02')) {
    uVar1 = *(undefined4 *)(param_1 + 0x1b8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

