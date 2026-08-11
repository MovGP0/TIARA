/* Ghidra address: 014b9f00 */
/* Ghidra symbol: FUN_014b9f00 */


void FUN_014b9f00(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  uint local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x710) + 0x260))(*(longlong **)(param_1 + 0x710));
  if (cVar1 != '\0') {
    local_2c = local_2c | 1;
  }
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x718) + 0x260))(*(longlong **)(param_1 + 0x718));
  if (cVar1 != '\0') {
    local_2c = local_2c | 2;
  }
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_00414b50(&local_20,*(undefined8 *)PTR_DAT_02002340);
  FUN_00416ba0(&local_28,L"HKEY_CURRENT_USER\\",local_20);
  FUN_005ea670(local_10,0xffffffff80000001);
  cVar1 = FUN_005ea880(local_10,local_20,1);
  if (cVar1 == '\0') {
    FUN_00416ba0(&local_48,local_28,L": not found");
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,local_48);
    FUN_004134c0(uVar2);
  }
  else {
    FUN_00414b50(&local_18,L"SermonOptions");
    FUN_005eba20(local_10,local_18,local_2c);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_48);
  FUN_00414560(&local_28,3);
  return;
}

