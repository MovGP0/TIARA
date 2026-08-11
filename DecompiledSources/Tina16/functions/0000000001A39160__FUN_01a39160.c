/* Ghidra address: 01a39160 */
/* Ghidra symbol: FUN_01a39160 */


undefined8 FUN_01a39160(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_138 [32];
  wchar_t *local_118;
  undefined1 *local_100;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_100 = auStack_138;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_70 = 0;
  local_78 = 0;
  local_30 = 0;
  FUN_01a38ec0(param_1,&local_48);
  FUN_004414c0(&local_50,local_48,L".json");
  local_40 = 0;
  local_38 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  local_118 = L"output.txt";
  FUN_00416cd0(&local_48,3,*(undefined8 *)(param_1 + 0x50),L"\\temp\\");
  cVar1 = FUN_00440a20(local_48,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Solution file not found");
    FUN_004134c0(uVar2);
  }
  (**(code **)(*local_38 + 0xd8))(local_38,local_48);
  (**(code **)(*local_38 + 0x38))(local_38,param_2);
  FUN_01a395d0(0,local_100);
  FUN_00414560(&local_78,7);
  FUN_00414480(&local_30);
  return param_2;
}

