/* Ghidra address: 007ffeb0 */
/* Ghidra symbol: FUN_007ffeb0 */


void FUN_007ffeb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (param_2 != lVar1) {
    if (lVar1 != 0) {
      FUN_004d2d90(lVar1,param_1);
    }
    *(longlong *)(param_1 + 0x4b8) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
    }
  }
  return;
}

