/* Ghidra address: 007d55b0 */
/* Ghidra symbol: FUN_007d55b0 */


void FUN_007d55b0(longlong *param_1,int param_2)

{
  if (param_2 != *(int *)((longlong)param_1 + 0x94)) {
    *(int *)((longlong)param_1 + 0x94) = param_2;
    if (param_1[0x14] != 0) {
      thunk_FUN_0419d3ec(param_1[0x14],param_2,(int)param_1[0x12]);
    }
    FUN_007d6450(param_1);
    FUN_007d53e0(param_1);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  return;
}

