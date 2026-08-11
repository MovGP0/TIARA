/* Ghidra address: 01872f50 */
/* Ghidra symbol: FUN_01872f50 */


undefined8 FUN_01872f50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = 0;
  local_20 = 0;
  local_10 = 0;
  FUN_00414b50(&local_20,param_2);
  FUN_01873280(param_1,&local_18,&local_20);
  FUN_01873240(param_1,0);
  local_24 = FUN_01873050(param_1,local_18);
  if (local_24 < 0) {
    FUN_01873010(0,local_30);
  }
  else {
    local_10 = FUN_01872f10(param_1,local_24);
    FUN_018733b0(param_1,0);
  }
  FUN_00414560(&local_20,2);
  return local_10;
}

