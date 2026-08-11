/* Ghidra address: 01ccd700 */
/* Ghidra symbol: FUN_01ccd700 */


longlong FUN_01ccd700(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined1 *local_30;
  int local_24;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_01d2d210(local_res8,0);
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  uVar2 = FUN_005fc570(&PTR_FUN_005f2d40,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xf8) = uVar2;
  *(undefined8 *)(local_res8 + 0x100) = 0;
  *(undefined8 *)(local_res8 + 0x118) = 0;
  *(undefined1 *)(local_res8 + 0x120) = 1;
  *(undefined1 *)(local_res8 + 0x121) = 1;
  local_48 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02005010,&DAT_01ccdabc);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  local_24 = (**(code **)(*local_20 + 0x20))(local_20,L"Axis Setup",L"UseFixedFonts",0);
  FUN_00410f20(local_20);
  if (local_24 == 1) {
    FUN_005fcd80(*(undefined8 *)(local_res8 + 0x98),L"Tahoma");
  }
  else {
    FUN_005fcd80(*(undefined8 *)(local_res8 + 0x98),L"Arial");
  }
  FUN_005fcef0(*(undefined8 *)(local_res8 + 0x98),0);
  if (local_24 == 1) {
    FUN_005fcd80(*(undefined8 *)(local_res8 + 0xa0),L"Tahoma");
  }
  else {
    FUN_005fcd80(*(undefined8 *)(local_res8 + 0xa0),L"Arial");
  }
  FUN_005fcef0(*(undefined8 *)(local_res8 + 0xa0),0);
  FUN_005fce70(*(undefined8 *)(local_res8 + 0xa0),2);
  *(undefined1 *)(local_res8 + 0x80) = 1;
  *(undefined8 *)(local_res8 + 0xb8) = 0;
  *(undefined8 *)(local_res8 + 0xc0) = 0x3ff0000000000000;
  FUN_01cd6740(local_res8,2);
  *(undefined8 *)(local_res8 + 0x88) = 0x3ff0000000000000;
  *(undefined4 *)(local_res8 + 0x90) = 2;
  *(undefined8 *)(local_res8 + 200) = 0;
  *(undefined8 *)(local_res8 + 0xd0) = 0x3ff0000000000000;
  *(undefined4 *)(local_res8 + 0xe8) = 0x32;
  *(undefined4 *)(local_res8 + 0xec) = 200;
  FUN_00414ad0(local_res8 + 0xd8,L"Axis label ");
  FUN_00414480(local_res8 + 0xe0);
  *(undefined8 *)(local_res8 + 0x60) = 0;
  *(undefined8 *)(local_res8 + 0xa8) = 0;
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined1 *)(local_res8 + 0x108) = 0;
  uVar2 = FUN_005dc9d0(&PTR_FUN_005d4e78,1,0);
  *(undefined8 *)(local_res8 + 0x110) = uVar2;
  *(undefined1 *)(local_res8 + 0x122) = 0;
  FUN_00414480(&local_38);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

