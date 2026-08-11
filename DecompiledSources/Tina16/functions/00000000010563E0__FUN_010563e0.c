/* Ghidra address: 010563e0 */
/* Ghidra symbol: FUN_010563e0 */


void FUN_010563e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_1088 [2];
  undefined8 local_1080;
  undefined1 local_1070 [2048];
  undefined1 local_870 [1400];
  undefined1 local_2f8;
  undefined4 local_70 [15];
  undefined4 local_34;
  
  local_2f8 = 0;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00414610(local_res10);
  FUN_00442620(local_870,local_res8);
  FUN_00442620(local_1070,local_res10);
  local_1088[0] = 0x18;
  local_1080 = 0;
  FUN_0040d200(local_70,0x68,0);
  local_70[0] = 0x68;
  local_34 = 1;
  iVar1 = thunk_FUN_04169e31(0,local_870,local_1088,local_1088,0xffffffff,0,0,local_1070,local_70,
                             param_3);
  if (iVar1 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"RunExternal: create process #2");
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_res8,2);
  return;
}

