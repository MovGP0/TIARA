/* Ghidra address: 01769700 */
/* Ghidra symbol: FUN_01769700 */


void FUN_01769700(longlong param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined2 local_2a;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_20[0] = 0;
  local_28 = 0;
  iVar3 = FUN_01d31a40(*param_2);
  if (iVar3 != 0) goto code_r0x01769ac8;
  FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x38));
  lVar2 = *(longlong *)(param_1 + 0x68);
  if ((lVar2 == 0) || (*(longlong *)(lVar2 + 0x20) == 0)) {
    FUN_00414480(local_20);
  }
  else {
    FUN_00416ba0(local_20,*(undefined8 *)(lVar2 + 0x20),&DAT_01769b80);
  }
  FUN_00416ba0(local_40,local_20[0],*(undefined8 *)(param_1 + 0x40));
  FUN_01d313e0(*param_2,local_40[0]);
  FUN_004168e0(&local_50,*(undefined8 *)(param_1 + 0x48));
  FUN_00b0cea0(&local_48,local_50,0xfde9);
  FUN_00416880(&local_28,local_48);
  FUN_00b92430(&local_58,local_28);
  FUN_00414b50(&local_28,local_58);
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_00415dd0(&local_60,local_28,0);
    FUN_01d315a0(*param_2,local_60);
  }
  else {
    FUN_01d313e0(*param_2,local_28);
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x50));
  }
  else {
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x50));
  }
  bVar1 = *(byte *)(*param_2 + 0x78);
  if (bVar1 < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x3dU) != 0;
  }
  else {
    bVar4 = false;
  }
  if (bVar4) {
    FUN_00415dd0(&local_68,*(undefined8 *)(param_1 + 0x58),0);
    FUN_01d315a0(*param_2,local_68);
  }
  else {
    FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x58));
  }
  FUN_01d311c0(*param_2,param_1 + 99,1);
  FUN_01d311c0(*param_2,param_1 + 0x70,1);
  if (*(longlong *)(param_1 + 0x68) == 0) {
    local_2a = 0;
    FUN_01d311c0(*param_2,&local_2a,2);
  }
  else {
    if ((*(char *)(param_1 + 0x62) != '\0') &&
       (*(char *)(*(longlong *)(param_1 + 0x68) + 0xd) == '\0')) {
      bVar1 = *(byte *)(*param_2 + 0x78);
      if (bVar1 < 8) {
        bVar4 = ((int)CONCAT71((int7)((ulonglong)*param_2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
      }
      else {
        bVar4 = false;
      }
      if (bVar4) {
        local_2a = 1;
        FUN_01d311c0(*param_2,&local_2a,2);
        goto LAB_01769a3e;
      }
    }
    local_2a = (**(code **)(**(longlong **)(param_1 + 0x68) + 0x20))
                         (*(longlong **)(param_1 + 0x68),*param_2);
    FUN_01d311c0(*param_2,&local_2a,2);
    (**(code **)(**(longlong **)(param_1 + 0x68) + 0x38))(*(longlong **)(param_1 + 0x68),*param_2);
  }
LAB_01769a3e:
  FUN_01d313e0(*param_2,*(undefined8 *)(param_1 + 0x30));
  FUN_01d311c0(*param_2,param_1 + 0x90,8);
  FUN_01d311c0(*param_2,param_1 + 0x88,8);
  FUN_01d311c0(*param_2,param_1 + 0x61,1);
  if (*(char *)(*param_2 + 0x78) == '\0') {
    FUN_01d31630(*param_2,*(undefined8 *)(param_1 + 0x78));
  }
code_r0x01769ac8:
  FUN_00414590(&local_68,2);
  FUN_00414480(&local_58);
  FUN_00414520(&local_50);
  FUN_004144d0(&local_48);
  FUN_00414480(local_40);
  FUN_00414560(&local_28,2);
  return;
}

