/* Ghidra address: 004d6670 */
/* Ghidra symbol: FUN_004d6670 */


longlong FUN_004d6670(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5,undefined4 param_6)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_004d6590(local_res8,0,param_3,param_4);
  FUN_005390e0(&local_28,param_5,param_6);
  FUN_004194b0(local_res8 + 0x48,local_28,&DAT_00492e48);
  FUN_00419430(&local_28,&DAT_00492e48);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

