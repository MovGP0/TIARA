/* Ghidra address: 01bf8bc0 */
/* Ghidra symbol: FUN_01bf8bc0 */


undefined ** FUN_01bf8bc0(longlong param_1)

{
  undefined **local_20 [2];
  
  local_20[0] = &PTR_FUN_01bf1690;
  if (*(longlong *)(param_1 + 0x188) != 0) {
    (**(code **)(param_1 + 0x188))(*(undefined8 *)(param_1 + 400),param_1,local_20);
  }
  if (local_20[0] == (undefined **)0x0) {
    local_20[0] = &PTR_FUN_01bf1690;
  }
  return local_20[0];
}

