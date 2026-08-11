/* Ghidra address: 01b0ace0 */
/* Ghidra symbol: FUN_01b0ace0 */


undefined8
FUN_01b0ace0(longlong param_1,undefined8 param_2,double param_3,undefined1 param_4,
            undefined1 param_5)

{
  double dVar1;
  undefined1 auStack_78 [32];
  wchar_t *local_58;
  undefined8 local_50;
  undefined *local_48;
  wchar_t *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  int local_18;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_78;
  local_38 = 0;
  local_28 = 0;
  local_30 = 0;
  local_10 = 0;
  local_58._0_1_ = 1;
  FUN_00b8fd60(&local_28,param_3,param_4,param_5);
  dVar1 = (double)FUN_00b90620(0x3eb0c6f7a0b5ed8d,*(undefined8 *)(param_1 + 0xf20));
  local_58 = (wchar_t *)CONCAT71(local_58._1_7_,1);
  FUN_00b8fd60(&local_30,(param_3 / dVar1) * 100.0,2,1);
  local_58 = L"  /Run-Time = ";
  local_50 = local_30;
  local_48 = &DAT_01b0af34;
  local_40 = L"  /Iterations = ";
  FUN_00416cd0(&local_10,6,local_28,&DAT_01b0aef8);
  local_14 = *(int *)(param_1 + 0x1208);
  local_18 = local_14;
  if (local_14 < 1) {
    local_18 = 1;
  }
  local_58 = (wchar_t *)CONCAT71(local_58._1_7_,1);
  FUN_00b8fd60(&local_38,(param_3 / (double)local_18) * 1000.0,param_4,1);
  local_58 = L"ms";
  FUN_00416cd0(param_2,3,local_10,local_38);
  FUN_00414480(&local_10);
  FUN_00414560(&local_38,3);
  return param_2;
}

