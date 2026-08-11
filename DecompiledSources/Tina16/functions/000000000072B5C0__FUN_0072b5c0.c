/* Ghidra address: 0072b5c0 */
/* Ghidra symbol: FUN_0072b5c0 */


void FUN_0072b5c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x178) != 0) {
    FUN_00414ad0(param_1 + 0x118);
    (**(code **)(param_1 + 0x178))(*(undefined8 *)(param_1 + 0x180),param_1);
  }
  return;
}

