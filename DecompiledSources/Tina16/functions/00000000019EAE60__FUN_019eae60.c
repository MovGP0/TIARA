/* Ghidra address: 019eae60 */
/* Ghidra symbol: FUN_019eae60 */


undefined8 FUN_019eae60(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined1 local_70 [48];
  undefined1 local_40 [48];
  
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00417580(local_40,&DAT_00ea5f80);
  FUN_00417580(local_70,&DAT_00ea5ae8);
  FUN_00414480(param_1);
  FUN_00ea7a10(local_40,local_res18,2);
  if (*param_4 < 0) {
    FUN_00ea82d0(local_40,local_70,local_res10);
  }
  else {
    FUN_00ea8460(local_40,local_70,local_res10,*param_4);
  }
  cVar1 = FUN_00ea74f0(local_70);
  if (cVar1 != '\0') {
    FUN_00ea7500(local_70,param_1);
    iVar2 = FUN_00ea74d0(local_70);
    iVar3 = FUN_00ea74e0(local_70);
    *param_4 = iVar2 + iVar3;
  }
  FUN_00417740(local_70,&DAT_00ea5ae8);
  FUN_00417740(local_40,&DAT_00ea5f80);
  FUN_00414560(&local_res10,2);
  return param_1;
}

