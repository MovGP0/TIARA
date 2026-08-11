/* Ghidra address: 00aca980 */
/* Ghidra symbol: FUN_00aca980 */


longlong FUN_00aca980(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00acd400(local_res8,0,param_3,param_4);
  *(undefined8 *)(local_res8 + 0x158) = *(undefined8 *)(param_4 + 0x158);
  *(undefined4 *)(local_res8 + 0x160) = *(undefined4 *)(param_4 + 0x160);
  puVar3 = (undefined8 *)(param_4 + 0x164);
  puVar4 = (undefined8 *)(local_res8 + 0x164);
  for (lVar2 = 6; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined2 *)puVar4 = *(undefined2 *)puVar3;
  *(undefined1 *)((longlong)puVar4 + 2) = *(undefined1 *)((longlong)puVar3 + 2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

