/* Ghidra address: 00ea7370 */
/* Ghidra symbol: FUN_00ea7370 */


longlong FUN_00ea7370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                     undefined4 param_5,undefined1 param_6)

{
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40 = 0;
  uStack_38 = 0;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  FUN_00ea6ca0(&local_30,param_3,param_4,param_5,param_6);
  FUN_00417c40(param_1,&local_30,&DAT_00ea56e0);
  FUN_00ea6db0(&local_40,param_2,param_3,param_4,param_5,param_6);
  FUN_00417c40(param_1 + 0x18,&local_40,&DAT_00ea5780);
  FUN_0041b840(param_1 + 0x28,param_2);
  FUN_00417740(&local_40,&DAT_00ea5780);
  FUN_00417740(&local_30,&DAT_00ea56e0);
  return param_1;
}

