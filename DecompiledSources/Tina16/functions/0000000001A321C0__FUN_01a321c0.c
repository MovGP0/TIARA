/* Ghidra address: 01a321c0 */
/* Ghidra symbol: FUN_01a321c0 */


void FUN_01a321c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 *local_50;
  int local_3c;
  undefined8 local_38;
  undefined8 *local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_50 = auStack_78;
  local_58 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_30 = param_1;
  FUN_00414480(local_20);
  local_38 = *local_30;
  FUN_00448450(local_20,local_38,PTR_DAT_02004830);
  FUN_00414b50(&local_28,local_20[0]);
  FUN_00414480(local_20);
  FUN_004095f0(local_30[1]);
  local_3c = 0;
  if (local_28 != 0) {
    local_3c = *(int *)(local_28 + -4);
  }
  uVar1 = FUN_00409570((longlong)(local_3c * 2 + 1));
  local_30[1] = uVar1;
  FUN_00415dd0(&local_58,local_28,0);
  FUN_004425e0(uVar1,local_58);
  FUN_004144d0(&local_58);
  FUN_00414560(&local_28,2);
  return;
}

