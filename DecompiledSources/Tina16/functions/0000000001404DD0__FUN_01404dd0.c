/* Ghidra address: 01404dd0 */
/* Ghidra symbol: FUN_01404dd0 */


longlong FUN_01404dd0(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined4 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(undefined8 *)(local_res8 + 0x780) = param_4;
  *(undefined4 *)(local_res8 + 0x788) = param_5;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x7b8) = uVar2;
  FUN_007fc180(local_res8,0,param_3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

