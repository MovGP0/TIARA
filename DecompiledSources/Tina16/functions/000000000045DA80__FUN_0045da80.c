/* Ghidra address: 0045da80 */
/* Ghidra symbol: FUN_0045da80 */


undefined4 FUN_0045da80(undefined8 param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  *param_4 = 0;
  if (param_2 == 0x400) {
    FUN_00414480(&local_20);
    local_10 = 0;
    local_18 = 0;
    lVar1 = FUN_0040c840(param_1);
    if (lVar1 == 0) {
      FUN_00414480(&local_10);
      FUN_0044a300(&local_10,param_1,PTR_DAT_02004830);
      FUN_00414b50(&local_20,local_10);
      FUN_00414480(&local_10);
    }
    else {
      FUN_00414480(&local_18);
      FUN_0044a350(&local_18,param_1,PTR_DAT_02004830);
      FUN_00414b50(&local_20,local_18);
      FUN_00414480(&local_18);
    }
    FUN_00414480(&local_18);
    FUN_00414480(&local_10);
    FUN_004168e0(param_4,local_20);
    FUN_00414480(&local_20);
    local_24 = 0;
  }
  else {
    local_24 = 0x80004001;
    local_30 = auStack_58;
  }
  FUN_00414480(&local_20);
  return local_24;
}

