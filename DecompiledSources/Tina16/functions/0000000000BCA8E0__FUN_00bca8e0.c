/* Ghidra address: 00bca8e0 */
/* Ghidra symbol: FUN_00bca8e0 */


undefined8 *
FUN_00bca8e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = (code *)*param_4;
  local_30 = param_4[1];
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414480(param_2);
  iVar3 = 1;
  cVar1 = FUN_00bc9d40(param_1,local_res18[0]);
  while (cVar1 != '\0') {
    iVar2 = FUN_00bc5540(param_1,0);
    FUN_00416dc0(&local_40,local_res18[0],iVar3,iVar2 - iVar3);
    (*local_38)(local_30,&local_48,param_1);
    FUN_00416cd0(param_2,3,*param_2,local_40,local_48);
    iVar3 = FUN_00bc5540(param_1);
    iVar2 = FUN_00bc55a0(param_1);
    iVar3 = iVar3 + iVar2;
    cVar1 = FUN_00bca040(param_1);
  }
  FUN_00416dc0(&local_50,local_res18[0],iVar3,0x7fffffff);
  FUN_00416ad0(param_2,local_50);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_res18);
  return param_2;
}

