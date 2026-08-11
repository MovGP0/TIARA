/* Ghidra address: 01bf8c70 */
/* Ghidra symbol: FUN_01bf8c70 */


undefined ** FUN_01bf8c70(longlong param_1)

{
  undefined **local_20 [2];
  
  local_20[0] = &PTR_FUN_01bee940;
  if (*(longlong *)(param_1 + 0x168) != 0) {
    (**(code **)(param_1 + 0x168))(*(undefined8 *)(param_1 + 0x170),param_1,local_20);
  }
  if (local_20[0] == (undefined **)0x0) {
    local_20[0] = &PTR_FUN_01bee940;
  }
  return local_20[0];
}

