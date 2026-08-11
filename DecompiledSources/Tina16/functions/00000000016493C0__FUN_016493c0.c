/* Ghidra address: 016493c0 */
/* Ghidra symbol: FUN_016493c0 */


void FUN_016493c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  uVar1 = FUN_01619680(&DAT_01617e48,1,param_2,local_res18,local_res20);
  *(undefined8 *)(param_1 + 0x13a00) = uVar1;
  FUN_004ae7e0(DAT_0210f838,*(undefined8 *)(param_1 + 0x13a00));
  uVar1 = FUN_01619c50(&DAT_016189f0,1,*(int *)(DAT_0210f838 + 0x10) + -1);
  *(undefined8 *)(param_1 + 0x13a08) = uVar1;
  FUN_004ae7e0(DAT_0210f840,*(undefined8 *)(param_1 + 0x13a08));
  FUN_00414560(&local_res18,2);
  return;
}

