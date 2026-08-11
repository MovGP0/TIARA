/* Ghidra address: 006dade0 */
/* Ghidra symbol: FUN_006dade0 */


void FUN_006dade0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x510) != 0) {
    (**(code **)(param_1 + 0x510))(*(undefined8 *)(param_1 + 0x518),param_1,param_2);
  }
  return;
}

