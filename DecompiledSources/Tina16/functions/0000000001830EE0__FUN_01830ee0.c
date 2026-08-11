/* Ghidra address: 01830ee0 */
/* Ghidra symbol: FUN_01830ee0 */


undefined8 FUN_01830ee0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x10))(*(longlong **)(param_1 + 0x88),param_2);
  if (*(char *)(param_1 + 0xa1) == '\0') {
    FUN_00461840(&local_58,param_2);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_70);
    FUN_0046f240(&local_58,&local_70);
    FUN_00461840(param_2,&local_58);
  }
  else {
    lVar1 = FUN_004634b0(param_2);
    (**(code **)(**(longlong **)(param_1 + 0x90) + 0x10))(*(longlong **)(param_1 + 0x90),&local_40);
    lVar2 = FUN_004634b0(&local_40);
    FUN_00468700(param_2,lVar1 % lVar2);
  }
  FUN_00417840(&local_70,&DAT_004013d8,3);
  return param_2;
}

