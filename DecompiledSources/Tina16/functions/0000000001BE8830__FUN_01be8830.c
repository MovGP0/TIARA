/* Ghidra address: 01be8830 */
/* Ghidra symbol: FUN_01be8830 */


void FUN_01be8830(longlong *param_1)

{
  int local_1c [3];
  
  FUN_01be28f0(param_1);
  thunk_FUN_03e0f7b4(0x100a,0,local_1c,0);
  if (local_1c[0] == 0) {
    (**(code **)(*param_1 + 0x330))(param_1,0);
  }
  return;
}

