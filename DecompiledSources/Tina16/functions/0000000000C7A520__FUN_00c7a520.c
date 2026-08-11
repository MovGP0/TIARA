/* Ghidra address: 00c7a520 */
/* Ghidra symbol: FUN_00c7a520 */


void FUN_00c7a520(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x2e8) != 0) {
    (**(code **)(param_1 + 0x2e8))(*(undefined8 *)(param_1 + 0x2f0),param_1,param_2);
  }
  return;
}

