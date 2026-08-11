/* Ghidra address: 009dc320 */
/* Ghidra symbol: FUN_009dc320 */


void FUN_009dc320(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8 [4];
  undefined1 auStack_268 [32];
  undefined4 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined1 local_212 [522];
  
  local_230 = 0;
  local_res8[0] = param_1;
  local_238 = param_2;
  FUN_00414610(param_1);
  FUN_009dc220(auStack_268);
  uVar2 = FUN_00416740(local_res8[0]);
  local_248 = 0;
  local_240 = 0;
  iVar1 = (*DAT_01e40518)(0,uVar2,local_212,0x105);
  if (iVar1 != 0) {
    local_228 = local_res8[0];
    local_220 = 0x11;
    local_248 = 0;
    uVar2 = FUN_0044d8d0(&PTR_FUN_004334c0,1,&PTR_PTR_009d13e8,&local_228);
    FUN_004134c0(uVar2);
  }
  FUN_00416830(&local_230,local_212,0x105);
  FUN_004b9f40(local_238,local_230);
  FUN_00414480(&local_230);
  FUN_00414480(local_res8);
  return;
}

