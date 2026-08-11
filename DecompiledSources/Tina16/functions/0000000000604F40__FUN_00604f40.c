/* Ghidra address: 00604f40 */
/* Ghidra symbol: FUN_00604f40 */


void FUN_00604f40(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x48) != 0) {
    (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),param_1,param_2,param_3);
  }
  return;
}

