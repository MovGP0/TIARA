/* Ghidra address: 019dd960 */
/* Ghidra symbol: FUN_019dd960 */


undefined8 FUN_019dd960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_b8 [32];
  wchar_t *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_78;
  undefined1 *local_70;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50 [48];
  longlong *local_20;
  
  local_70 = auStack_b8;
  local_78 = 0;
  local_58 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  FUN_00417580(local_50,&DAT_00ea5ae8);
  FUN_00414480(param_1);
  local_20 = (longlong *)FUN_004b2790(&DAT_00476598,1,param_2);
  do {
    local_60 = local_20;
    *(int *)(local_20 + 1) = (int)local_20[1] + 1;
    iVar2 = (**(code **)(*(longlong *)local_20[2] + 0x28))((longlong *)local_20[2]);
    if (iVar2 <= (int)local_60[1]) goto code_r0x019ddab1;
    FUN_004b2850(local_20,&local_58);
    local_98 = L"\\ *(";
    local_90 = local_res20;
    local_88 = &DAT_019ddbe0;
    FUN_00416cd0(&local_78,5,&PTR_DAT_019ddbb4,local_res18);
    FUN_00ea81b0(local_50,local_58,local_78,2);
    cVar1 = FUN_00ea74f0(local_50);
  } while (cVar1 == '\0');
  FUN_00414ad0(param_1,local_58);
code_r0x019ddab1:
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  FUN_00414480(&local_78);
  FUN_00414480(&local_58);
  FUN_00417740(local_50,&DAT_00ea5ae8);
  FUN_00414560(&local_res18,2);
  return param_1;
}

