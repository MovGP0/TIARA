/* Ghidra address: 0084a190 */
/* Ghidra symbol: FUN_0084a190 */


void FUN_0084a190(longlong param_1)

{
  FUN_0083fef0(param_1);
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    (**(code **)(param_1 + 0x5e8))(*(undefined8 *)(param_1 + 0x5f0),param_1);
  }
  return;
}

