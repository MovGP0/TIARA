/* Ghidra address: 00f2ffe0 */
/* Ghidra symbol: FUN_00f2ffe0 */


void FUN_00f2ffe0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
  }
  else if (*(longlong *)(param_1 + 0x18) == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  else {
    FUN_00f2cfc0();
  }
  return;
}

