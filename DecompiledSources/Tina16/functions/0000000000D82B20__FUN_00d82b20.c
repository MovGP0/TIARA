/* Ghidra address: 00d82b20 */
/* Ghidra symbol: FUN_00d82b20 */


void FUN_00d82b20(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_3c = *param_4;
  uStack_34 = param_4[1];
  uStack_2c = *(undefined4 *)(param_4 + 2);
  local_60 = *param_5;
  uStack_58 = param_5[1];
  uStack_50 = param_5[2];
  uStack_48 = param_5[3];
  FUN_004179d0(&local_60,&DAT_00d623c8);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_60,0);
  FUN_00417740(&local_60,&DAT_00d623c8);
  return;
}

