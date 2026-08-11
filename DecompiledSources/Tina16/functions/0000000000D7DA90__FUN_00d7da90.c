/* Ghidra address: 00d7da90 */
/* Ghidra symbol: FUN_00d7da90 */


undefined8 FUN_00d7da90(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_40 = auStack_b8;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_18 = 0;
  local_10 = 0;
  local_20 = 0;
  FUN_005fccd0(param_2,&local_48);
  uVar2 = FUN_005fce00(param_2);
  FUN_0043f750(&local_50,uVar2);
  uVar1 = FUN_005fcf90(param_2);
  FUN_0043f750(&local_58,uVar1);
  local_98 = (undefined *)local_50;
  local_90 = &DAT_00d7de18;
  local_88 = local_58;
  local_80 = &DAT_00d7de18;
  FUN_00416cd0(&local_20,6,local_48,&DAT_00d7de18);
  local_24 = *(undefined4 *)(param_2 + 0x28);
  local_18 = 0;
  FUN_0043f750(&local_60,(undefined1)local_24);
  local_98 = &DAT_00d7de18;
  FUN_00416cd0(&local_18,3,local_20,local_60);
  local_28 = *(undefined4 *)(param_2 + 0x28);
  local_10 = 0;
  FUN_0043f750(&local_68,(char)((uint)local_28 >> 8));
  local_98 = &DAT_00d7de18;
  FUN_00416cd0(&local_10,3,local_18,local_68);
  local_2c = *(undefined4 *)(param_2 + 0x28);
  FUN_0043f750(&local_70,(char)((uint)local_2c >> 0x10));
  FUN_00416ba0(param_1,local_10,local_70);
  FUN_00414480(&local_10);
  FUN_00414480(&local_18);
  FUN_00414480(&local_20);
  local_2d = *(byte *)(*(longlong *)(param_2 + 0x18) + 0x31);
  if ((local_2d & 1) != 0) {
    FUN_00416ad0(param_1,L",bold");
  }
  local_2e = *(byte *)(*(longlong *)(param_2 + 0x18) + 0x31);
  if ((local_2e & 2) != 0) {
    FUN_00416ad0(param_1,L",italic");
  }
  local_2f = *(byte *)(*(longlong *)(param_2 + 0x18) + 0x31);
  if ((local_2f & 4) != 0) {
    FUN_00416ad0(param_1,L",underline");
  }
  local_30 = *(byte *)(*(longlong *)(param_2 + 0x18) + 0x31);
  if ((local_30 & 8) != 0) {
    FUN_00416ad0(param_1,L",strikeout");
  }
  FUN_00414560(&local_70,5);
  FUN_00414480(&local_48);
  return param_1;
}

