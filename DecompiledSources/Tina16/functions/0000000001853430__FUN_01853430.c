/* Ghidra address: 01853430 */
/* Ghidra symbol: FUN_01853430 */


longlong FUN_01853430(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined4 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                     undefined8 param_9)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  undefined1 *local_30;
  undefined8 local_20 [2];
  
  local_30 = auStack_78;
  local_20[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_58 = param_5;
  local_50 = param_6;
  local_48 = param_8;
  local_40 = param_9;
  FUN_018530c0(local_res8,0,param_3,param_4);
  FUN_00415d10(local_20,param_8,0);
  uVar2 = FUN_00414df0(local_20);
  FUN_00409a70(param_7,uVar2,(longlong)param_8);
  FUN_00415f40(local_res8 + 0x30,local_20[0]);
  FUN_004144d0(local_20);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

