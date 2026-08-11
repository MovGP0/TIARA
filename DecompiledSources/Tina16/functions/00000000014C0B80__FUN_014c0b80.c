/* Ghidra address: 014c0b80 */
/* Ghidra symbol: FUN_014c0b80 */


longlong FUN_014c0b80(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  char cVar2;
  longlong local_res8;
  undefined1 auStack_98 [32];
  wchar_t *local_78;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_30 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  DAT_0210eb90 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined2 *)(DAT_0210eb90 + 0x2c) = 10;
  FUN_004b2b90(DAT_0210eb90,1);
  FUN_00416ba0(&local_38,*(undefined8 *)PTR_DAT_02005010,L"\\tina.ini");
  local_28 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  cVar2 = (**(code **)(*local_28 + 0x30))(local_28,L"TINACloud",L"useSSL",1);
  if (cVar2 == '\0') {
    FUN_00414b50(local_20,L"http://");
  }
  else {
    FUN_00414b50(local_20,L"https://");
  }
  local_78 = L"www.tinacloud.com/tinaui/";
  (**(code **)(*local_28 + 0x10))(local_28,&local_40,L"TINACloud",L"UI_Url");
  FUN_00416ba0(local_res8 + 8,local_20[0],local_40);
  local_78 = L"www.tinacloud.com/tina4web/";
  (**(code **)(*local_28 + 0x10))(local_28,&local_48,L"TINACloud",L"Dll_Url");
  FUN_00416ba0(local_res8 + 0x10,local_20[0],local_48);
  FUN_014c0750(&local_58);
  local_78 = (wchar_t *)local_58;
  (**(code **)(*local_28 + 0x10))(local_28,&local_50,L"TINACloud",L"sessionid");
  FUN_00414ad0(local_res8 + 0x18,local_50);
  (**(code **)(*local_28 + 0x18))
            (local_28,L"TINACloud",L"sessionid",*(undefined8 *)(local_res8 + 0x18));
  FUN_00414480(local_res8 + 0x20);
  *(undefined8 *)(local_res8 + 0x28) = 0;
  *(undefined8 *)(local_res8 + 0x30) = 0;
  FUN_00410f20(local_28);
  FUN_014c35c0(local_res8,&local_60);
  cVar2 = FUN_00440b00(local_60,1);
  if (cVar2 != '\0') {
    FUN_014c35c0(local_res8,&local_68);
    FUN_014c0620(local_68);
  }
  FUN_00414560(&local_68,7);
  FUN_00414480(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

