/* Ghidra address: 01645ab0 */
/* Ghidra symbol: FUN_01645ab0 */


void FUN_01645ab0(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_b8 [48];
  undefined8 local_88;
  undefined1 *local_80;
  double local_70;
  longlong local_68;
  int local_58;
  int local_54;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_80 = auStack_b8;
  local_88 = 0;
  local_20[0] = 0;
  local_30[0] = 0;
  local_40[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x78);
  *(undefined8 *)(lVar1 + 0x38) = param_2;
  *(undefined1 *)(lVar1 + 0x139b8) = param_3;
  local_58 = *(int *)(*(longlong *)(lVar1 + 0x50) + 0x10);
  FUN_01649960(param_1);
  local_68 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x20);
  cVar2 = FUN_01b07dd0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x38));
  if ((cVar2 != '\0') &&
     (local_70 = (double)_get_simulation_time(*(undefined8 *)(local_68 + 0x10b0)),
     local_70 < *(double *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x38) + 0xf48))) {
    _set_digital_time(*(undefined8 *)(local_68 + 0x10b0),
                      *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x38) + 0xf48));
  }
  local_54 = 0;
  iVar3 = local_58;
  if (-1 < local_58 + -1) {
    do {
      local_48 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x50),local_54);
      FUN_0163c8d0(local_48,*(undefined8 *)(param_1 + 0x78));
      local_54 = local_54 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x78) + 0x58) + 0x10);
  local_54 = 0;
  local_58 = iVar3;
  if (-1 < iVar3 + -1) {
    do {
      local_48 = FUN_004aeac0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x58),local_54);
      FUN_01649cb0(local_48,*(undefined8 *)(param_1 + 0x78));
      local_54 = local_54 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_88);
  FUN_00414480(local_40);
  FUN_00414480(local_30);
  FUN_00414480(local_20);
  return;
}

