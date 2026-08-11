/* Ghidra address: 0080f430 */
/* Ghidra symbol: FUN_0080f430 */


longlong FUN_0080f430(longlong param_1)

{
  longlong local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    (**(code **)(param_1 + 0x1e0))(*(undefined8 *)(param_1 + 0x1e8),&local_20);
  }
  if (local_20 == 0) {
    local_20 = thunk_FUN_04128719();
  }
  if (local_20 == 0) {
    local_20 = thunk_FUN_041620f3(*(undefined8 *)(param_1 + 0x2d0));
  }
  return local_20;
}

