/* Ghidra address: 010e2d30 */
/* Ghidra symbol: FUN_010e2d30 */


undefined1 FUN_010e2d30(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if ((*(char *)(param_1 + 0x7f9) == '\x01') && (*(char *)(param_2 + 0x7f9) == '\x01')) {
    uVar1 = FUN_00e1df50(*(undefined1 *)(param_1 + 0x7fa),*(undefined1 *)(param_2 + 0x7fa));
  }
  else if ((*(char *)(param_1 + 0x7f9) == '\0') && (*(char *)(param_2 + 0x7f9) == '\0')) {
    uVar1 = *(char *)(param_2 + 0x7f8) != '\x01';
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

