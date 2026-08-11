/* Ghidra address: 00d81380 */
/* Ghidra symbol: FUN_00d81380 */


void FUN_00d81380(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_58 = *param_5;
  uStack_50 = param_5[1];
  uStack_48 = param_5[2];
  uStack_40 = param_5[3];
  FUN_004179d0(&local_58,&DAT_00d623c8);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_58,0);
  FUN_00417740(&local_58,&DAT_00d623c8);
  return;
}

