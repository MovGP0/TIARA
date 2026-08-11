/* Ghidra address: 0155e4a0 */
/* Ghidra symbol: FUN_0155e4a0 */


void FUN_0155e4a0(undefined8 param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 local_24;
  longlong *local_20;
  
  local_50 = auStack_98;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  (**(code **)(*local_20 + 0xd8))(local_20,local_res8[0]);
  FUN_00441640(&local_58,local_res8[0]);
  FUN_0044f8b0(&local_38,local_58);
  FUN_004414c0(&local_60,local_res8[0],L".jpg");
  FUN_01b24440(&local_40,local_60);
  FUN_004414c0(&local_68,local_res8[0],L".tflite");
  FUN_01b24440(&local_48,local_68);
  cVar1 = FUN_01b22620(local_20,L"MARKERMODELFILE",&local_24,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"MARKERMODELFILE: not found in the source file!");
    FUN_004134c0(uVar2);
  }
  local_78 = local_48;
  local_70 = 0x11;
  FUN_00442f70(&local_30,L"TF_MODEL_FILE_PATH = \"%s\"",&local_78,0);
  (**(code **)(*local_20 + 0x40))(local_20,local_24,local_30);
  cVar1 = FUN_01b22620(local_20,L"MARKERINPUTFILE",&local_28,0);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"MARKERINPUTFILE: not found in the source file!");
    FUN_004134c0(uVar2);
  }
  local_78 = local_40;
  local_70 = 0x11;
  FUN_00442f70(&local_30,L"INPUT_FILE = \"%s\"",&local_78,0);
  (**(code **)(*local_20 + 0x40))(local_20,local_28,local_30);
  (**(code **)(*local_20 + 0x100))(local_20,local_res8[0]);
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,3);
  FUN_00414560(&local_48,4);
  FUN_00414480(local_res8);
  return;
}

