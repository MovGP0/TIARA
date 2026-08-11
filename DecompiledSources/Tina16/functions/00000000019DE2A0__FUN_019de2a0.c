/* Ghidra address: 019de2a0 */
/* Ghidra symbol: FUN_019de2a0 */


bool FUN_019de2a0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 local_60 [48];
  undefined1 local_30 [40];
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00417580(local_30,&DAT_00ea5f80);
  FUN_00417580(local_60,&DAT_00ea5ae8);
  FUN_00ea7a10(local_30,local_res10,2);
  FUN_00ea8460(local_30,local_60,local_res8,param_3);
  cVar1 = FUN_00ea74f0(local_60);
  FUN_00417740(local_60,&DAT_00ea5ae8);
  FUN_00417740(local_30,&DAT_00ea5f80);
  FUN_00414560(&local_res8,2);
  return cVar1 == '\0';
}

