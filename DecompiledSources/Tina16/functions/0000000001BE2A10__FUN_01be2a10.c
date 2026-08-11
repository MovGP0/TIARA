/* Ghidra address: 01be2a10 */
/* Ghidra symbol: FUN_01be2a10 */


void FUN_01be2a10(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x5b8) != 0) {
    (**(code **)(param_1 + 0x5b8))(*(undefined8 *)(param_1 + 0x5c0),param_1,param_2);
  }
  return;
}

