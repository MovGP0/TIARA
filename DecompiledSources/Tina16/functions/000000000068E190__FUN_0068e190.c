/* Ghidra address: 0068e190 */
/* Ghidra symbol: FUN_0068e190 */


undefined8 FUN_0068e190(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  if (*(longlong *)(param_1 + 0x518) != 0) {
    (**(code **)(param_1 + 0x518))(*(undefined8 *)(param_1 + 0x520),param_1,param_3,param_2);
  }
  return param_2;
}

