/* Ghidra address: 00727b30 */
/* Ghidra symbol: FUN_00727b30 */


undefined1 FUN_00727b30(longlong param_1)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x128) != 0) {
    (**(code **)(param_1 + 0x128))(*(undefined8 *)(param_1 + 0x130),param_1,local_19);
  }
  return local_19[0];
}

