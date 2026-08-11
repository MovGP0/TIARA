/* Ghidra address: 0041d3d0 */
/* Ghidra symbol: FUN_0041d3d0 */


void FUN_0041d3d0(undefined8 param_1,longlong *param_2)

{
  if (param_2 != (longlong *)0x0) {
    if ((*(ulonglong *)((longlong)param_2 + (longlong)*(int *)(*param_2 + -0x80) + -8) & 1) == 0) {
      FUN_0041d380(param_2);
    }
    FUN_0041ce10(&DAT_0200afd8,param_1,param_2);
  }
  return;
}

