/* Ghidra address: 004c3dd0 */
/* Ghidra symbol: FUN_004c3dd0 */


void FUN_004c3dd0(longlong param_1,undefined1 param_2,longlong param_3)

{
  FUN_004c3730(param_1,1);
  *(undefined1 *)(*(longlong *)(param_1 + 0x10) + *(longlong *)(param_1 + 0x20)) = param_2;
  if (param_3 < 2) {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + param_3;
  }
  else {
    *(longlong *)(param_1 + 0x20) = *(longlong *)(param_1 + 0x20) + 1;
    FUN_004c3f90(param_1,0,param_3 + -1);
  }
  return;
}

