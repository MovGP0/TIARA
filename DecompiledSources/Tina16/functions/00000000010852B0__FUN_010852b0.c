/* Ghidra address: 010852b0 */
/* Ghidra symbol: FUN_010852b0 */


void FUN_010852b0(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((*(char *)(param_1 + 0xb50) == '\0') && (*(longlong *)(param_3 + 0x18) != 0)) {
    FUN_01084e70(param_1,*(undefined8 *)(param_3 + 0x10));
  }
  return;
}

