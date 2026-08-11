/* Ghidra address: 00849ee0 */
/* Ghidra symbol: FUN_00849ee0 */


void FUN_00849ee0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(longlong *)(param_1 + 0x578) != 0) {
    (**(code **)(param_1 + 0x578))(*(undefined8 *)(param_1 + 0x580),param_1,param_2,param_3);
  }
  return;
}

