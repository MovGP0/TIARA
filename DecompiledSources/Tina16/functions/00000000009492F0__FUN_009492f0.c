/* Ghidra address: 009492f0 */
/* Ghidra symbol: FUN_009492f0 */


void FUN_009492f0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    (**(code **)(param_1 + 0xd8))(*(undefined8 *)(param_1 + 0xe0),param_1,param_2);
  }
  return;
}

