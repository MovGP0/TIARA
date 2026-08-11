/* Ghidra address: 0053bf70 */
/* Ghidra symbol: FUN_0053bf70 */


undefined1 FUN_0053bf70(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  puVar1 = (undefined *)FUN_00536180(param_1);
  if (puVar1 == param_2) {
    FUN_00417c40(param_3,param_1,&DAT_00527bf8);
  }
  else if (param_2 == &DAT_004013f0) {
    FUN_00560490(param_1,&local_50,1);
    FUN_00468c40(&local_68,&local_50);
    FUN_00560900(&local_38,&local_68);
    FUN_00417c40(param_3,&local_38,&DAT_00527bf8);
  }
  else {
    FUN_00560980(param_1,&local_a0,1);
    FUN_00560940(&local_88,&local_a0);
    FUN_00417c40(param_3,&local_88,&DAT_00527bf8);
  }
  FUN_00460ba0(&local_a0);
  FUN_00417740(&local_88,&DAT_00527bf8);
  FUN_00460ba0(&local_68);
  FUN_00460ba0(&local_50);
  FUN_00417740(&local_38,&DAT_00527bf8);
  return 1;
}

