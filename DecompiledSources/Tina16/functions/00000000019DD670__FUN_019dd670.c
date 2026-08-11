/* Ghidra address: 019dd670 */
/* Ghidra symbol: FUN_019dd670 */


undefined8 FUN_019dd670(undefined8 param_1,undefined8 param_2,int *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_78;
  undefined1 local_70 [48];
  undefined1 local_40 [48];
  
  local_78 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_40,&DAT_00ea5f80);
  FUN_00417580(local_70,&DAT_00ea5ae8);
  FUN_00414480(param_1);
  if (param_4 == '\0') {
    FUN_00414b50(&local_78,
                 L"({.+?}|[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?(MIL|MEG|F|P|N|U|M|K|G|T)?)");
  }
  else if (param_4 == '\x01') {
    FUN_00414b50(&local_78,L"[-+]?[0-9]*\\.?[0-9]+([eE][-+]?[0-9]+)?(MIL|MEG|F|P|N|U|M|K|G|T)?");
  }
  else {
    FUN_00414b50(&local_78,L"{.+?}");
  }
  FUN_00ea7a10(local_40,local_78,2);
  FUN_00ea8460(local_40,local_70,local_res10[0],*param_3);
  cVar1 = FUN_00ea74f0(local_70);
  if (cVar1 != '\0') {
    FUN_00ea7500(local_70,param_1);
    iVar2 = FUN_00ea74d0(local_70);
    iVar3 = FUN_00ea74e0(local_70);
    *param_3 = iVar2 + iVar3;
  }
  FUN_00414480(&local_78);
  FUN_00417740(local_70,&DAT_00ea5ae8);
  FUN_00417740(local_40,&DAT_00ea5f80);
  FUN_00414480(local_res10);
  return param_1;
}

