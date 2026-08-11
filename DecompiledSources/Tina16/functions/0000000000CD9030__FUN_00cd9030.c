/* Ghidra address: 00cd9030 */
/* Ghidra symbol: FUN_00cd9030 */


void FUN_00cd9030(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 local_res10;
  longlong *local_res18;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  longlong local_10;
  
  local_20 = auStack_68;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_00414610(param_2);
  local_48 = *(undefined4 *)(param_1 + 0x84);
  FUN_0089ead0(&local_10,local_res10,&DAT_00cd9190,&DAT_00cd91a4);
  if (local_10 != 0) {
    FUN_004b3260(local_res18);
    do {
      local_48 = CONCAT31(local_48._1_3_,1);
      FUN_00874ee0(&local_30,&local_10,&LAB_00cd91b8,1);
      FUN_0043eb80(&local_28,local_30);
      (**(code **)(*local_res18 + 0x78))(local_res18,local_28);
    } while (local_10 != 0);
    FUN_004b3390(local_res18);
  }
  FUN_00414560(&local_30,2);
  FUN_00414480(&local_10);
  FUN_00414480(&local_res10);
  return;
}

