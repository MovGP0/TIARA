/* Ghidra address: 006e4040 */
/* Ghidra symbol: FUN_006e4040 */


void FUN_006e4040(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x5e8) != 0) {
    (**(code **)(param_1 + 0x5e8))(*(undefined8 *)(param_1 + 0x5f0),param_1,param_2);
  }
  return;
}

