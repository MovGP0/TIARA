/* Ghidra address: 014b4bf0 */
/* Ghidra symbol: FUN_014b4bf0 */


void FUN_014b4bf0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20[0] = 0;
  (**(code **)(*param_1 + 0x2e8))(param_1,L"bmSpice");
  uVar2 = FUN_00b89270();
  FUN_00b8d110(uVar2,param_1);
  FUN_0064dd90(param_1,local_20);
  FUN_00414ad0(param_1 + 0x11b,local_20[0]);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_28,0x3e5);
  uVar2 = FUN_00b89270();
  FUN_00b8e520(uVar2,&local_30,0x3e6);
  FUN_00416cd0(param_1 + 0x10d,4,local_28,L": %d ",local_30,L": %d");
  FUN_014b4650(param_1);
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_014b4e74,L"TINA.INI");
  lVar3 = FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  param_1[0x115] = lVar3;
  lVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  param_1[0x119] = lVar3;
  lVar3 = FUN_014e4f70(0,&PTR_FUN_014db5f8,1);
  param_1[0x116] = lVar3;
  FUN_019953b0(lVar3);
  lVar3 = FUN_00e81400(&PTR_FUN_00e80d78,1,param_1);
  param_1[0x11a] = lVar3;
  FUN_00c0f7b0(param_1[0x10c],lVar3);
  uVar2 = FUN_014b11b0(&PTR_FUN_014af850,1,param_1);
  FUN_00c03380(param_1[0x10c],uVar2);
  cVar1 = FUN_01a90ed0();
  if (cVar1 != '\0') {
    FUN_01b25310(param_1[0x10c]);
  }
  FUN_00414560(&local_38,3);
  FUN_00414480(local_20);
  return;
}

