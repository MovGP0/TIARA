/* Ghidra address: 007e3d20 */
/* Ghidra symbol: FUN_007e3d20 */


void FUN_007e3d20(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  FUN_004d2dc0(param_1,param_2,param_3);
  if ((char)param_3 == '\x01') {
    lVar1 = FUN_007e2ec0(param_1);
    if (param_2 == lVar1) {
      FUN_007e3660(param_1,0);
    }
    else if (param_2 == *(longlong *)(param_1 + 0xf8)) {
      FUN_007e3d90(param_1,0);
    }
    else if (param_2 == *(longlong *)(param_1 + 0xd0)) {
      FUN_007dddc0(param_1,0);
    }
  }
  return;
}

