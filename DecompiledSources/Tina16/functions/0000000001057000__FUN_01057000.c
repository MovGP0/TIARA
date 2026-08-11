/* Ghidra address: 01057000 */
/* Ghidra symbol: FUN_01057000 */


undefined4 FUN_01057000(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_90 [15];
  undefined4 local_54;
  undefined2 local_50;
  undefined8 local_28;
  undefined4 local_1c [3];
  
  local_28 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00414b50(&local_28,local_res8);
  FUN_0040d200(local_90,0x68,0);
  local_90[0] = 0x68;
  local_54 = 1;
  local_50 = param_3;
  uVar2 = FUN_00416740(local_28);
  uVar3 = FUN_00416740(local_res10);
  iVar1 = thunk_FUN_04169e31(0,uVar2,0,0,0,0x30,0,uVar3,local_90,&local_a8);
  if (iVar1 == 0) {
    local_1c[0] = 0xffffffff;
  }
  else {
    thunk_FUN_0418d6df(local_a8,0xffffffff);
    thunk_FUN_041c35b6(local_a8,local_1c);
    thunk_FUN_041d2921(local_a8);
    thunk_FUN_041d2921(local_a0);
  }
  thunk_FUN_0419965d(10);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res8,2);
  return local_1c[0];
}

