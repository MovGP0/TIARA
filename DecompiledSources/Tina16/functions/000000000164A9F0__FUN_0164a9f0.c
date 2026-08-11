/* Ghidra address: 0164a9f0 */
/* Ghidra symbol: FUN_0164a9f0 */


void FUN_0164a9f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x20) + 0xb0))
                    (*(longlong **)(param_1 + 0x20),local_res10);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0x78))
              (*(longlong **)(param_1 + 0x20),local_res10);
  }
  FUN_0043f750(&local_10,param_4);
  FUN_00416cd0(&local_res10,5,local_res10,&LAB_0164ab38,local_res18,&LAB_0164ab38,local_10);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x28) + 0xb0))
                    (*(longlong **)(param_1 + 0x28),local_res10);
  if (iVar1 == -1) {
    (**(code **)(**(longlong **)(param_1 + 0x28) + 0x78))
              (*(longlong **)(param_1 + 0x28),local_res10);
  }
  FUN_00414480(&local_10);
  FUN_00414560(&local_res10,2);
  return;
}

