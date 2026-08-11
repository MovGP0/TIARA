/* Ghidra address: 01bd8560 */
/* Ghidra symbol: FUN_01bd8560 */


void FUN_01bd8560(longlong param_1)

{
  undefined1 local_28 [24];
  
  FUN_006604b0(param_1);
  FUN_004238d0(local_28,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  (**(code **)(**(longlong **)(param_1 + 0x490) + 0x110))
            (*(longlong **)(param_1 + 0x490),local_28,*(undefined8 *)(param_1 + 0x4a0));
  return;
}

