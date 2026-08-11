/* Ghidra address: 01a38ec0 */
/* Ghidra symbol: FUN_01a38ec0 */


undefined8 FUN_01a38ec0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_c8 [32];
  wchar_t *local_a8;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_90 = auStack_c8;
  local_98 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_a8 = L"temp-solution.json";
  FUN_00416cd0(&local_98,3,*(undefined8 *)(param_1 + 0x50),L"\\temp\\");
  FUN_004414c0(&local_60,local_98,L".xml");
  cVar1 = FUN_00440a20(local_60,1);
  if (cVar1 == '\0') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Solution file not found");
    FUN_004134c0(uVar2);
  }
  FUN_00414ad0(param_2,local_60);
  FUN_00414480(&local_98);
  FUN_00414560(&local_60,4);
  FUN_00417840(&local_40,&DAT_00b9f960,2);
  FUN_00417840(&local_30,&LAB_00b9fca0,4);
  FUN_0041b800(&local_10);
  return param_2;
}

