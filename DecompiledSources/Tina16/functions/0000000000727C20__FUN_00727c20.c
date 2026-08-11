/* Ghidra address: 00727c20 */
/* Ghidra symbol: FUN_00727c20 */


void FUN_00727c20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined8 *)(param_1 + 0x170),param_1);
  }
  return;
}

