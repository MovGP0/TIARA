/* Ghidra address: 01774410 */
/* Ghidra symbol: FUN_01774410 */


void FUN_01774410(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_res18 [2];
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_38;
  int local_24 [2];
  undefined4 local_1c [2];
  undefined4 local_14;
  longlong *local_10;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_10 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00441920(&local_48,local_res18[0]);
  (**(code **)(*local_10 + 0x78))(local_10,local_48);
  local_1c[0] = 4;
  FUN_004b89e0(param_2,PTR_DAT_02005848,4);
  FUN_004b89e0(param_2,local_1c,4);
  local_14 = 2;
  FUN_004b89e0(param_2,&local_14,4);
  FUN_01773e60(param_2,local_res18[0]);
  local_38 = FUN_0153d410(local_res18[0],local_24);
  FUN_004b89e0(param_2,local_24,4);
  FUN_004b89e0(param_2,local_38,(longlong)local_24[0]);
  FUN_004095f0(local_38);
  FUN_01b23250(param_2,local_10);
  FUN_004b6dc0(param_2,0);
  FUN_00410f20(local_10);
  FUN_00414480(&local_48);
  FUN_00414480(local_res18);
  return;
}

