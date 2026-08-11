/* Ghidra address: 018306b0 */
/* Ghidra symbol: FUN_018306b0 */


short * FUN_018306b0(longlong param_1,short *param_2)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_20 = 0;
  local_28 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),param_2);
  if ((*param_2 == 0x100) || (*param_2 == 0x102)) {
    FUN_0046c3f0(&local_20,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_40);
    FUN_0046c3f0(&local_28,&local_40);
    FUN_00416ad0(&local_20,local_28);
    FUN_00468a10(param_2,local_20);
  }
  else {
    FUN_00461840(&local_58,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_70);
    FUN_0046f1c0(&local_58,&local_70);
    FUN_00461840(param_2,&local_58);
  }
  FUN_00417840(&local_70,&DAT_004013d8,3);
  FUN_00414560(&local_28,2);
  return param_2;
}

