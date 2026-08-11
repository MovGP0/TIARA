/* Ghidra address: 00414210 */
/* Ghidra symbol: FUN_00414210 */


undefined4 FUN_00414210(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  code *local_30;
  undefined8 local_28;
  undefined4 local_1c;
  
  local_40 = auStack_68;
  local_1c = 0;
  FUN_00410a80();
  local_30 = (code *)*param_1;
  local_28 = param_1[1];
  FUN_004095f0(param_1);
  uVar1 = (*local_30)(local_28);
  return uVar1;
}

