/* Ghidra address: 012e1a40 */
/* Ghidra symbol: FUN_012e1a40 */


int FUN_012e1a40(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_res10 [3];
  undefined8 local_30 [2];
  longlong local_20 [2];
  
  local_30[0] = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = 0;
  FUN_00414b50(local_20,local_res10[0]);
  while( true ) {
    iVar1 = 0;
    if (local_20[0] != 0) {
      iVar1 = *(int *)(local_20[0] + -4);
    }
    if (iVar1 < 1) break;
    FUN_00416780(local_30,param_3);
    iVar1 = FUN_004170c0(local_30[0],local_20[0],1);
    if (iVar1 < 1) break;
    iVar2 = iVar2 + 1;
    FUN_00416e20(local_20,1,iVar1);
  }
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  FUN_00414480(local_res10);
  return iVar2;
}

