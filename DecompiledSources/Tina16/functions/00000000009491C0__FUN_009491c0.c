/* Ghidra address: 009491c0 */
/* Ghidra symbol: FUN_009491c0 */


void FUN_009491c0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x98) != 0) {
    (**(code **)(param_1 + 0x98))(*(undefined8 *)(param_1 + 0xa0),param_1,param_2);
  }
  return;
}

