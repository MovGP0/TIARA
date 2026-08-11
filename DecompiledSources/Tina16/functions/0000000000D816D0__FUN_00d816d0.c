/* Ghidra address: 00d816d0 */
/* Ghidra symbol: FUN_00d816d0 */


void FUN_00d816d0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_4c;
  undefined8 uStack_44;
  undefined8 uStack_3c;
  undefined8 uStack_34;
  undefined4 uStack_2c;
  
  local_4c = *param_4;
  uStack_44 = param_4[1];
  uStack_3c = param_4[2];
  uStack_34 = param_4[3];
  uStack_2c = *(undefined4 *)(param_4 + 4);
  local_70 = *param_5;
  uStack_68 = param_5[1];
  uStack_60 = param_5[2];
  uStack_58 = param_5[3];
  FUN_004179d0(&local_70,&DAT_00d623c8);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_70,0);
  FUN_00417740(&local_70,&DAT_00d623c8);
  return;
}

