/* Ghidra address: 00cb95c0 */
/* Ghidra symbol: FUN_00cb95c0 */


void FUN_00cb95c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[0x2b];
  (**(code **)(*param_1 + 0x1d8))(param_1);
  FUN_00c8fdf0(lVar1,*(undefined1 *)((longlong)param_1 + 0x1ab));
  FUN_00c8ec70(lVar1,1,0);
  (**(code **)(*param_1 + 0x1e8))(param_1);
  if (param_1[0x2c] != 0) {
    FUN_00414ad0(lVar1 + 0x30,param_1[0x2c]);
  }
  *(short *)(lVar1 + 0x40) = (short)param_1[0x2d];
  *(undefined2 *)(lVar1 + 0x18) = *(undefined2 *)((longlong)param_1 + 0x16c);
  *(undefined2 *)(lVar1 + 0x1a) = *(undefined2 *)((longlong)param_1 + 0x16a);
  *(undefined1 *)(lVar1 + 0x62) = *(undefined1 *)((longlong)param_1 + 0x1aa);
  FUN_00c8f240(lVar1);
  FUN_00c90070(lVar1,*(undefined1 *)((longlong)param_1 + 0x1a9));
  (**(code **)(*param_1 + 0x1e0))(param_1);
  return;
}

