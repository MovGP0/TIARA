/* Ghidra address: 01b1f4d0 */
/* Ghidra symbol: FUN_01b1f4d0 */


undefined8 FUN_01b1f4d0(undefined8 param_1)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined2 local_12;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_10 = 0;
  local_12 = *(undefined2 *)(PTR_DAT_02004830 + 0x17a);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = 0x2e;
  FUN_01b1f360(&local_38);
  local_20 = local_38;
  FUN_00414480(&local_10);
  local_28 = FUN_00448650(local_20,PTR_DAT_02004830);
  FUN_0044a3a0(&local_10,L"dddddd, tt",local_28,PTR_DAT_02004830);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  *(undefined2 *)(PTR_DAT_02004830 + 0x17a) = local_12;
  FUN_00414480(&local_38);
  FUN_00414480(&local_10);
  return param_1;
}

