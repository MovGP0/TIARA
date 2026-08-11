/* Ghidra address: 008e6d60 */
/* Ghidra symbol: FUN_008e6d60 */


void FUN_008e6d60(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x28),param_1,param_2,param_3);
  }
  return;
}

