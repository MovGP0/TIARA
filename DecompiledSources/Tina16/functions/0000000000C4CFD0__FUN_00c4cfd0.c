/* Ghidra address: 00c4cfd0 */
/* Ghidra symbol: FUN_00c4cfd0 */


void FUN_00c4cfd0(longlong param_1,undefined8 param_2)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_38 = 0;
  local_20[0] = 0;
  local_10 = 0;
  FUN_004c8510(param_2,1);
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x88));
  local_30 = local_10;
  local_28 = 0x11;
  FUN_00442f70(local_20,L"Service %s",&local_30,0);
  FUN_004c81b0(param_2,local_20[0]);
  FUN_00414b50(&local_10,*(undefined8 *)(param_1 + 0x90));
  local_30 = local_10;
  local_28 = 0x11;
  FUN_00442f70(&local_38,L"Topic %s",&local_30,0);
  FUN_004c81b0(param_2,local_38);
  FUN_004c8510(param_2,0);
  FUN_00414480(&local_38);
  FUN_00414480(local_20);
  FUN_00414480(&local_10);
  return;
}

