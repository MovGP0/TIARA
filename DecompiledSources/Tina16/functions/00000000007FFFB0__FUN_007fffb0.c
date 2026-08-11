/* Ghidra address: 007fffb0 */
/* Ghidra symbol: FUN_007fffb0 */


void FUN_007fffb0(longlong param_1,longlong param_2)

{
  *(longlong *)(param_1 + 0x528) = param_2;
  if (param_2 != 0) {
    FUN_004d26c0(param_2,param_1);
    FUN_007e2da0(param_2,0);
  }
  return;
}

