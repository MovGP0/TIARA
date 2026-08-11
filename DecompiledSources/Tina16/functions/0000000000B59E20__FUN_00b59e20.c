/* Ghidra address: 00b59e20 */
/* Ghidra symbol: FUN_00b59e20 */


longlong FUN_00b59e20(longlong param_1,char param_2,int param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_68;
  local_38 = 0;
  local_48 = 0;
  local_40 = 0;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  uVar2 = FUN_00b1f640(&DAT_00b1bf58,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00b23bb0(&DAT_00b23028,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_00b24d40(&DAT_00b24340,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  uVar2 = FUN_00b28a30(&DAT_00b26928,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  FUN_004144d0(local_res8 + 0x48);
  *(undefined2 *)(local_res8 + 0x50) = 0;
  *(undefined8 *)(local_res8 + 0x38) = *(undefined8 *)(local_res8 + 0x10);
  *(undefined8 *)(local_res8 + 0x28) = *(undefined8 *)(local_res8 + 0x18);
  *(undefined8 *)(local_res8 + 0x30) = *(undefined8 *)(local_res8 + 0x20);
  *(undefined1 *)(local_res8 + 0x40) = 0;
  uVar2 = FUN_00b59770(&DAT_00b4c5b8,1,local_res8);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  local_1c = 1;
  if (0 < param_3) {
    do {
      FUN_0043f750(&local_40,local_1c);
      FUN_00416ba0(&local_38,L"Sheet",local_40);
      FUN_004168e0(&local_48,local_38);
      FUN_00b59ae0(*(undefined8 *)(local_res8 + 8),local_48);
      local_1c = local_1c + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_00414520(&local_48);
  FUN_00414560(&local_40,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

