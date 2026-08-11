/* Ghidra address: 005da540 */
/* Ghidra symbol: FUN_005da540 */


undefined8 FUN_005da540(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_30 = auStack_68;
  local_28 = 0;
  local_48 = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28,param_2,param_3);
  local_20 = param_4;
  if (local_28 != 0) {
    local_20 = FUN_0044b380(local_28,PTR_DAT_02004830);
  }
  FUN_00414480(&local_28);
  return local_20;
}

