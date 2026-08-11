/* Ghidra address: 018532d0 */
/* Ghidra symbol: FUN_018532d0 */


longlong FUN_018532d0(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                     undefined8 param_9)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_40;
  int local_38;
  undefined8 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_48 = param_5;
  local_40 = param_6;
  local_38 = param_8;
  local_30 = param_9;
  FUN_018530c0(local_res8,0,param_3,param_4);
  FUN_00416660(local_res8 + 0x30,param_8);
  uVar2 = FUN_00415f70(*(undefined8 *)(local_res8 + 0x30));
  FUN_00409a70(param_7,uVar2,(longlong)(param_8 * 2));
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

