/* Ghidra address: 006f8c50 */
/* Ghidra symbol: FUN_006f8c50 */


void FUN_006f8c50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x720) != 0) {
    (**(code **)(param_1 + 0x720))(*(undefined8 *)(param_1 + 0x728),param_1,param_2,param_3);
  }
  return;
}

