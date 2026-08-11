/* Ghidra address: 01053000 */
/* Ghidra symbol: FUN_01053000 */


undefined1 FUN_01053000(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  local_39 = 1;
  cVar1 = FUN_00f629a0(*(undefined8 *)(param_1 + 0x980));
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 0x8e8) == '\0') {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(&local_38,PTR_PTR_02004850);
      FUN_00b8e650(uVar3,local_20,L"HDLStrings.Msg_FC_IsModified2",local_38);
    }
    else {
      uVar3 = FUN_00b89270();
      FUN_0041ddd0(local_30,PTR_PTR_02005728);
      FUN_00b8e650(uVar3,local_20,L"HDLStrings.Msg_FC_IsModified",local_30[0]);
    }
    iVar2 = FUN_0072d440(local_20[0],3,0xb,0);
    if (iVar2 == 6) {
      if (*(char *)(param_1 + 0x8e8) == '\0') {
        FUN_0104fb30(param_1,param_2);
      }
      else {
        FUN_0104f2e0(param_1,param_2);
      }
    }
    else if (iVar2 == 2) {
      local_39 = 0;
    }
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return local_39;
}

