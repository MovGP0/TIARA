/* Ghidra address: 0072b500 */
/* Ghidra symbol: FUN_0072b500 */


void FUN_0072b500(longlong param_1,undefined1 param_2)

{
  if (*(longlong *)(param_1 + 0x168) != 0) {
    *(undefined1 *)(param_1 + 0xb8) = param_2;
    (**(code **)(param_1 + 0x168))(*(undefined8 *)(param_1 + 0x170),param_1);
  }
  return;
}

