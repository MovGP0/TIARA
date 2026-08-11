/* Ghidra address: 007fdaa0 */
/* Ghidra symbol: FUN_007fdaa0 */


void FUN_007fdaa0(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x590) != 0) {
    (**(code **)(param_1 + 0x590))(*(undefined8 *)(param_1 + 0x598),param_1,param_2);
  }
  return;
}

