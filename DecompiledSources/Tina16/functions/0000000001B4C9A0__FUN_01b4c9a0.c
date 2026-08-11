/* Ghidra address: 01b4c9a0 */
/* Ghidra symbol: FUN_01b4c9a0 */


void FUN_01b4c9a0(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res10;
  int local_res18;
  undefined1 auStack_d8 [32];
  wchar_t *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  wchar_t *local_68;
  undefined1 local_60;
  wchar_t *local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_40 = auStack_d8;
  local_98 = 0;
  local_80 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined1 *)(param_1 + 0x147d) = 0;
  if (local_res18 == 0) {
    FUN_00414b50(&local_30,L"c:\\Program Files\\Xyce_7.8\\bin");
    FUN_00414b50(&local_38,L"Xyce.exe");
  }
  else {
    FUN_00416ba0(&local_30,*(undefined8 *)PTR_DAT_020049a0,L"\\VHDL\\HBDist");
    FUN_00414b50(&local_38,L"hb.exe");
  }
  local_b8 = (wchar_t *)local_38;
  FUN_00416cd0(&local_28,3,local_30,&DAT_01b4cea8);
  cVar1 = FUN_00440a20(local_28,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"HB Add-on is not installed!");
    FUN_004134c0(uVar2);
  }
  local_b8 = L"\"";
  FUN_00416cd0(&local_28,3,&DAT_01b4cefc,local_28);
  local_b8 = L"\"";
  FUN_00416cd0(&local_res10,3,&DAT_01b4cefc,local_res10);
  local_b8 = L"%s -l result-%s-s.log -o output-%s.dat";
  FUN_00416cd0(local_20,3,local_28,&DAT_01b4cf0c);
  local_78 = local_res10;
  local_70 = 0x11;
  local_68 = L"temp";
  local_60 = 0x11;
  local_58 = L"temp";
  local_50 = 0x11;
  FUN_00442f70(&local_48,local_20[0],&local_78,2);
  FUN_00414b50(local_20,local_48);
  if (*(char *)(param_1 + 0x147c) == '\0') {
    local_b8 = (wchar_t *)(param_1 + 0x147d);
    local_b0 = CONCAT44(local_b0._4_4_,60000);
    local_a8 = 0;
    local_a0 = 0;
    FUN_010565c0(local_10,local_20[0],*(undefined8 *)(param_1 + 0x20),1);
  }
  else {
    local_b8 = (wchar_t *)CONCAT44(local_b8._4_4_,60000);
    local_b0 = 0;
    local_a8 = 0;
    FUN_01054cd0(local_10,local_20[0],*(undefined8 *)(param_1 + 0x20),1);
  }
  if (local_res18 == 0) {
    local_90 = local_28;
    local_88 = 0x11;
    FUN_00442f70(&local_80,L"Run from: %s",&local_90,0);
    FUN_0072d440(local_80,2,4,0);
  }
  if (*(char *)(param_1 + 0x147d) == '\0') {
    local_b8 = L"result-temp-s.log";
    FUN_00416cd0(&local_98,3,*(undefined8 *)(param_1 + 0x20),&DAT_01b4cea8);
    FUN_01b4c1d0(local_98,L"xyce",L"simulator");
    FUN_00410f20(local_10);
  }
  else {
    FUN_01b4cd80(0,local_40);
  }
  FUN_00414480(&local_98);
  FUN_00414480(&local_80);
  FUN_00414480(&local_48);
  FUN_00414560(&local_38,4);
  FUN_00414480(&local_res10);
  return;
}

