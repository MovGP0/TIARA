/* Ghidra address: 007fcb70 */
/* Ghidra symbol: FUN_007fcb70 */


void FUN_007fcb70(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0x620) != 0) {
    (**(code **)(param_1 + 0x620))(*(undefined8 *)(param_1 + 0x628),param_1);
  }
  return;
}

