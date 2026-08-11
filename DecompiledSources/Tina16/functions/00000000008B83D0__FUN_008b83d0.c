/* Ghidra address: 008b83d0 */
/* Ghidra symbol: FUN_008b83d0 */


void FUN_008b83d0(longlong param_1,longlong param_2)

{
  longlong local_20 [2];
  
  *(undefined8 *)(param_2 + 0x10) = 0;
  local_20[0] = param_2;
  FUN_005974f0(*(longlong *)(param_1 + 8) + 8,local_20);
  if (*(int *)(*(longlong *)(param_1 + 8) + 0x10) == 0) {
    FUN_00410f20(*(longlong *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  return;
}

