/* Ghidra address: 00d82170 */
/* Ghidra symbol: FUN_00d82170 */


void FUN_00d82170(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_4;
  uStack_40 = param_4[1];
  uStack_38 = param_4[2];
  uStack_30 = param_4[3];
  FUN_004179d0(&local_48,&DAT_00d623c8);
  (**(code **)(*param_1 + 0x78))(param_1,param_3,&local_48,0);
  FUN_00417740(&local_48,&DAT_00d623c8);
  return;
}

