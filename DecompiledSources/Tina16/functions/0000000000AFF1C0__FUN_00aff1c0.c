/* Ghidra address: 00aff1c0 */
/* Ghidra symbol: FUN_00aff1c0 */


void FUN_00aff1c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    (**(code **)(param_1 + 0x6f8))(*(undefined8 *)(param_1 + 0x700),param_1,2,100);
  }
  return;
}

