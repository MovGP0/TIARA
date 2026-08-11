/* Ghidra address: 007d5610 */
/* Ghidra symbol: FUN_007d5610 */


void FUN_007d5610(longlong *param_1,int param_2)

{
  if (param_2 != (int)param_1[0x12]) {
    *(int *)(param_1 + 0x12) = param_2;
    if (param_1[0x14] != 0) {
      thunk_FUN_0419d3ec(param_1[0x14],*(undefined4 *)((longlong)param_1 + 0x94),param_2);
    }
    FUN_007d6450(param_1);
    FUN_007d53e0(param_1);
    (**(code **)(*param_1 + 0x98))(param_1);
  }
  return;
}

