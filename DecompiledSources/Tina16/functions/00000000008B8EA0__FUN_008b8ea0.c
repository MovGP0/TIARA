/* Ghidra address: 008b8ea0 */
/* Ghidra symbol: FUN_008b8ea0 */


void FUN_008b8ea0(longlong param_1,longlong param_2)

{
  longlong local_20 [2];
  
  local_20[0] = param_2;
  FUN_005974f0(*(longlong *)(param_1 + 0x18) + 8,local_20);
  *(undefined8 *)(param_2 + 0x28) = 0;
  if (*(longlong *)(param_2 + 0x30) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x20) = *(undefined8 *)(param_2 + 0x20);
  }
  if (*(longlong *)(param_2 + 0x20) != 0) {
    *(undefined8 *)(*(longlong *)(param_2 + 0x20) + 0x30) = *(undefined8 *)(param_2 + 0x30);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x30) = 0;
  return;
}

