/* Ghidra address: 01bbafb0 */
/* Ghidra symbol: FUN_01bbafb0 */


longlong FUN_01bbafb0(longlong param_1,char param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined1 auStack_e8 [40];
  undefined1 *local_c0;
  undefined8 local_b8 [19];
  
  local_c0 = auStack_e8;
  puVar3 = local_b8;
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_res8 = param_1;
  puVar1 = auStack_e8;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_c0;
  }
  local_c0 = puVar1;
  *(undefined4 *)(local_res8 + 0x10) = param_3;
  puVar3 = local_b8;
  puVar4 = (undefined8 *)(local_res8 + 0x20);
  for (lVar2 = 0x12; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

