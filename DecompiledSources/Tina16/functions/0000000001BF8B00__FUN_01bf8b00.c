/* Ghidra address: 01bf8b00 */
/* Ghidra symbol: FUN_01bf8b00 */


undefined ** FUN_01bf8b00(longlong param_1)

{
  undefined **local_20 [2];
  
  local_20[0] = &PTR_FUN_01bef088;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    (**(code **)(param_1 + 0x198))(*(undefined8 *)(param_1 + 0x1a0),param_1,local_20);
  }
  if (local_20[0] == (undefined **)0x0) {
    local_20[0] = &PTR_FUN_01bef088;
  }
  return local_20[0];
}

