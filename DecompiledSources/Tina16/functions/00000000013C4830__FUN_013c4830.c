/* Ghidra address: 013c4830 */
/* Ghidra symbol: FUN_013c4830 */


uint FUN_013c4830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint *param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined1 auStack_c8 [32];
  int *local_a8;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 *local_80;
  char local_61;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_28 [5];
  uint local_14;
  longlong local_10;
  
  local_80 = auStack_c8;
  local_90 = 0;
  local_88 = 0;
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_10 = 0;
  local_10 = FUN_004b6930(&PTR_FUN_00478280,1);
  *param_6 = 0;
  FUN_013b9dc0(*(undefined8 *)(param_1 + 0x328));
  FUN_013bcca0(*(undefined8 *)(param_1 + 0x328),param_2);
  local_a8 = local_28;
  uVar1 = FUN_013c3500(*(undefined8 *)(param_1 + 0x328),2,*(undefined8 *)(param_1 + 0x2f0),&local_60
                      );
  *param_5 = uVar1;
  local_14 = *param_5;
  if (local_28[0] == 0) {
    local_61 = FUN_013bbba0(*(undefined8 *)(param_1 + 0x328),0,5);
    local_14 = (uint)(local_61 != '\0');
    if (*(char *)(*(longlong *)(param_1 + 0x328) + 0x124) != '\0') {
      FUN_013bc9e0(*(longlong *)(param_1 + 0x328),&local_88);
      FUN_00414ad0(param_3,local_88);
    }
  }
  local_a8 = (int *)CONCAT71(local_a8._1_7_,3);
  FUN_00450070(&local_90,local_60,*(undefined8 *)(*(longlong *)(param_1 + 0x328) + 0xe8),L"{$work}")
  ;
  FUN_00414b50(&local_60,local_90);
  FUN_00414ad0(param_4,local_60);
  if (local_10 != 0) {
    FUN_00410f20(local_10);
  }
  FUN_00414560(&local_90,2);
  FUN_00414560(&local_60,4);
  return local_14;
}

