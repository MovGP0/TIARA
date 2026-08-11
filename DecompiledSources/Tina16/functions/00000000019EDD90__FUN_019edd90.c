/* Ghidra address: 019edd90 */
/* Ghidra symbol: FUN_019edd90 */


undefined8
FUN_019edd90(longlong param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
            undefined8 param_5)

{
  undefined1 auStack_188 [32];
  undefined1 *local_168;
  undefined1 *local_160;
  undefined8 local_150 [33];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21 [9];
  undefined8 local_18;
  undefined8 *local_10;
  
  local_30 = auStack_188;
  local_48 = 0;
  local_150[0] = 0;
  local_40 = 0;
  local_38 = 0;
  local_168 = &local_22;
  local_160 = &local_23;
  local_10 = (undefined8 *)FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),param_2,param_3,local_21);
  FUN_004167a0(&local_38,local_10[2]);
  FUN_00b8f030(local_38);
  local_18 = *local_10;
  FUN_016b9450(&local_40,*local_10);
  FUN_00416880(param_5,local_40);
  *param_4 = *(undefined1 *)(local_10 + 1);
  FUN_004144d0(local_150);
  FUN_00414590(&local_48,2);
  FUN_00414480(&local_38);
  return local_18;
}

