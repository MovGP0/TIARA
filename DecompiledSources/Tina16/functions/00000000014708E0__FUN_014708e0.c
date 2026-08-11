/* Ghidra address: 014708e0 */
/* Ghidra symbol: FUN_014708e0 */


void FUN_014708e0(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_88 [32];
  wchar_t *local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_88;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_20 = FUN_005ea3c0(&DAT_005e7878,1);
  FUN_005ea670(local_20,0xffffffff80000001);
  local_68 = L"\\Python\\Shell\\Font";
  FUN_00416cd0(&local_38,3,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_20,local_38,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_20,L"Size");
    if (cVar1 != '\0') {
      uVar3 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
      uVar2 = FUN_005eba50(local_20,L"Size");
      FUN_005fce30(uVar3,uVar2);
    }
    cVar1 = FUN_005ebec0(local_20,L"Name");
    if (cVar1 != '\0') {
      uVar3 = FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
      FUN_005eb6d0(local_20,&local_40,L"Name");
      FUN_005fcd80(uVar3,local_40);
    }
    FUN_005ea630(local_20);
  }
  local_68 = L"\\Python\\Shell";
  FUN_00416cd0(&local_48,3,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005ea880(local_20,local_48,1);
  if (cVar1 != '\0') {
    cVar1 = FUN_005ebec0(local_20,L"LastFileName");
    if (cVar1 == '\0') {
      FUN_00414480(param_1 + 0x7e8);
    }
    else {
      FUN_005eb6d0(local_20,&local_50,L"LastFileName");
      FUN_00414ad0(param_1 + 0x7e8,local_50);
    }
    FUN_005ea630(local_20);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_50,4);
  return;
}

