/* Ghidra address: 018693a0 */
/* Ghidra symbol: FUN_018693a0 */


undefined8 FUN_018693a0(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4)

{
  undefined1 auStack_98 [32];
  uint local_78;
  undefined4 local_70;
  undefined1 local_60 [16];
  undefined1 *local_50;
  char local_3c;
  char local_3b;
  char local_3a;
  int local_39;
  undefined4 local_35;
  char local_31;
  undefined8 local_30;
  undefined8 *local_28;
  longlong *local_20;
  
  local_50 = auStack_98;
  (**(code **)(param_1 + 0x90))(param_1,&local_3b,param_2);
  if (((local_31 == '\a') || (local_3a == '\0')) || (local_3b != '\0')) {
    local_3c = '\0';
  }
  else {
    local_3c = '\x01';
  }
  if (local_3b != '\0') {
    local_31 = '\a';
  }
  local_78 = CONCAT31(local_78._1_3_,local_3a);
  local_70 = local_35;
  local_30 = (**(code **)(param_1 + 0x28))(param_1,param_3,param_4,local_31);
  local_28 = (undefined8 *)(**(code **)(param_1 + 0x38))(param_1,local_30);
  if (local_3c != '\0') {
    (**(code **)(param_1 + 0xe8))(param_1,local_30,local_39);
  }
  local_20 = (longlong *)(**(code **)*local_28)(local_28);
  FUN_005fdf10(local_20);
  if ((local_3c != '\0') && (local_39 != 0x1fffffff)) {
    FUN_005fdab0(local_20[0x10],local_39);
    local_78 = param_4;
    FUN_004238d0(local_60,0,0,param_3);
    (**(code **)(*local_20 + 0xa8))(local_20,local_60);
  }
  local_78 = param_4;
  FUN_004238d0(local_60,0,0,param_3);
  local_78 = local_78 & 0xffffff00;
  (**(code **)(param_1 + 0x50))(param_1,local_20,param_2,local_60);
  FUN_005fe090(local_20);
  FUN_00410f20(local_28);
  return local_30;
}

