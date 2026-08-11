/* Ghidra address: 00a7a530 */
/* Ghidra symbol: FUN_00a7a530 */


void FUN_00a7a530(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 local_40 [2];
  undefined8 local_38;
  
  FUN_00a799b0(param_1,0);
  FUN_00a7a360(param_1,2);
  uVar1 = FUN_0069e8a0();
  FUN_00a79a60(param_1,uVar1);
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x88))(param_1);
  (**(code **)(*plVar2 + 0x100))(plVar2);
  *(undefined1 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0x16) = 1;
  FUN_0040d200(local_40,0x28,0);
  local_40[0] = 0x28;
  local_38 = FUN_00416740(param_1[0x14]);
  thunk_FUN_0419fd2d(param_1[0x17],FUN_00a79500);
  FUN_00a797b0(DAT_02014718,param_1[0x17],param_1);
  thunk_FUN_04049bf8(param_1[0x17],local_40);
  FUN_00a79ba0(param_1,1);
  thunk_FUN_041a4bab(param_1[0x17]);
  return;
}

