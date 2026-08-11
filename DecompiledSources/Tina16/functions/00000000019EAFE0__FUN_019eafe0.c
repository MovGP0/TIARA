/* Ghidra address: 019eafe0 */
/* Ghidra symbol: FUN_019eafe0 */


undefined8 FUN_019eafe0(undefined8 param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res10 [3];
  undefined1 local_40 [48];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00417580(local_40,&DAT_00ea5f80);
  FUN_00ea7a10(local_40,L"\\b[A-Z0-9][A-Z_0-9\\/%\\*\\$\\+-]*\\b",2);
  FUN_00ea8460(local_40,param_1,local_res10[0],*param_3);
  cVar1 = FUN_00ea74f0(param_1);
  if (cVar1 != '\0') {
    iVar2 = FUN_00ea74d0(param_1);
    iVar3 = FUN_00ea74e0(param_1);
    *param_3 = iVar2 + iVar3;
  }
  FUN_00417740(local_40,&DAT_00ea5f80);
  FUN_00414480(local_res10);
  return param_1;
}

