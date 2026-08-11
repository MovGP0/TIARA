/* Ghidra address: 0099bea0 */
/* Ghidra symbol: FUN_0099bea0 */


longlong FUN_0099bea0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00995110(local_res8,0,param_3,param_4);
  FUN_009476a0(&local_28,param_4);
  FUN_00414b90(local_res8 + 0x30,local_28);
  FUN_00947820(&local_30,param_4);
  FUN_00414b90(local_res8 + 0x38,local_30);
  FUN_004145c0(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

