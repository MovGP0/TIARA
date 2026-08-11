/* Ghidra address: 00702be0 */
/* Ghidra symbol: FUN_00702be0 */


undefined1 FUN_00702be0(longlong param_1,undefined4 param_2)

{
  undefined1 local_19 [9];
  
  local_19[0] = 1;
  if (*(longlong *)(param_1 + 0x580) != 0) {
    (**(code **)(param_1 + 0x580))(*(undefined8 *)(param_1 + 0x588),param_1,param_2,local_19);
  }
  return local_19[0];
}

