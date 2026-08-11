/* Ghidra address: 012b8880 */
/* Ghidra symbol: FUN_012b8880 */


void FUN_012b8880(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x738) == 0) {
    FUN_012b88b0();
  }
  else {
    FUN_012b5de0(param_1,*(undefined8 *)(param_1 + 0x738));
  }
  return;
}

