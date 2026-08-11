/* Ghidra address: 00614650 */
/* Ghidra symbol: FUN_00614650 */


void FUN_00614650(longlong param_1,longlong param_2)

{
  longlong local_20;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x80) != 0) {
      local_20 = param_2;
      FUN_005974f0(*(longlong *)(param_1 + 0x80) + 8,&local_20);
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x10) == 0) {
        FUN_00410f20(*(longlong *)(param_1 + 0x80));
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
    }
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}

