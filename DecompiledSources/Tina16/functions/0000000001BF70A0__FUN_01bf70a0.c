/* Ghidra address: 01bf70a0 */
/* Ghidra symbol: FUN_01bf70a0 */


void FUN_01bf70a0(longlong param_1,longlong param_2)

{
  if (((param_2 == 0) || (*(longlong *)(param_1 + 0xf0) == 0)) ||
     (*(longlong *)(param_1 + 0x110) == 0)) {
    (**(code **)(param_1 + 0xf0))(*(undefined8 *)(param_1 + 0xf8));
  }
  return;
}

