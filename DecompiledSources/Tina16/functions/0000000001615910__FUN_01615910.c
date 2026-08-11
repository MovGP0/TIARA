/* Ghidra address: 01615910 */
/* Ghidra symbol: FUN_01615910 */


void FUN_01615910(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  longlong local_res8 [3];
  undefined8 local_res20;
  
  local_res8[0] = param_1;
  local_res20 = param_4;
  FUN_00414610(param_1);
  FUN_00414610(local_res20);
  iVar1 = FUN_004170c0(local_res20,local_res8[0],1);
  iVar2 = 0;
  if (local_res8[0] != 0) {
    iVar2 = *(int *)(local_res8[0] + -4);
  }
  FUN_00416dc0(param_2,local_res8[0],1,iVar1 + -1);
  FUN_00416dc0(param_3,local_res8[0],iVar1 + 1,iVar2 - iVar1);
  FUN_00414480(local_res8);
  FUN_00414480(&local_res20);
  return;
}

