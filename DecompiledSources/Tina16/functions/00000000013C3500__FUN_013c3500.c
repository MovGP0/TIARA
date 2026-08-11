/* Ghidra address: 013c3500 */
/* Ghidra symbol: FUN_013c3500 */


undefined4
FUN_013c3500(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_28;
  undefined4 local_1c;
  undefined8 local_10;
  
  local_70 = auStack_c8;
  local_78 = 0;
  local_58 = 0;
  local_60 = 0;
  local_10 = 0;
  local_68 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  local_28 = FUN_013c1c50(&DAT_013c18c8,1,param_1);
  FUN_00414b50(&local_10,L"work.py");
  FUN_00414480(local_res20);
  local_a8 = param_5;
  local_1c = FUN_013c2920(local_28,local_res18,param_2,local_res20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_78);
  FUN_00414560(&local_68,3);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res18);
  return local_1c;
}

