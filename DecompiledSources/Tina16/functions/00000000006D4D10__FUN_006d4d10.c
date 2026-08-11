/* Ghidra address: 006d4d10 */
/* Ghidra symbol: FUN_006d4d10 */


undefined1 FUN_006d4d10(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x4f8) != 0) {
    (**(code **)(param_1 + 0x4f8))(*(undefined8 *)(param_1 + 0x500),param_1,local_19);
  }
  return local_19[0];
}

