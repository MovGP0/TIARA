/* Ghidra address: 0197b140 */
/* Ghidra symbol: FUN_0197b140 */


void FUN_0197b140(longlong param_1)

{
  int iVar1;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  if ((*(char *)(param_1 + 0xc0) != '\0') && (*(longlong *)(param_1 + 0x80) == 0)) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x98) + 0x1c0) == 0) {
      FUN_0180fc10(&local_30);
      FUN_004414c0(&local_28,local_30,*(undefined8 *)(param_1 + 200));
      FUN_0197b810(param_1,local_28);
    }
    else {
      FUN_0180fb80(&local_18);
      FUN_00441920(&local_20,*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x1c0));
      FUN_00416ad0(&local_18,local_20);
      FUN_004414c0(&local_10,local_18,*(undefined8 *)(param_1 + 200));
      FUN_0197b810(param_1,local_10);
    }
    FUN_00441640(&local_38,*(undefined8 *)(param_1 + 0x80));
    FUN_00414ad0(*(longlong *)(param_1 + 0x128) + 0x90,local_38);
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FUN_00441640(&local_40,*(undefined8 *)(param_1 + 0x80));
    if ((local_40 == 0) && (*(longlong *)(param_1 + 0xb8) != 0)) {
      iVar1 = FUN_00414cb0(*(undefined8 *)(param_1 + 0xb8));
      if (*(short *)(*(longlong *)(param_1 + 0xb8) + -2 + (longlong)iVar1 * 2) == 0x5c) {
        FUN_00416ba0(&local_48,*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0x80));
        FUN_0197b810(param_1,local_48);
      }
      else {
        FUN_00416cd0(&local_50,3,*(undefined8 *)(param_1 + 0xb8),&LAB_0197b398,
                     *(undefined8 *)(param_1 + 0x80));
        FUN_0197b810(param_1,local_50);
      }
    }
  }
  FUN_00414560(&local_50,9);
  return;
}

