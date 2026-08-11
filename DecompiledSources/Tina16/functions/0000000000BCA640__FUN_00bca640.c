/* Ghidra address: 00bca640 */
/* Ghidra symbol: FUN_00bca640 */


void FUN_00bca640(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar3 = 1;
  cVar1 = FUN_00bc9d40(param_1,local_res10[0]);
  while (cVar1 != '\0') {
    iVar2 = FUN_00bc5540(param_1,0);
    FUN_00416dc0(local_20,local_res10[0],iVar3,iVar2 - iVar3);
    (**(code **)(*param_3 + 0x78))(param_3);
    iVar3 = FUN_00bc5540(param_1);
    iVar2 = FUN_00bc55a0(param_1);
    iVar3 = iVar3 + iVar2;
    cVar1 = FUN_00bca040(param_1);
  }
  FUN_00416dc0(&local_28,local_res10[0],iVar3,0x7fffffff);
  (**(code **)(*param_3 + 0x78))(param_3,local_28);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

