/* Ghidra address: 017eb410 */
/* Ghidra symbol: FUN_017eb410 */


void FUN_017eb410(longlong param_1)

{
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_017eb3d0(param_1,*(undefined1 *)(param_1 + 0x770));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x710),*(undefined8 *)(param_1 + 0x840));
  FUN_00b90440(*(undefined8 *)(param_1 + 0x718),*(undefined8 *)(param_1 + 0x848));
  FUN_004169a0(&local_10,param_1 + 0x771);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6d8),local_10);
  FUN_004169a0(&local_18,param_1 + 0x79a);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6e0),local_18);
  FUN_004169a0(&local_20,param_1 + 0x7c3);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f8),local_20);
  FUN_004169a0(&local_28,param_1 + 0x7ec);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x700),local_28);
  FUN_00f04fa0(*(undefined8 *)(param_1 + 0x720),*(undefined4 *)(param_1 + 0x850));
  FUN_0064cf60(param_1,0x139f);
  FUN_00414560(&local_28,4);
  return;
}

