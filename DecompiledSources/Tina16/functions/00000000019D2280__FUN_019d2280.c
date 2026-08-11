/* Ghidra address: 019d2280 */
/* Ghidra symbol: FUN_019d2280 */


undefined1 FUN_019d2280(longlong param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  undefined1 local_11;
  longlong local_10;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_10 = 0;
  FUN_00416ba0(&local_20,*(undefined8 *)PTR_DAT_02005010,&LAB_019d2374);
  local_10 = FUN_0123b660(&DAT_0123a310,1,local_20,*(undefined8 *)(param_1 + 0x38));
  FUN_0123b940(local_10);
  FUN_0123ba50(local_10,*(undefined8 *)(param_1 + 8));
  FUN_0123be30(local_10);
  local_11 = 1;
  if (local_10 != 0) {
    FUN_00410f20(local_10);
  }
  FUN_00414480(&local_20);
  return local_11;
}

