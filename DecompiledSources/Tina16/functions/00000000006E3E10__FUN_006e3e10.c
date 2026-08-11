/* Ghidra address: 006e3e10 */
/* Ghidra symbol: FUN_006e3e10 */


void FUN_006e3e10(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x6a8) != 0) {
    (**(code **)(param_1 + 0x6a8))(*(undefined8 *)(param_1 + 0x6b0),param_1,param_2);
  }
  return;
}

