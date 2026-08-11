/* Ghidra address: 01831130 */
/* Ghidra symbol: FUN_01831130 */


undefined8 FUN_01831130(longlong param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),param_2);
  FUN_00461840(&local_30,param_2);
  (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_48);
  FUN_0046f2c0(&local_30,&local_48);
  FUN_00461840(param_2,&local_30);
  FUN_00417840(&local_48,&DAT_004013d8,2);
  return param_2;
}

