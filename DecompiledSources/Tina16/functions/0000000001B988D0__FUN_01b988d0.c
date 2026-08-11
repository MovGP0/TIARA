/* Ghidra address: 01b988d0 */
/* Ghidra symbol: FUN_01b988d0 */


void FUN_01b988d0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_00c85dd0(*(undefined8 *)PTR_DAT_02002c40,local_res10[0],*PTR_DAT_02002480,0);
  *(int *)(param_1 + 0x898) = iVar1;
  if (-1 < iVar1) {
    (**(code **)(**(longlong **)(param_1 + 0x768) + 0x268))(*(longlong **)(param_1 + 0x768),iVar1);
  }
  FUN_00414480(local_res10);
  return;
}

