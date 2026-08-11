/* Ghidra address: 01b07d50 */
/* Ghidra symbol: FUN_01b07d50 */


void FUN_01b07d50(longlong param_1)

{
  if (*(char *)(param_1 + 0x5db) == '\x06') {
    if (*(char *)(param_1 + 0x98) == '\x01') {
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x148));
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x158));
    }
    else {
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x148));
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x150));
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x158));
      FUN_01b07800(param_1,*(undefined8 *)(param_1 + 0x160));
    }
  }
  return;
}

