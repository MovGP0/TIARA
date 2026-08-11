/* Ghidra address: 017ff8e0 */
/* Ghidra symbol: FUN_017ff8e0 */


void FUN_017ff8e0(undefined8 param_1,undefined8 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 *local_res10;
  undefined1 *local_res18;
  undefined1 auStack_1a8 [32];
  wchar_t *local_188;
  undefined1 local_178 [256];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_1a8;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_1);
  local_188 = L"TINA.INI";
  FUN_00416cd0(&local_38,3,local_res8,&DAT_017ffd5c);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_38);
  local_188 = L"10.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_40,L"Schematic Page Setup",L"MTop");
  uVar2 = FUN_017ff760(local_40);
  local_res10[2] = uVar2;
  local_188 = L"10.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_48,L"Schematic Page Setup",L"MLeft");
  uVar2 = FUN_017ff760(local_48);
  local_res10[4] = uVar2;
  local_188 = L"10.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_50,L"Schematic Page Setup",L"MBottom");
  uVar2 = FUN_017ff760(local_50);
  local_res10[3] = uVar2;
  local_188 = L"10.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_58,L"Schematic Page Setup",L"MRight");
  uVar2 = FUN_017ff760(local_58);
  local_res10[5] = uVar2;
  local_188 = L"210.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_60,L"Schematic Page Setup",L"PWidth");
  uVar2 = FUN_017ff760(local_60);
  *local_res10 = uVar2;
  local_188 = L"297.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_68,L"Schematic Page Setup",L"PHeight");
  uVar2 = FUN_017ff760(local_68);
  local_res10[1] = uVar2;
  local_188 = L"1.0";
  (**(code **)(*local_20 + 0x10))(local_20,&local_70,L"Schematic Page Setup",L"Scale");
  uVar2 = FUN_017ff760(local_70);
  local_res10[7] = uVar2;
  uVar1 = (**(code **)(*local_20 + 0x30))(local_20,L"Schematic Page Setup",L"Landscape",0);
  *(undefined1 *)(local_res10 + 6) = uVar1;
  uVar1 = (**(code **)(*local_20 + 0x30))(local_20,L"Schematic Page Setup",L"BWPrint",0);
  *local_res18 = uVar1;
  uVar1 = (**(code **)(*local_20 + 0x30))(local_20,L"Schematic Page Setup",L"AlignmentMarks",0);
  *(undefined1 *)(local_res10 + 8) = uVar1;
  local_188 = L"A4";
  (**(code **)(*local_20 + 0x10))(local_20,&local_78,L"Schematic Page Setup",L"PName");
  FUN_00416910(local_178,local_78,0xff);
  FUN_00415020((longlong)local_res10 + 0x41,local_178,0x28);
  FUN_00410f20(local_20);
  FUN_00414560(&local_78,9);
  FUN_00414480(&local_res8);
  return;
}

