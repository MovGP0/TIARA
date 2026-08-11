/* Ghidra address: 00c7a090 */
/* Ghidra symbol: FUN_00c7a090 */


void FUN_00c7a090(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x2c8) != 0) {
    (**(code **)(param_1 + 0x2c8))(*(undefined8 *)(param_1 + 0x2d0),param_1,param_2,param_3);
  }
  return;
}

