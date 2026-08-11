/* Ghidra address: 00b96480 */
/* Ghidra symbol: FUN_00b96480 */


void FUN_00b96480(longlong param_1,undefined8 param_2)

{
  FUN_007fb770(param_1,param_2);
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    (**(code **)(param_1 + 0x4f0))(*(undefined8 *)(param_1 + 0x4f8),param_2);
  }
  return;
}

