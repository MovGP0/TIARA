/* Ghidra address: 004c3f10 */
/* Ghidra symbol: FUN_004c3f10 */


void FUN_004c3f10(longlong param_1,undefined4 param_2,longlong param_3)

{
  FUN_004c3730(param_1,2);
  *(char *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)) = (char)param_2;
  if ((param_3 < 2) ||
     (*(char *)(*(longlong *)(param_1 + 0x10) + 1 + *(longlong *)(param_1 + 0x20)) =
           (char)((uint)param_2 >> 8), param_3 < 3)) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 2;
    FUN_004c3f90(param_1,0,param_3 + -2);
  }
  return;
}

