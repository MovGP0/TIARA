/* Ghidra address: 016b0730 */
/* Ghidra symbol: FUN_016b0730 */


undefined8 FUN_016b0730(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_38 = 0;
  local_30[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_00414ad0(param_2,L"<undef>");
  if (*(int *)(param_1 + 0x20) == 2) {
    FUN_016b05d0(param_1,&local_10,param_1 + 0x24);
    FUN_016b05d0(param_1,&local_20,param_1 + 0x2c);
    FUN_016b0420(param_1,local_30);
    FUN_00416cd0(param_2,6,local_20,&DAT_016b0958,&DAT_016b096c,local_30[0],&DAT_016b096c,local_10);
  }
  else if (*(int *)(param_1 + 0x20) == 3) {
    FUN_016b05d0(param_1,&local_10,param_1 + 0x24);
    FUN_016b05d0(param_1,&local_18,param_1 + 0x2c);
    FUN_016b05d0(param_1,&local_20,param_1 + 0x34);
    FUN_016b0420(param_1,&local_38);
    FUN_00416cd0(param_2,8,local_20,&DAT_016b0958,&DAT_016b096c,local_10,&DAT_016b096c,local_38,
                 &DAT_016b096c,local_18);
  }
  FUN_00414560(&local_38,2);
  FUN_00414560(&local_20,3);
  return param_2;
}

