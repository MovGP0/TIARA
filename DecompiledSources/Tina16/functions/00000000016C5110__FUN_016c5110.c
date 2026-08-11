/* Ghidra address: 016c5110 */
/* Ghidra symbol: FUN_016c5110 */


void FUN_016c5110(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_98;
  local_38 = 0;
  local_20 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416880(&local_38,*(undefined8 *)(param_2 + 0x18));
  FUN_004b4b10(local_20,local_38);
  local_48 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_78 = *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x9e0);
  local_70 = *(undefined8 *)(param_1 + 0x98);
  local_68 = *(undefined8 *)(param_1 + 0x90);
  local_60 = local_20;
  local_58 = *(undefined8 *)(param_1 + 0x80);
  local_50 = 1;
  local_18 = local_48;
  local_10 = FUN_016a67c0(&DAT_016a2760,1,*(undefined8 *)(param_2 + 0x10),
                          *(undefined8 *)(param_1 + 0x88));
  uVar1 = FUN_016a9250(local_10);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  FUN_00410f20(local_10);
  FUN_00410f20(local_18);
  FUN_00410f20(local_20);
  FUN_00414480(&local_38);
  return;
}

