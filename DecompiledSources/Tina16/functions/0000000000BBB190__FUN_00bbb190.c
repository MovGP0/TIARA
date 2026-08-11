/* Ghidra address: 00bbb190 */
/* Ghidra symbol: FUN_00bbb190 */


undefined4 FUN_00bbb190(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x4a) == '\0') {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x18);
  }
  return uVar1;
}

