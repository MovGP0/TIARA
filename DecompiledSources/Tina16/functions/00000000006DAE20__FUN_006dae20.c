/* Ghidra address: 006dae20 */
/* Ghidra symbol: FUN_006dae20 */


void FUN_006dae20(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x520) != 0) {
    (**(code **)(param_1 + 0x520))(*(undefined8 *)(param_1 + 0x528),param_1,param_2);
  }
  return;
}

