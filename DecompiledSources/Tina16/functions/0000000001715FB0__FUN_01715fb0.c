/* Ghidra address: 01715fb0 */
/* Ghidra symbol: FUN_01715fb0 */


undefined4 FUN_01715fb0(undefined8 param_1)

{
  int iVar1;
  undefined8 local_res8 [4];
  undefined4 local_c;
  
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  iVar1 = FUN_00416db0(local_res8[0],&DAT_017160a4);
  if (iVar1 == 0) {
    local_c = 0x101;
  }
  else {
    iVar1 = FUN_00416db0(local_res8[0],L"[DP]");
    if (iVar1 == 0) {
      local_c = 0x107;
    }
    else {
      iVar1 = FUN_00416db0(local_res8[0],L"[DV]");
      if (iVar1 == 0) {
        local_c = 0x109;
      }
      else {
        iVar1 = FUN_00416db0(local_res8[0],L"[SSCHOTTKY]");
        if (iVar1 == 0) {
          local_c = 0x10a;
        }
        else {
          iVar1 = FUN_00416db0(local_res8[0],L"[DSW]");
          if (iVar1 == 0) {
            local_c = 0x10b;
          }
          else {
            local_c = 0xffffffff;
          }
        }
      }
    }
  }
  FUN_00414480(local_res8);
  return local_c;
}

