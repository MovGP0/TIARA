/* Ghidra address: 010d64a0 */
/* Ghidra symbol: FUN_010d64a0 */


undefined1 FUN_010d64a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50 [4];
  int local_30;
  undefined4 local_28 [5];
  undefined1 local_11;
  longlong local_10;
  
  local_80 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_50[0] = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  local_28[0] = 0;
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x40));
  FUN_013bcca0(*(undefined8 *)(param_1 + 0x40),param_4);
  local_a8 = 0;
  FUN_013bc030(*(undefined8 *)(param_1 + 0x40),local_50,*(undefined8 *)(param_1 + 0x30),2);
  local_30 = FUN_010d6380(param_1,2,local_50[0],local_28);
  local_11 = local_30 == 2;
  if (*(char *)(*(longlong *)(param_1 + 0x40) + 0x124) != '\0') {
    FUN_013bc9e0(*(longlong *)(param_1 + 0x40),&local_88);
    FUN_00414ad0(param_2,local_88);
  }
  FUN_00416880(&local_68,*(undefined8 *)(param_1 + 0x38));
  local_a8 = CONCAT71(local_a8._1_7_,3);
  FUN_00450070(&local_90,local_68,*(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0xe8),L"{$work}");
  FUN_00414b50(&local_68,local_90);
  FUN_00414ad0(param_3,local_68);
  if (local_10 != 0) {
    FUN_00410f20(local_10);
  }
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_68,4);
  return local_11;
}

