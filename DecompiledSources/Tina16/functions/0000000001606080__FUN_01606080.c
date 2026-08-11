/* Ghidra address: 01606080 */
/* Ghidra symbol: FUN_01606080 */


void FUN_01606080(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 local_res8;
  undefined4 local_res10;
  undefined4 local_res18;
  undefined4 local_res20;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined1 *local_40;
  undefined8 local_30 [2];
  longlong *local_20;
  
  local_40 = auStack_78;
  local_30[0] = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_1);
  local_58 = L"codetype.ini";
  FUN_00416cd0(local_30,3,local_res8,&DAT_016061f4);
  local_20 = (longlong *)FUN_005da0f0(&PTR_FUN_005d5a90,1,local_30[0]);
  (**(code **)(*local_20 + 0x28))(local_20,L"General",L"DevTool",local_res10);
  (**(code **)(*local_20 + 0x28))(local_20,L"General",L"SourceFiles",local_res18);
  (**(code **)(*local_20 + 0x28))(local_20,L"General",L"SharedLib",local_res20);
  if (local_20 != (longlong *)0x0) {
    FUN_00410f20(local_20);
  }
  FUN_00414480(local_30);
  FUN_00414480(&local_res8);
  return;
}

