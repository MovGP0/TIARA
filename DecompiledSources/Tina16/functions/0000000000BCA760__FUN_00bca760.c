/* Ghidra address: 00bca760 */
/* Ghidra symbol: FUN_00bca760 */


undefined8
FUN_00bca760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            char param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  iVar3 = 1;
  cVar1 = FUN_00bc9d40(param_1,local_res18[0]);
  while (cVar1 != '\0') {
    iVar2 = FUN_00bc5540(param_1,0);
    FUN_00416dc0(local_20,local_res18[0],iVar3,iVar2 - iVar3);
    FUN_00416ad0(param_2,local_20[0]);
    if (param_5 == '\0') {
      FUN_00416ad0(param_2);
    }
    else {
      FUN_00bca420(param_1,&local_28,param_4);
      FUN_00416ad0(param_2);
    }
    iVar3 = FUN_00bc5540(param_1,0);
    iVar2 = FUN_00bc55a0(param_1);
    iVar3 = iVar3 + iVar2;
    cVar1 = FUN_00bca040(param_1);
  }
  FUN_00416dc0(&local_30,local_res18[0],iVar3,0x7fffffff);
  FUN_00416ad0(param_2,local_30);
  FUN_00414560(&local_30,3);
  FUN_00414480(local_res18);
  return param_2;
}

