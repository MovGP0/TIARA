/* Ghidra address: 01bf8b60 */
/* Ghidra symbol: FUN_01bf8b60 */


undefined ** FUN_01bf8b60(longlong param_1,undefined8 param_2)

{
  undefined **local_20 [2];
  
  local_20[0] = &PTR_FUN_01bf0090;
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    (**(code **)(param_1 + 0x1c0))(*(undefined8 *)(param_1 + 0x1c8),param_1,param_2,local_20);
  }
  if (local_20[0] == (undefined **)0x0) {
    local_20[0] = &PTR_FUN_01bf0090;
  }
  return local_20[0];
}

