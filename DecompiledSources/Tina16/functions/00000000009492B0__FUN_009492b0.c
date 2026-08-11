/* Ghidra address: 009492b0 */
/* Ghidra symbol: FUN_009492b0 */


void FUN_009492b0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 200) != 0) {
    (**(code **)(param_1 + 200))(*(undefined8 *)(param_1 + 0xd0),param_1,param_2);
  }
  return;
}

