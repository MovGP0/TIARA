/* Ghidra address: 0108b330 */
/* Ghidra symbol: FUN_0108b330 */


void FUN_0108b330(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_40 = 0;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  uVar2 = FUN_00b89270();
  FUN_0041ddd0(&local_48,PTR_PTR_02004e30);
  FUN_00b8e650(uVar2,&local_40,L"HDLStrings.Msg_SelectDir",local_48);
  FUN_004168e0(&local_50,*(undefined8 *)(param_1 + 0xb18));
  cVar1 = FUN_00b96980(local_40,local_50,local_20,8,0);
  if (cVar1 != '\0') {
    FUN_010b1c70(*(undefined8 *)(param_1 + 0xac8),local_20[0]);
  }
  FUN_00414520(&local_50);
  FUN_00414560(&local_48,6);
  return;
}

