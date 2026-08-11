/* Ghidra address: 01470620 */
/* Ghidra symbol: FUN_01470620 */


void FUN_01470620(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  wchar_t *local_48;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_10 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_10,0xffffffff80000001);
  local_48 = L"\\Python\\Shell\\Font";
  FUN_00416cd0(&local_28,3,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_28,1);
  if (cVar1 != '\0') {
    uVar3 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
    uVar2 = FUN_005fce00(uVar3);
    FUN_005eba20(local_10,L"Size",uVar2);
    uVar3 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
    FUN_005fccd0(uVar3,&local_30);
    FUN_005eb630(local_10,L"Name",local_30);
    FUN_005ea630(local_10);
  }
  local_48 = L"\\Python\\Shell";
  FUN_00416cd0(&local_38,3,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_10,local_38,1);
  if (cVar1 != '\0') {
    FUN_005eb630(local_10,L"LastFileName",*(undefined8 *)(param_1 + 0x7e8));
    FUN_005ea630(local_10);
  }
  FUN_00410f20(local_10);
  FUN_00414480(&local_38);
  FUN_00414480(&local_30);
  FUN_00414480(&local_28);
  return;
}

