/* Ghidra address: 00a7a4e0 */
/* Ghidra symbol: FUN_00a7a4e0 */


void FUN_00a7a4e0(longlong *param_1)

{
  undefined8 uVar1;
  
  FUN_00a799b0(param_1,1);
  uVar1 = (**(code **)(*param_1 + 0x88))(param_1);
  uVar1 = FUN_005ffa40(uVar1);
  thunk_FUN_0415c706(uVar1);
  *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
  (**(code **)(*param_1 + 0xa8))(param_1);
  return;
}

