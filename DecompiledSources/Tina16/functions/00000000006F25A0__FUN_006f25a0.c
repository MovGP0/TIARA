/* Ghidra address: 006f25a0 */
/* Ghidra symbol: FUN_006f25a0 */


void FUN_006f25a0(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x4a8)) {
      FUN_006f6a90(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x4b8)) {
      FUN_006f6b30(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x4c0)) {
      FUN_006f6bd0(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x4c8)) {
      FUN_006f69f0(param_1,0);
    }
  }
  return;
}

