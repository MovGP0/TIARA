/* Ghidra address: 01152540 */
/* Ghidra symbol: FUN_01152540 */


longlong FUN_01152540(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4,
                     undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong local_res8;
  undefined1 auStack_1e8 [40];
  undefined1 *local_1c0;
  undefined8 local_1b8 [51];
  
  local_1c0 = auStack_1e8;
  puVar2 = local_1b8;
  for (lVar1 = 0x32; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  puVar2 = local_1b8;
  puVar3 = (undefined8 *)(local_res8 + 0x740);
  for (lVar1 = 0x32; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_00414ad0(local_res8 + 0x8d8,param_5);
  FUN_007fc180(local_res8,0,param_3);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

