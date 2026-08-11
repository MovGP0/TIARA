/* Ghidra address: 007fa160 */
/* Ghidra symbol: FUN_007fa160 */


undefined4 FUN_007fa160(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(char *)(param_1 + 0x24) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x14);
  }
  return uVar1;
}

