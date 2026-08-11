/* Ghidra address: 00f40800 */
/* Ghidra symbol: FUN_00f40800 */


void FUN_00f40800(longlong param_1,longlong param_2)

{
  if (param_2 == *(longlong *)(param_1 + 0x4d0)) {
    if (*(longlong *)(param_1 + 0x4f0) != 0) {
      (**(code **)(param_1 + 0x4f0))(*(undefined8 *)(param_1 + 0x4f8),param_1);
    }
  }
  else if (*(longlong *)(param_1 + 0x500) != 0) {
    (**(code **)(param_1 + 0x500))(*(undefined8 *)(param_1 + 0x508),param_1);
  }
  if ((*(char *)(param_1 + 0x520) != '\0') && (*(longlong *)(param_1 + 0x510) != 0)) {
    (**(code **)(param_1 + 0x510))(*(undefined8 *)(param_1 + 0x518),param_1);
  }
  return;
}

