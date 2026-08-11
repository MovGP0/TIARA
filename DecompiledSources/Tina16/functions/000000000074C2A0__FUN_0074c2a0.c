/* Ghidra address: 0074c2a0 */
/* Ghidra symbol: FUN_0074c2a0 */


undefined1 FUN_0074c2a0(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    (**(code **)(param_1 + 0x380))(*(undefined8 *)(param_1 + 0x388),param_1,param_2,local_19);
  }
  return local_19[0];
}

