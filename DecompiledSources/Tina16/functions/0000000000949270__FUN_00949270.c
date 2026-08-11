/* Ghidra address: 00949270 */
/* Ghidra symbol: FUN_00949270 */


void FUN_00949270(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    (**(code **)(param_1 + 0xb8))(*(undefined8 *)(param_1 + 0xc0),param_1,param_2);
  }
  return;
}

