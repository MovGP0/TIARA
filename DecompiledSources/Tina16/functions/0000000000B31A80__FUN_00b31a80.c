/* Ghidra address: 00b31a80 */
/* Ghidra symbol: FUN_00b31a80 */


void FUN_00b31a80(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  byte local_3a;
  byte local_39;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c [3];
  
  local_70[0] = 0;
  local_78 = 0;
  local_80 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  **(undefined1 **)(param_1 + 0x38) = 3;
  FUN_00415ad0(*(longlong *)(param_1 + 0x38) + 2,
               *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x10),*(int *)(param_1 + 0x34) + 1,8)
  ;
  local_2c[0] = 0;
  local_30 = 0;
  local_34 = 0;
  local_38 = 0;
  local_39 = 0;
  local_3a = 0;
  uVar1 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(uVar1,local_2c,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 2,&local_30,2);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 4,&local_34,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 5,&local_39,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 6,&local_38,1);
  lVar2 = FUN_00414df0(*(longlong *)(param_1 + 0x38) + 2);
  FUN_00409a70(lVar2 + 7,&local_3a,1);
  bVar3 = (local_39 & 0x80) != 0;
  bVar4 = (local_39 & 0x40) != 0;
  bVar5 = (local_3a & 0x80) != 0;
  bVar6 = (local_3a & 0x40) != 0;
  if (*(char *)(param_1 + 0x33) != '\0') {
    if (bVar3) {
      local_2c[0] = local_2c[0] + *(ushort *)(*(longlong *)(param_1 + 0x60) + 0x18) & 0xffff;
    }
    if (bVar5) {
      local_30 = local_30 + *(ushort *)(*(longlong *)(param_1 + 0x60) + 0x18) & 0xffff;
    }
    if (bVar4) {
      local_34 = local_34 + *(byte *)(*(longlong *)(param_1 + 0x60) + 0x1a) & 0xff;
    }
    if (bVar6) {
      local_38 = local_38 + *(byte *)(*(longlong *)(param_1 + 0x60) + 0x1a) & 0xff;
    }
  }
  if (bVar3) {
    FUN_004144d0(&local_48);
  }
  else {
    FUN_00414c70(&local_48,&DAT_00b31f7c);
  }
  if (bVar4) {
    FUN_004144d0(&local_58);
  }
  else {
    FUN_00414c70(&local_58,&DAT_00b31f7c);
  }
  if (bVar5) {
    FUN_004144d0(&local_50);
  }
  else {
    FUN_00414c70(&local_50,&DAT_00b31f7c);
  }
  if (bVar6) {
    FUN_004144d0(&local_60);
  }
  else {
    FUN_00414c70(&local_60,&DAT_00b31f7c);
  }
  FUN_00b20e40(local_70,local_34);
  FUN_0043f750(&local_78,local_2c[0] + 1);
  FUN_00415dd0(&local_80,local_78,0);
  FUN_00b20e40(&local_88,local_38);
  FUN_0043f750(&local_90,local_30 + 1);
  FUN_00415dd0(&local_98,local_90,0);
  FUN_00415980(*(longlong *)(param_1 + 0x38) + 10,9,local_58,local_70[0],local_48,local_80,
               &LAB_00b31f8c,local_60,local_88,local_50,local_98);
  FUN_004144d0(&local_98);
  FUN_00414480(&local_90);
  FUN_00414590(&local_88,2);
  FUN_00414480(&local_78);
  FUN_004144d0(local_70);
  FUN_00414590(&local_60,4);
  return;
}

