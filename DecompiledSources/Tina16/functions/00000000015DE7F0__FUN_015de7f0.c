/* Ghidra address: 015de7f0 */
/* Ghidra symbol: FUN_015de7f0 */


undefined1
FUN_015de7f0(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4,
            undefined8 param_5)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_58;
  longlong local_50;
  int local_44;
  int local_40;
  int local_3c;
  longlong local_38;
  int local_2c;
  longlong local_28;
  undefined1 local_19;
  
  local_58 = 0;
  local_50 = 0;
  local_28 = 0;
  FUN_00441820(&local_50,param_2);
  local_38 = local_50;
  local_3c = 0;
  if (local_50 != 0) {
    local_3c = *(int *)(local_50 + -4);
  }
  local_2c = local_3c;
  if ((local_3c < 1) || (*(char *)(*(longlong *)(param_1 + 0xc0) + 8) == '\x03')) {
    FUN_00414b50(&local_28,param_2);
  }
  else {
    local_40 = 0;
    if (param_2 != 0) {
      local_40 = *(int *)(param_2 + -4);
    }
    FUN_00416dc0(&local_28,param_2,local_3c + 1,local_40 - local_3c);
  }
  FUN_015bf370(&local_58,local_28,&DAT_015dea68,&DAT_015dea78,1);
  FUN_00414b50(&local_28,local_58);
  uVar3 = FUN_00416740(local_28);
  iVar2 = FUN_015bf400(local_28);
  FUN_00409a70(uVar3,param_3 + 0x41,(longlong)iVar2);
  local_44 = 0;
  if (local_28 != 0) {
    local_44 = *(int *)(local_28 + -4);
  }
  *(undefined2 *)(param_3 + 0x41 + (longlong)local_44 * 2) = 0;
  FUN_00414ad0(param_3 + 0x24e,param_5);
  *(undefined1 *)(param_3 + 0x256) = 0;
  iVar2 = FUN_004170c0(&DAT_015dea8c,local_28,1);
  if (iVar2 < 1) {
    iVar2 = FUN_004170c0(&DAT_015dea9c,local_28,1);
    if (iVar2 < 1) {
      uVar1 = 0;
      goto LAB_015de9c7;
    }
  }
  uVar1 = 1;
LAB_015de9c7:
  *(undefined1 *)(param_3 + 0x249) = uVar1;
  *(undefined4 *)(param_3 + 0x24a) = param_4;
  *(undefined4 *)(param_3 + 0x3d) = 0;
  local_19 = FUN_015d4110(param_1,param_3);
  FUN_00414560(&local_58,2);
  FUN_00414480(&local_28);
  return local_19;
}

