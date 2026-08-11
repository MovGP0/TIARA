/* Ghidra address: 01bfcf50 */
/* Ghidra symbol: FUN_01bfcf50 */


void FUN_01bfcf50(longlong param_1,char param_2)

{
  longlong lVar1;
  
  if (((*(char *)(param_1 + 0x40) != param_2) &&
      (*(char *)(param_1 + 0x40) = param_2, *(char *)(param_1 + 0x40) != '\0')) &&
     (*(longlong *)(*(longlong *)(param_1 + 8) + 0x80) != 0)) {
    lVar1 = FUN_01c07120(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x80));
    FUN_01bfcf30(param_1,*(undefined8 *)(lVar1 + 0xb8));
  }
  return;
}

