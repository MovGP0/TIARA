/* Ghidra address: 01634c00 */
/* Ghidra symbol: FUN_01634c00 */


void FUN_01634c00(longlong param_1,int param_2)

{
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))();
  if (-1 < param_2 + -1) {
    do {
      FUN_0043f750(local_20,0xffffffff);
      (**(code **)(**(longlong **)(param_1 + 0x80) + 0x78))(*(longlong **)(param_1 + 0x80));
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_00414480(local_20);
  return;
}

