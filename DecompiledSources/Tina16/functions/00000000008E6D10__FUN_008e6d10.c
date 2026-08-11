/* Ghidra address: 008e6d10 */
/* Ghidra symbol: FUN_008e6d10 */


undefined1 FUN_008e6d10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_19 [9];
  
  local_19[0] = 0;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(param_1 + 0x10))(*(undefined8 *)(param_1 + 0x18),param_1,param_2,param_3,local_19);
  }
  return local_19[0];
}

