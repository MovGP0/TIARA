/* Ghidra address: 00b01a30 */
/* Ghidra symbol: FUN_00b01a30 */


void FUN_00b01a30(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 0x730) + 0x10) == '\0') {
    FUN_00b018f0(param_1,*(undefined8 *)(param_1 + 0x6e0));
  }
  else {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6b0),1);
    FUN_006d78a0(*(undefined8 *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6b8));
  }
  FUN_00b01b00(param_1);
  return;
}

