/* Ghidra address: 00cb9740 */
/* Ghidra symbol: FUN_00cb9740 */


void FUN_00cb9740(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x170) != 0) {
    (**(code **)(param_1 + 0x170))(*(undefined8 *)(param_1 + 0x178),param_1);
  }
  return;
}

