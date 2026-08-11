/* Ghidra address: 006fcb70 */
/* Ghidra symbol: FUN_006fcb70 */


void FUN_006fcb70(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x4e8)) {
      FUN_006fd110(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x508)) {
      FUN_006fd340(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x4f8)) {
      FUN_006fd250(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x628)) {
      FUN_006fd3d0(param_1,0);
    }
  }
  return;
}

