/* Ghidra address: 0147d950 */
/* Ghidra symbol: FUN_0147d950 */


undefined1 FUN_0147d950(undefined8 param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res8 [4];
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  *param_3 = 0;
  local_11 = 0;
  cVar1 = FUN_0147d3c0(local_res8[0],L"nand");
  if (cVar1 == '\0') {
    cVar1 = FUN_0147d3c0(local_res8[0],&DAT_0147db2c);
    if (cVar1 == '\0') {
      FUN_0043e1a0(&local_10,local_res8[0]);
      iVar2 = FUN_004170c0(&PTR_s_B_0147db40,local_10,1);
      if (iVar2 == 1) {
        if (param_2 == 3) {
          *param_3 = 0x3eb;
        }
        if (param_2 == 4) {
          *param_3 = 0x3f4;
        }
        if (param_2 == 5) {
          *param_3 = 0x8f5;
        }
        local_11 = 1;
      }
      else {
        cVar1 = FUN_0147d3c0(local_res8[0],&LAB_0147db54);
        if (cVar1 != '\0') {
          *param_3 = 0x3e9;
          local_11 = 1;
        }
      }
    }
    else {
      if (param_2 == 3) {
        *param_3 = 0x3ea;
      }
      if (param_2 == 4) {
        *param_3 = 0x3f2;
      }
      if (param_2 == 5) {
        *param_3 = 0x8ed;
      }
      local_11 = 1;
    }
  }
  else {
    if (param_2 == 3) {
      *param_3 = 0x3ed;
    }
    if (param_2 == 4) {
      *param_3 = 0x3f3;
    }
    if (param_2 == 5) {
      *param_3 = 0x3f8;
    }
    local_11 = 1;
  }
  FUN_00414480(&local_10);
  FUN_00414480(local_res8);
  return local_11;
}

