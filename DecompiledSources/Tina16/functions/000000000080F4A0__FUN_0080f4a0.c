/* Ghidra address: 0080f4a0 */
/* Ghidra symbol: FUN_0080f4a0 */


longlong FUN_0080f4a0(longlong param_1)

{
  longlong local_20;
  
  local_20 = 0;
  if (*(longlong *)(param_1 + 0x1f0) != 0) {
    (**(code **)(param_1 + 0x1f0))(*(undefined8 *)(param_1 + 0x1f8),&local_20);
  }
  if ((local_20 == 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    local_20 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa8));
  }
  return local_20;
}

