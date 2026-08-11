/* Ghidra address: 00b95740 */
/* Ghidra symbol: FUN_00b95740 */


void FUN_00b95740(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  local_48 = *param_1;
  local_44 = param_1[1];
  local_40 = param_1[2];
  local_3c = param_1[3];
  local_38._0_4_ = (undefined4)uVar1;
  local_58 = (undefined4)local_38;
  local_38._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_54 = local_38._4_4_;
  local_30._0_4_ = (undefined4)uVar2;
  local_50 = (undefined4)local_30;
  local_30._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  local_4c = local_30._4_4_;
  local_38 = uVar1;
  local_30 = uVar2;
  thunk_FUN_041ebb10(&local_68,&local_48,&local_58);
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[2] = local_60;
  param_1[3] = local_5c;
  return;
}

