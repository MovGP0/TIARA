/* Ghidra address: 01b45ba0 */
/* Ghidra symbol: FUN_01b45ba0 */


longlong FUN_01b45ba0(longlong param_1,char param_2,undefined4 param_3,undefined4 param_4,
                     undefined8 param_5)

{
  undefined4 uVar1;
  ushort *puVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  bool local_25;
  int local_24;
  undefined1 local_1e;
  bool local_1d;
  ushort local_1c;
  ushort local_1a;
  
  local_30 = auStack_68;
  FUN_00414610(param_5);
  local_res8 = param_1;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
  }
  local_48 = param_5;
  FUN_01b451f0(local_res8,0,param_3,param_4);
  uVar1 = FUN_01d39f20(-*(short *)(local_res8 + 0x18));
  *(undefined4 *)(local_res8 + 0x20) = uVar1;
  *(undefined4 *)(local_res8 + 0x24) = 0;
  local_1c = 0;
  do {
    if (*(int *)(*(longlong *)PTR_DAT_020036c8 + 0x10) <=
        (int)(*(int *)(local_res8 + 0x20) + (uint)local_1c)) break;
    puVar2 = (ushort *)
             FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(short *)(local_res8 + 0x20) + local_1c);
    local_1a = *puVar2;
    if ((int)(uint)local_1a < -*(int *)(local_res8 + 0x18)) {
      local_25 = false;
    }
    else {
      local_1e = *(int *)(local_res8 + 0x20) == 0xbe;
      if ((bool)local_1e) {
        local_24 = 3;
      }
      else {
        local_24 = 9;
      }
      local_25 = (int)(uint)local_1a <= -*(int *)(local_res8 + 0x18) + local_24;
    }
    local_1d = local_25;
    if (local_25 != false) {
      *(int *)(local_res8 + 0x24) = *(int *)(local_res8 + 0x24) + 1;
    }
    local_1c = local_1c + 1;
  } while (local_1c != 10);
  FUN_00414480(&param_5);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

