/* Ghidra address: 01981670 */
/* Ghidra symbol: FUN_01981670 */


void FUN_01981670(undefined8 param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(char *)(param_2 + 0x18) == '\x01')) {
    FUN_00414ad0(param_2 + 8,*(undefined8 *)(param_2 + 0x10));
    FUN_00414480(param_2 + 0x10);
  }
  return;
}

