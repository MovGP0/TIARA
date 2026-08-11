/* Ghidra address: 01d78bd0 */
/* Ghidra symbol: FUN_01d78bd0 */


longlong * FUN_01d78bd0(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  undefined8 local_res10;
  longlong *local_res18;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_98;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1,local_res10);
  FUN_00414ad0(local_res18,local_res10);
  FUN_00416ba0(&local_48,local_res10,L"\\setup.ini");
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_48);
  local_78 = *(undefined8 *)PTR_DAT_020018e0;
  (**(code **)(*local_20 + 0x10))(local_20,&local_50,L"Setup Settings",L"Program Folder");
  FUN_00414ad0(PTR_DAT_020018e0,local_50);
  local_2c = (**(code **)(*local_20 + 0x20))(local_20,L"Setup Settings",L"Allusers",1);
  if (local_2c == 1) {
    *(undefined8 *)PTR_DAT_020054f0 = 0xffffffff80000002;
  }
  else {
    *(undefined8 *)PTR_DAT_020054f0 = 0xffffffff80000001;
  }
  FUN_00410f20(local_20);
  local_28 = FUN_005ea470(&DAT_005e7878,1,0x20019);
  FUN_005ea670(local_28,*(undefined8 *)PTR_DAT_020054f0);
  FUN_00416ba0(&local_58,L"\\SOFTWARE\\DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  cVar1 = FUN_005eaa60(local_28,local_58);
  if (cVar1 != '\0') {
    FUN_005eb6d0(local_28,param_1,L"RootDir");
    if (*param_1 == 0) {
      FUN_00414ad0(param_1,local_res10);
    }
    FUN_005eb6d0(local_28,&local_60,L"CommonCatDir");
    FUN_00414ad0(local_res18,local_60);
    if (*local_res18 == 0) {
      FUN_00414ad0(local_res18,local_res10);
    }
    *PTR_DAT_02004350 = 1;
    *PTR_DAT_020011e0 = 1;
  }
  FUN_005ea630(local_28);
  FUN_00410f20(local_28);
  FUN_00414560(&local_60,4);
  FUN_00414480(&local_res10);
  return param_1;
}

