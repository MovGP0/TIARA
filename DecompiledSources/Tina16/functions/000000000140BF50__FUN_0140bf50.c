/* Ghidra address: 0140bf50 */
/* Ghidra symbol: FUN_0140bf50 */


undefined4 FUN_0140bf50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_28 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20[0] = 0;
  FUN_0064dd90(param_2,local_20);
  cVar1 = FUN_014089a0(local_20[0],param_4,*(undefined4 *)(param_1 + 0x72c));
  if (cVar1 == '\0') {
    FUN_0064dd90(param_3,&local_30);
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_40,PTR_PTR_02004000);
    FUN_00b8e650(uVar2,&local_38,L"HDLStrings.Msg_FC_InvValue",local_40);
    FUN_00416cd0(&local_28,3,local_30,&DAT_0140c0e4,local_38);
    FUN_0140bed0(param_1,local_28);
  }
  else {
    FUN_0064dd90(param_2,&local_48);
    local_4c = FUN_01408880(local_48,param_4);
  }
  FUN_00414480(&local_48);
  FUN_00414560(&local_40,2);
  FUN_00414560(&local_30,3);
  return local_4c;
}

