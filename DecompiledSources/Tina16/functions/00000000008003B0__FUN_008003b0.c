/* Ghidra address: 008003b0 */
/* Ghidra symbol: FUN_008003b0 */


undefined4 FUN_008003b0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x524) == '\0') {
    uVar1 = *(undefined4 *)(DAT_02012670 + 0x98);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x520);
  }
  return uVar1;
}

