/* Ghidra address: 010d1ee0 */
/* Ghidra symbol: FUN_010d1ee0 */


void FUN_010d1ee0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 longlong param_5,undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 local_328 [256];
  undefined1 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined1 local_218;
  undefined4 local_210;
  undefined1 local_1b8;
  undefined4 local_1b0;
  undefined1 local_98;
  int local_90;
  
  local_224 = param_6;
  local_228 = 0;
  uVar1 = FUN_01695f20(&DAT_01694800,1,0);
  FUN_01695b50(uVar1,param_2,local_328,0xff);
  local_218 = 3;
  local_1b8 = 3;
  local_98 = 3;
  local_90 = *(int *)(param_5 + 0x10) + -1;
  local_220 = param_2;
  local_210 = param_3;
  local_1b0 = param_4;
  uVar2 = FUN_010d1770(0,&PTR_FUN_010d1410,local_328);
  (**(code **)(*param_1 + 0x20))(param_1,uVar2);
  FUN_00410f20(uVar1);
  return;
}

