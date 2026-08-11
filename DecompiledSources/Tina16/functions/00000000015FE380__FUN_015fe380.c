/* Ghidra address: 015fe380 */
/* Ghidra symbol: FUN_015fe380 */


void FUN_015fe380(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong local_res10 [3];
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = FUN_004170c0(&DAT_015fe4dc,local_res10[0],1);
  FUN_00416dc0(local_20,local_res10[0],1,iVar1 + -1);
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  FUN_00416dc0(&local_30,local_res10[0],iVar1 + 1,iVar2 - iVar1);
  FUN_00416cd0(&local_28,3,&DAT_015fe4ec,local_30,&DAT_015fe4ec);
  FUN_00450070(&local_38,*param_1,local_20[0],local_28,1);
  FUN_00414ad0(param_1,local_38);
  FUN_00414560(&local_38,4);
  FUN_00414480(local_res10);
  return;
}

