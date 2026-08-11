/* Ghidra address: 00780b50 */
/* Ghidra symbol: FUN_00780b50 */


undefined8
FUN_00780b50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 *param_5)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined1 *local_60;
  undefined1 local_58 [8];
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 local_20;
  
  local_60 = auStack_98;
  local_40 = *param_5;
  uStack_38 = param_5[1];
  uStack_30 = param_5[2];
  local_28 = param_5[3];
  FUN_004179d0(&local_40,&DAT_0075cb10);
  local_48 = 0;
  if (local_28 != 0) {
    local_50 = local_28;
    local_78 = param_4;
    local_20 = FUN_004baae0(&PTR_FUN_0047d7f8,1,param_2,param_3);
    local_48 = FUN_00780c70(param_1,local_20,local_58);
    FUN_00410f20(local_20);
  }
  FUN_00417740(&local_40,&DAT_0075cb10);
  return local_48;
}

