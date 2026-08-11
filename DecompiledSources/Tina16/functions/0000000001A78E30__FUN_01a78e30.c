/* Ghidra address: 01a78e30 */
/* Ghidra symbol: FUN_01a78e30 */


void FUN_01a78e30(longlong param_1,undefined8 param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  FUN_01aee720(&local_10,0x406,*(undefined4 *)(param_1 + 0x6b8),L"SeparateCurvesMnu");
  FUN_01aed550(*(undefined8 *)PTR_DAT_020041a8,local_10);
  FUN_01ae6250(*(undefined8 *)(param_1 + 0x798),0,0);
  FUN_01a77f90(param_1,param_2);
  FUN_01a7fc90(param_1);
  FUN_00414480(&local_10);
  return;
}

