/* Ghidra address: 00c8ade0 */
/* Ghidra symbol: FUN_00c8ade0 */


longlong FUN_00c8ade0(longlong param_1,char param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_68 [32];
  int local_48;
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00c8bac0(local_res8,0);
  if (param_4 < 0) {
    FUN_004194b0(local_res8 + 8,param_3,&DAT_0086e978);
    local_20 = param_3;
    if (param_3 != 0) {
      local_20 = *(longlong *)(param_3 + -8);
    }
    *(undefined4 *)(local_res8 + 0x30) = (undefined4)local_20;
  }
  else {
    FUN_00419260(local_res8 + 8,&DAT_0086e978,1,(longlong)param_4);
    if (0 < param_4) {
      local_48 = param_4;
      FUN_00874e50(param_3,0,local_res8 + 8,0);
      *(int *)(local_res8 + 0x30) = param_4;
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

