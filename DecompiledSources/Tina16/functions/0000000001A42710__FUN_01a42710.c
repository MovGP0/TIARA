/* Ghidra address: 01a42710 */
/* Ghidra symbol: FUN_01a42710 */


undefined8 FUN_01a42710(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 local_28;
  undefined1 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01a54070(param_1,*(undefined8 *)(param_1 + 0x2960),1);
  FUN_00414b50(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x2960) + 8));
  if (param_3 == 0) {
    FUN_00414b50(&local_18,*(undefined8 *)(param_1 + 0x2bb8));
  }
  else if (param_3 == 1) {
    FUN_00414b50(&local_18,local_10);
  }
  else {
    FUN_00414b50(&local_18,L"none");
  }
  local_28 = local_18;
  local_20 = 0x11;
  FUN_00442f70(param_2,L"<%s>",&local_28,0);
  FUN_00414560(&local_18,2);
  return param_2;
}

