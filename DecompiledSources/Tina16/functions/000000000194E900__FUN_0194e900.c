/* Ghidra address: 0194e900 */
/* Ghidra symbol: FUN_0194e900 */


void FUN_0194e900(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x260) != 0) {
    (**(code **)(param_1 + 0x260))(*(undefined8 *)(param_1 + 0x268),param_1,param_2,param_3);
  }
  return;
}

