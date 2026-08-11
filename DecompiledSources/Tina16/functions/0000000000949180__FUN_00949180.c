/* Ghidra address: 00949180 */
/* Ghidra symbol: FUN_00949180 */


void FUN_00949180(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(longlong *)(param_1 + 0x88) != 0) {
    (**(code **)(param_1 + 0x88))(*(undefined8 *)(param_1 + 0x90),param_1,param_2,param_3,param_4);
  }
  return;
}

