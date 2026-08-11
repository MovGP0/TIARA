/* Ghidra address: 01625f30 */
/* Ghidra symbol: FUN_01625f30 */


undefined8 FUN_01625f30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined8 local_20 [2];
  short *local_10;
  
  local_20[0] = 0;
  local_10 = (short *)0x0;
  iVar1 = FUN_004170c0(L"bvams_",*(undefined8 *)(param_2 + 0x640),1);
  if (iVar1 < 1) {
    FUN_00414b50(&local_10,*(undefined8 *)(param_2 + 0x638));
  }
  else {
    FUN_00414b50(&local_10,*(undefined8 *)(param_2 + 0x640));
  }
  FUN_00450070(local_20,local_10,&DAT_01626070,&DAT_01626080,1);
  FUN_00414b50(&local_10,local_20[0]);
  if (*local_10 == 0x5f) {
    FUN_00416e20(&local_10,1,1);
  }
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return param_1;
}

