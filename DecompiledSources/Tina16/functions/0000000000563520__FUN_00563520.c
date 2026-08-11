/* Ghidra address: 00563520 */
/* Ghidra symbol: FUN_00563520 */


void FUN_00563520(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x28) != 0) {
    (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x30),param_1,param_2,param_3);
  }
  return;
}

