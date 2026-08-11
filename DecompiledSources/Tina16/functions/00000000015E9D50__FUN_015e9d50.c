/* Ghidra address: 015e9d50 */
/* Ghidra symbol: FUN_015e9d50 */


void FUN_015e9d50(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_res8 [4];
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  uVar1 = FUN_00416740(local_res8[0]);
  DAT_0210f7d0 = thunk_FUN_04163be6(uVar1);
  if (DAT_0210f7d0 == 0) {
    FUN_00416ba0(&local_10,local_res8[0],L": LoadSystemCDLL, dll not found");
    uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
    FUN_004134c0(uVar1);
  }
  DAT_0210f7a8 = FUN_00427c10(DAT_0210f7d0,L"sc_pli_newdesign");
  DAT_0210f7b0 = FUN_00427c10(DAT_0210f7d0,L"NewSystemCSession");
  DAT_0210f7b8 = FUN_00427c10(DAT_0210f7d0,L"FreeSystemCSession");
  DAT_0210f7c0 = FUN_00427c10(DAT_0210f7d0,L"GetSymDBPtr");
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return;
}

