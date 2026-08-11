/* Ghidra address: 00557d70 */
/* Ghidra symbol: FUN_00557d70 */


undefined8
FUN_00557d70(longlong *param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_3;
  uStack_40 = param_3[1];
  uStack_38 = param_3[2];
  uStack_30 = param_3[3];
  FUN_004179d0(&local_48,&DAT_00527bf8);
  (**(code **)(*param_1 + 0x68))(param_1,param_2,&local_48,param_4,param_5);
  FUN_00417740(&local_48,&DAT_00527bf8);
  return param_2;
}

