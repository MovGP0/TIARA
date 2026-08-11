/* Ghidra address: 019b33e0 */
/* Ghidra symbol: FUN_019b33e0 */


void FUN_019b33e0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1,param_2,param_3);
  }
  return;
}

