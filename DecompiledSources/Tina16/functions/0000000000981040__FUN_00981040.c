/* Ghidra address: 00981040 */
/* Ghidra symbol: FUN_00981040 */


void FUN_00981040(longlong param_1)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_b8;
  if (*(longlong *)(param_1 + 0x80) != 0) {
    local_98 = 0;
    local_90 = 0;
    local_88 = 1;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 1;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_20 = FUN_0096f920(&PTR_FUN_0091b1a0,1,param_1,0);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
  }
  return;
}

