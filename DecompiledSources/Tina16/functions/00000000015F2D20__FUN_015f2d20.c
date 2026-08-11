/* Ghidra address: 015f2d20 */
/* Ghidra symbol: FUN_015f2d20 */


undefined8 FUN_015f2d20(longlong param_1,longlong *param_2,undefined1 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  longlong *local_res10;
  undefined1 *local_res18;
  undefined1 auStack_108 [32];
  wchar_t *local_e8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  int local_7c;
  longlong *local_78;
  undefined8 local_70;
  undefined8 local_68 [2];
  int local_54;
  int local_50 [2];
  int local_48;
  char local_39;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_90 = auStack_108;
  local_c8 = 0;
  local_d0 = 0;
  local_b8 = 0;
  local_c0 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_68[0] = 0;
  local_70 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_30 = 0;
  local_20 = 0;
  local_50[0] = 0;
  local_54 = 0;
  *local_res18 = 0;
  if (local_res8 == 0) {
    FUN_015fcf20(L"_parse_description: session_folder = NIL!",0,0,0);
  }
  FUN_015fcd70(&local_70,local_res8);
  cVar1 = FUN_00b96de0(local_70);
  if (cVar1 == '\0') {
    FUN_00b96df0(local_70);
  }
  cVar1 = FUN_00b96de0(local_70);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_98,L"_parse_description: session_folder not exists: ",local_70);
    FUN_015fcf20(local_98,0,0,0);
  }
  local_39 = FUN_015f2ab0(local_res10,local_50,&local_54,local_68);
  if (local_39 == '\0') {
    uVar2 = FUN_00b89270();
    FUN_00b8e520(uVar2,&local_a0,0x89e);
    FUN_015fcf20(local_a0,0,0,0);
  }
  local_78 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_7c = local_50[0] + 1;
  if (local_7c <= local_54 + -1) {
    iVar3 = ((local_54 + -1) - local_7c) + 1;
    do {
      (**(code **)(*local_res10 + 0x18))(local_res10,&local_a8,local_7c);
      (**(code **)(*local_78 + 0x78))(local_78,local_a8);
      local_7c = local_7c + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  local_e8 = L"temp.txt";
  FUN_00416cd0(&local_b0,3,local_70,&DAT_015f3288);
  (**(code **)(*local_78 + 0x100))(local_78,local_b0);
  FUN_00410f20(local_78);
  local_20 = FUN_015e8730(&DAT_015e85b8,1);
  local_e8 = L"temp.txt";
  FUN_00416cd0(&local_b8,3,local_70,&DAT_015f3288);
  local_e8 = L"yylex2.txt";
  FUN_00416cd0(&local_c0,3,local_70,&DAT_015f3288);
  FUN_00e080e0(*(undefined8 *)(*(longlong *)(local_20 + 0x10) + 8),local_b8,local_c0);
  local_48 = FUN_015e96c0(local_20);
  if (local_48 == 1) {
    local_30 = 0;
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_d0,PTR_PTR_02003728);
    FUN_00b8e650(uVar2,&local_c8,L"HDLStrings.Msg_MacroDescError",local_d0);
    FUN_015fcf20(local_c8,0,0,0);
  }
  else {
    *local_res18 = 1;
    local_30 = *(undefined8 *)(local_20 + 0x20);
  }
  if (local_20 != 0) {
    FUN_00e08170(*(undefined8 *)(*(longlong *)(local_20 + 0x10) + 8));
  }
  if (local_20 != 0) {
    FUN_00410f20(local_20);
  }
  local_28 = local_30;
  FUN_00414560(&local_d0,8);
  FUN_00414560(&local_70,2);
  FUN_00414480(&local_res8);
  return local_28;
}

