/* Ghidra address: 006d50d0 */
/* Ghidra symbol: FUN_006d50d0 */


undefined4 FUN_006d50d0(longlong param_1,undefined4 param_2)

{
  undefined4 local_1c [3];
  
  local_1c[0] = param_2;
  if (*(longlong *)(param_1 + 0x518) != 0) {
    (**(code **)(param_1 + 0x518))(*(undefined8 *)(param_1 + 0x520),param_1,param_2,local_1c);
  }
  return local_1c[0];
}

