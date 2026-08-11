/* Ghidra address: 01a3c6f0 */
/* Ghidra symbol: FUN_01a3c6f0 */


undefined8 FUN_01a3c6f0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_68;
  local_10 = 0;
  FUN_00414480(&local_10);
  local_18 = FUN_00448ed0();
  FUN_0044a3a0(&local_10,L"yyyy-mm-dd-hh-nn",local_18,PTR_DAT_02004830);
  local_40 = local_10;
  local_38 = 0x11;
  local_28 = 0x11;
  local_30 = param_2;
  FUN_00442f70(param_1,L"[%s] %s",&local_40,1);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

