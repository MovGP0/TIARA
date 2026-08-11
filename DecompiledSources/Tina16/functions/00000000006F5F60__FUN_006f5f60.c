/* Ghidra address: 006f5f60 */
/* Ghidra symbol: FUN_006f5f60 */


undefined1 FUN_006f5f60(longlong param_1,undefined8 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    (**(code **)(param_1 + 0x6f0))(*(undefined8 *)(param_1 + 0x6f8),param_1,param_2,local_19);
  }
  return local_19[0];
}

