/* Ghidra address: 013b24b0 */
/* Ghidra symbol: FUN_013b24b0 */


void FUN_013b24b0(undefined8 param_1)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20 [2];
  longlong *local_10;
  
  local_30 = auStack_58;
  local_20[0] = 0;
  local_10 = (longlong *)FUN_007fc180(&PTR_FUN_00f40e88,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_013ad290(param_1,local_10,0);
  (**(code **)(*local_10 + 0x2d0))(local_10);
  FUN_00410f20(local_10);
  FUN_00414480(local_20);
  return;
}

