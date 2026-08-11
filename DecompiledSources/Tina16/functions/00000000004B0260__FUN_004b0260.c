/* Ghidra address: 004b0260 */
/* Ghidra symbol: FUN_004b0260 */


undefined8 FUN_004b0260(longlong param_1,undefined8 param_2,int param_3)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_28 = (longlong *)FUN_004dccc0(*(undefined8 *)(param_1 + 0x18));
  if ((param_3 < 0) || ((int)local_28[2] <= param_3)) {
    FUN_0041ddd0(&local_38,PTR_PTR_02004940);
    (**(code **)(*local_28 + 0x18))(*local_28,local_38,(longlong)param_3);
  }
  FUN_0041b840(param_2,*(undefined8 *)(local_28[1] + (longlong)param_3 * 8));
  local_20 = *(longlong *)(param_1 + 0x18);
  FUN_00412130(*(undefined8 *)(local_20 + 0x10));
  FUN_00414480(&local_38);
  return param_2;
}

