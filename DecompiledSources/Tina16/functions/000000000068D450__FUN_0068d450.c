/* Ghidra address: 0068d450 */
/* Ghidra symbol: FUN_0068d450 */


void FUN_0068d450(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x508) != 0) {
    (**(code **)(param_1 + 0x508))(*(undefined8 *)(param_1 + 0x510),param_1,param_2,param_3);
  }
  return;
}

