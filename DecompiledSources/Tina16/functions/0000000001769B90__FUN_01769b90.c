/* Ghidra address: 01769b90 */
/* Ghidra symbol: FUN_01769b90 */


int FUN_01769b90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined7 uVar4;
  bool bVar5;
  int local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x38));
  lVar1 = *(longlong *)(param_1 + 0x68);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
    FUN_00414480(&local_10);
  }
  else {
    FUN_00416ba0(&local_10,*(undefined8 *)(lVar1 + 0x20),&DAT_01769f7c);
  }
  FUN_00416ba0(&local_20,local_10,*(undefined8 *)(param_1 + 0x40));
  iVar3 = FUN_01d31350(local_20);
  FUN_004168e0(&local_30,*(undefined8 *)(param_1 + 0x48));
  FUN_00b0cea0(&local_28,local_30,0xfde9);
  FUN_00416880(&local_18,local_28);
  FUN_00b92430(&local_38,local_18);
  FUN_00414b50(&local_18,local_38);
  uVar4 = (undefined7)((ulonglong)param_2 >> 8);
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_00415dd0(&local_40,local_18,0);
    local_5c = FUN_01d31230(local_40);
  }
  else {
    local_5c = FUN_01d31350(local_18);
  }
  local_5c = iVar2 + iVar3 + local_5c;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_004168e0(&local_48,*(undefined8 *)(param_1 + 0x50));
    iVar2 = FUN_01d31290(local_48);
  }
  else {
    iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x50));
  }
  local_5c = local_5c + iVar2;
  if (*(byte *)(param_2 + 0x78) < 8) {
    bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar5 = false;
  }
  if (bVar5) {
    FUN_00415dd0(&local_50,*(undefined8 *)(param_1 + 0x58),0);
    iVar2 = FUN_01d31230(local_50);
  }
  else {
    iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x58));
  }
  local_5c = local_5c + iVar2;
  local_5c = local_5c + 4;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    if ((*(char *)(param_1 + 0x62) != '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x68) + 0xd) == '\0')) {
      if (*(byte *)(param_2 + 0x78) < 8) {
        bVar5 = ((int)CONCAT71(uVar4,1) << (*(byte *)(param_2 + 0x78) & 0x1f) & 0x31U) != 0;
      }
      else {
        bVar5 = false;
      }
      if (bVar5) goto LAB_01769e64;
    }
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x28))
                      (*(longlong **)(param_1 + 0x68),param_2);
    local_5c = local_5c + iVar2;
  }
LAB_01769e64:
  iVar2 = FUN_01d31350(*(undefined8 *)(param_1 + 0x30));
  local_5c = local_5c + iVar2 + 0x11;
  if (*(char *)(param_2 + 0x78) == '\0') {
    FUN_004168e0(&local_58,*(undefined8 *)(param_1 + 0x78));
    iVar2 = FUN_01d31290(local_58);
    local_5c = local_5c + iVar2;
  }
  FUN_00414520(&local_58);
  FUN_004144d0(&local_50);
  FUN_00414520(&local_48);
  FUN_004144d0(&local_40);
  FUN_00414480(&local_38);
  FUN_00414520(&local_30);
  FUN_004144d0(&local_28);
  FUN_00414560(&local_20,3);
  return local_5c;
}

