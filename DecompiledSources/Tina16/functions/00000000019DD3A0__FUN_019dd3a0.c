/* Ghidra address: 019dd3a0 */
/* Ghidra symbol: FUN_019dd3a0 */


undefined8 FUN_019dd3a0(undefined8 param_1,undefined8 param_2,longlong param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined8 local_60 [2];
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [48];
  
  local_60[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_40,&DAT_00ea5f80);
  FUN_00ea7a10(local_40,L"\\b[A-Z0-9][A-Z_0-9\\/%\\*\\$\\+-]*\\b",2);
  FUN_00ea8460(local_40,param_1,local_res10[0],*param_4);
  cVar1 = FUN_00ea74f0(param_1);
  if (cVar1 != '\0') {
    FUN_00ea7500(param_1,local_60);
    local_48 = local_60[0];
    local_50 = param_3 + 8;
    FUN_00595db0(local_50,&local_48);
    iVar2 = FUN_00ea74d0(param_1);
    iVar3 = FUN_00ea74e0(param_1);
    *param_4 = iVar2 + iVar3;
  }
  FUN_00414480(local_60);
  FUN_00417740(local_40,&DAT_00ea5f80);
  FUN_00414480(local_res10);
  return param_1;
}

