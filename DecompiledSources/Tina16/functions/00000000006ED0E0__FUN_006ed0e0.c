/* Ghidra address: 006ed0e0 */
/* Ghidra symbol: FUN_006ed0e0 */


longlong FUN_006ed0e0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_98 [40];
  undefined1 *local_70;
  undefined4 *local_68;
  int local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_30;
  
  local_70 = auStack_98;
  local_res8 = param_1;
  puVar1 = auStack_98;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_70;
  }
  local_70 = puVar1;
  *(undefined4 *)(local_res8 + 0x3c) = *(undefined4 *)(*(longlong *)(param_3 + 0x10) + 0x10);
  FUN_004b1710(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x38) = 0x32;
  *(undefined1 *)(local_res8 + 0x18) = 0;
  *(undefined4 *)(local_res8 + 0x30) = 0xffffffff;
  local_50 = 3;
  local_4c = 0;
  local_48 = *(undefined4 *)(local_res8 + 0x38);
  local_30 = 0xffffffff;
  uVar3 = FUN_006edb60(param_3);
  cVar2 = FUN_0065be20(uVar3);
  if (cVar2 != '\0') {
    uVar3 = FUN_006edb60(param_3);
    local_58 = FUN_0065b870(uVar3);
    local_5c = FUN_004b1870(local_res8);
    local_68 = &local_50;
    thunk_FUN_041b2403(local_58,0x1061,(longlong)local_5c,local_68);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

