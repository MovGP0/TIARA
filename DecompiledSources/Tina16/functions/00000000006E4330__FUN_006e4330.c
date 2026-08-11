/* Ghidra address: 006e4330 */
/* Ghidra symbol: FUN_006e4330 */


void FUN_006e4330(longlong param_1,longlong param_2,undefined4 param_3)

{
  FUN_00654ca0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    if (param_2 == *(longlong *)(param_1 + 0x4e8)) {
      FUN_006e4390(param_1,0);
    }
    if (param_2 == *(longlong *)(param_1 + 0x538)) {
      FUN_006e4420(param_1,0);
    }
  }
  return;
}

