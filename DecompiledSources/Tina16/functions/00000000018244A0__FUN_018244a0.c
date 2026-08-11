/* Ghidra address: 018244a0 */
/* Ghidra symbol: FUN_018244a0 */


undefined8 FUN_018244a0(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 local_28 [8];
  longlong local_20;
  
  local_50 = auStack_78;
  local_20 = 0;
  local_40 = *param_3;
  uStack_38 = param_3[1];
  uStack_30 = param_3[2];
  FUN_0046bd60(&local_40);
  FUN_01822f30(&local_40,&local_20,local_28);
  local_48 = local_20;
  if (local_20 != 0) {
    local_48 = *(longlong *)(local_20 + -8);
  }
  FUN_00442f70(param_1,param_2,local_20,local_48 + -1);
  FUN_01823580(&local_20,local_28);
  FUN_00460ba0(&local_40);
  FUN_00419430(&local_20,&DAT_01822708);
  return param_1;
}

