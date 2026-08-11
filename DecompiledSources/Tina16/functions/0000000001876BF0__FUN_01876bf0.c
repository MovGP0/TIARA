/* Ghidra address: 01876bf0 */
/* Ghidra symbol: FUN_01876bf0 */


void FUN_01876bf0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_01876c80(param_1,local_res10[0]);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x78))(*(longlong **)(param_1 + 8),local_res10[0]);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),(longlong)param_3);
  }
  FUN_00414480(local_res10);
  return;
}

