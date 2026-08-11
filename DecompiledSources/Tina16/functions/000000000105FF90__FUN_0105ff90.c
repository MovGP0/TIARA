/* Ghidra address: 0105ff90 */
/* Ghidra symbol: FUN_0105ff90 */


undefined8 FUN_0105ff90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 local_res18 [2];
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_0043e130(&local_18,local_res18[0]);
  FUN_00441a10(&local_10,local_18);
  FUN_00414b50(local_res18,local_10);
  iVar1 = FUN_00416db0(local_res18[0],L".CPP");
  if (iVar1 == 0) {
    FUN_00416ba0(param_2,*(undefined8 *)(param_1 + 0x80),L"g++.exe");
  }
  else {
    FUN_00416ba0(param_2,*(undefined8 *)(param_1 + 0x80),L"gcc.exe");
  }
  FUN_00414560(&local_18,2);
  FUN_00414480(local_res18);
  return param_2;
}

