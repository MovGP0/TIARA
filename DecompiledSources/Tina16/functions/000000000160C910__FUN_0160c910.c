/* Ghidra address: 0160c910 */
/* Ghidra symbol: FUN_0160c910 */


undefined8 FUN_0160c910(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_30 = 0;
  local_28 = 0;
  local_20[0] = 0;
  FUN_00414480(param_2);
  if (**(int **)(param_1 + 0x8c8) == 1) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(local_20,PTR_PTR_02004048);
    FUN_00b8e650(uVar1,param_2,L"HDLStrings.Msg_InvNumFormat",local_20[0]);
  }
  else if (**(int **)(param_1 + 0x8c8) == 2) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02003548);
    FUN_00b8e650(uVar1,param_2,L"HDLStrings.Msg_WrongNumberOfParam",local_28);
  }
  else if (**(int **)(param_1 + 0x8c8) == 3) {
    uVar1 = FUN_00b89270();
    FUN_0041ddd0(&local_30,PTR_PTR_02002348);
    FUN_00b8e650(uVar1,param_2,L"HDLStrings.Msg_MemoryExceed",local_30);
  }
  else if (**(int **)(param_1 + 0x8c8) == 4) {
    FUN_00414ad0(param_2,L"Image not found");
  }
  FUN_00414560(&local_30,3);
  return param_2;
}

