/* Ghidra address: 00616f40 */
/* Ghidra symbol: FUN_00616f40 */


void FUN_00616f40(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar1 = FUN_00616e60();
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(undefined1 *)(param_1 + 8) = 1;
  }
  return;
}

