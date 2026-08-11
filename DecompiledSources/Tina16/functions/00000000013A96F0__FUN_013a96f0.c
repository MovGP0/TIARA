/* Ghidra address: 013a96f0 */
/* Ghidra symbol: FUN_013a96f0 */


undefined1 FUN_013a96f0(undefined8 param_1)

{
  char cVar1;
  undefined8 local_res8 [4];
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined *local_80;
  undefined8 local_70;
  undefined8 local_68;
  wchar_t *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  wchar_t *local_18;
  undefined1 local_9;
  
  local_40 = auStack_a8;
  local_70 = 0;
  local_68 = 0;
  local_50 = 0;
  local_48 = 0;
  local_18 = (wchar_t *)0x0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_9 = 1;
  local_88 = L"obj_dir";
  FUN_00416cd0(&local_18,3,local_res8[0],&DAT_013a9af8);
  cVar1 = FUN_00440b00(local_18,1);
  if (cVar1 == '\0') {
    FUN_00440c30(local_18);
  }
  local_88 = L"systemc_model";
  local_80 = &DAT_013a9af8;
  FUN_00416cd0(&local_48,4,DAT_02108368,&DAT_013a9af8);
  FUN_013a7340(local_48,&DAT_013a9b4c,local_18);
  FUN_00414b50(&local_20,L"Your project is ready to compile.\n\r");
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,
               L"Open Visual Studio 2019 or later and open your \"systemc_model.vcxproj\" project from location."
              );
  local_60 = local_18;
  local_58 = 0x11;
  FUN_00442f70(&local_50,L"Location: %s",&local_60,0);
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,local_50);
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,L"Build your project.");
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,0);
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,
               L"After building right click on your new macro and select \"Assign SystemC DLL...\"")
  ;
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,L"Select the DLL file in the dialog.");
  local_60 = L"Debug";
  local_58 = 0x11;
  FUN_00442f70(&local_68,L" 32bit: <location>\\%s",&local_60,0);
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,local_68);
  local_60 = L"Debug";
  local_58 = 0x11;
  FUN_00442f70(&local_70,L" 64bit: <location>\\x64\\%s",&local_60,0);
  local_88 = L"\n";
  local_80 = &DAT_013a9c8c;
  FUN_00416cd0(&local_20,4,local_20,local_70);
  FUN_0072d440(local_20,2,4,0);
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_50,2);
  FUN_00414560(&local_30,4);
  FUN_00414480(local_res8);
  return local_9;
}

