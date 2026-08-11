/* Ghidra address: 007851f0 */
/* Ghidra symbol: FUN_007851f0 */


void FUN_007851f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 *param_9,undefined4 param_10)

{
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_48 = *param_9;
  uStack_40 = param_9[1];
  uStack_38 = param_9[2];
  uStack_30 = param_9[3];
  (**(code **)(*param_2 + 0x118))(param_2,local_58,2);
  FUN_00779040(param_2,param_3,local_58,param_6,param_7,param_8,&local_48,param_10);
  return;
}

