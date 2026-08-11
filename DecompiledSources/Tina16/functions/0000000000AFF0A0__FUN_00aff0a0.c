/* Ghidra address: 00aff0a0 */
/* Ghidra symbol: FUN_00aff0a0 */


void FUN_00aff0a0(longlong *param_1,double param_2)

{
  if (param_2 <= 8.0) {
    if (0.125 <= param_2) {
      FUN_00a77ce0();
    }
    else {
      (**(code **)(*param_1 + 0x418))(param_1,0x3fc0000000000000);
    }
  }
  else {
    (**(code **)(*param_1 + 0x418))(param_1,0x4020000000000000);
  }
  return;
}

