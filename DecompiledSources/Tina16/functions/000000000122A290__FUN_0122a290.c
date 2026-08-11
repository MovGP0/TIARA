/* Ghidra address: 0122a290 */
/* Ghidra symbol: FUN_0122a290 */


void FUN_0122a290(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  longlong local_res10;
  undefined8 local_res18;
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  uVar2 = 0;
  if (local_res10 != 0) {
    uVar2 = *(undefined4 *)(local_res10 + -4);
  }
  iVar1 = FUN_004170c0(local_res10,*param_1,1);
  if (iVar1 != 0) {
    FUN_00416e20(param_1,iVar1,uVar2);
    FUN_00416ea0(local_res18,param_1,iVar1);
  }
  FUN_00414560(&local_res10,2);
  return;
}

