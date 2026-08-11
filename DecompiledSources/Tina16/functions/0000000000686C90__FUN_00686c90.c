/* Ghidra address: 00686c90 */
/* Ghidra symbol: FUN_00686c90 */


void FUN_00686c90(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x568) != 0) {
    (**(code **)(param_1 + 0x568))(*(undefined8 *)(param_1 + 0x570),param_1,param_2,param_3);
  }
  return;
}

