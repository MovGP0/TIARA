/* Ghidra address: 014e8250 */
/* Ghidra symbol: FUN_014e8250 */


bool FUN_014e8250(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res10 [3];
  bool local_19;
  undefined8 local_10;
  
  local_10 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_0043e1a0(&local_10,local_res10[0]);
  if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 0)) {
    iVar1 = FUN_004170c0(L"x_dsp48",local_10,1);
    if ((((iVar1 < 1) && (iVar1 = FUN_004170c0(L"x_sim_confige2",local_10,1), iVar1 < 1)) &&
        (iVar1 = FUN_004170c0(L"x_xadc",local_10,1), iVar1 < 1)) &&
       (((iVar1 = FUN_004170c0(L"x_ps7",local_10,1), iVar1 < 1 &&
         (iVar1 = FUN_004170c0(L"x_crc32",local_10,1), iVar1 < 1)) &&
        ((iVar1 = FUN_004170c0(L"x_crc64",local_10,1), iVar1 < 1 &&
         (iVar1 = FUN_004170c0(L"x_sysmon",local_10,1), iVar1 < 1)))))) {
      local_19 = false;
    }
    else {
      local_19 = true;
    }
  }
  else if ((*(int *)(param_1 + 0x9c) == 0) && (*(int *)(param_1 + 0x98) == 1)) {
    iVar1 = FUN_004170c0(L"dsp48",local_10,1);
    local_19 = 0 < iVar1;
  }
  else if ((*(int *)(param_1 + 0x9c) == 1) && (*(int *)(param_1 + 0x98) == 1)) {
    iVar1 = FUN_004170c0(L"bufgmux_ctrl",local_10,1);
    if ((iVar1 < 1) && (iVar1 = FUN_004170c0(L"bufgmux_virtex4",local_10,1), iVar1 < 1)) {
      local_19 = false;
    }
    else {
      local_19 = true;
    }
  }
  else {
    local_19 = false;
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res10);
  return local_19;
}

