/* Ghidra address: 004d70a0 */
/* Ghidra symbol: FUN_004d70a0 */


undefined8 FUN_004d70a0(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 local_res8;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_88;
  local_48 = 0;
  local_50 = 0;
  local_res8 = param_1;
  puVar1 = auStack_88;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00441b80(&local_48,param_4);
  local_40 = local_48;
  local_38 = 0x11;
  uVar2 = thunk_FUN_03ce33a6();
  FUN_0044b630(&local_50,uVar2,0);
  local_30 = local_50;
  local_28 = 0x11;
  local_68 = 1;
  FUN_0044d8d0(local_res8,0,param_3,&local_40);
  FUN_00414560(&local_50,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

