/* Ghidra address: 00a9b6e0 */
/* Ghidra symbol: FUN_00a9b6e0 */


longlong FUN_00a9b6e0(longlong param_1,char param_2,longlong param_3,longlong param_4)

{
  undefined1 *puVar1;
  int iVar2;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_40;
  undefined8 local_30;
  longlong *local_28;
  int local_1c;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  FUN_00610ca0(local_res8,0);
  *(longlong *)(local_res8 + 0x28) = param_3;
  if (param_3 != 0) {
    *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(param_3 + 0x18);
  }
  iVar2 = *(int *)(param_4 + 0x10);
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      local_28 = (longlong *)FUN_00ac3910(param_4,local_1c);
      local_40 = *local_28;
      local_30 = (**(code **)(local_40 + 0x38))(local_40,1,local_res8,local_28);
      FUN_00a9b890(local_res8,local_30,0);
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

