/* Ghidra address: 01cc0c70 */
/* Ghidra symbol: FUN_01cc0c70 */


longlong FUN_01cc0c70(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30 [2];
  
  local_40 = auStack_68;
  local_30[0] = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  FUN_01cc04c0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x38) = *(undefined1 *)(param_3 + 0x38);
  *(undefined1 *)(local_res8 + 0x39) = *(undefined1 *)(param_3 + 0x39);
  *(undefined1 *)(local_res8 + 0x3a) = *(undefined1 *)(param_3 + 0x3a);
  *(undefined1 *)(local_res8 + 0x3b) = *(undefined1 *)(param_3 + 0x3b);
  FUN_01cc1600(param_3,local_30);
  FUN_01cc1590(local_res8,local_30[0]);
  puVar3 = (undefined8 *)(param_3 + 0x48);
  puVar4 = (undefined8 *)(local_res8 + 0x48);
  for (lVar2 = 0x11; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = (undefined8 *)(param_3 + 0xd0);
  puVar4 = (undefined8 *)(local_res8 + 0xd0);
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined4 *)(local_res8 + 0x150) = *(undefined4 *)(param_3 + 0x150);
  *(undefined4 *)(local_res8 + 0x154) = *(undefined4 *)(param_3 + 0x154);
  *(undefined4 *)(local_res8 + 0x158) = *(undefined4 *)(param_3 + 0x158);
  *(undefined4 *)(local_res8 + 0x15c) = *(undefined4 *)(param_3 + 0x15c);
  *(undefined8 *)(local_res8 + 0x160) = *(undefined8 *)(param_3 + 0x160);
  FUN_00414480(local_30);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

