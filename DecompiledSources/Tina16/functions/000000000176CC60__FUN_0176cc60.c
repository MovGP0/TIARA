/* Ghidra address: 0176cc60 */
/* Ghidra symbol: FUN_0176cc60 */


void FUN_0176cc60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x48,local_res10[0]);
  FUN_00416cd0(local_20,3,*(undefined8 *)PTR_DAT_020049a0,&LAB_0176cd88,local_res10[0]);
  cVar1 = FUN_00440a20(local_20[0],1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0x90))(*(longlong **)(param_1 + 0xb0));
    FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_020049a0,&LAB_0176cd88,local_res10[0]);
    (**(code **)(**(longlong **)(param_1 + 0xb0) + 0xd8))(*(longlong **)(param_1 + 0xb0),local_28);
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

