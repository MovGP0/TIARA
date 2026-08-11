/* Ghidra address: 00cc5df0 */
/* Ghidra symbol: FUN_00cc5df0 */


undefined8 FUN_00cc5df0(longlong param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_48;
  wchar_t *local_40;
  wchar_t *local_38;
  undefined *local_30;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_48 = 0;
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    FUN_0041ddd0(local_20,PTR_PTR_020039e8);
    uVar2 = FUN_0086dfd0(&PTR_FUN_00cc4a20,1,local_20[0]);
    FUN_004134c0(uVar2);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_0041ddd0(&local_28,PTR_PTR_020028b0);
    uVar2 = FUN_0086dfd0(&PTR_FUN_00cc4a20,1,local_28);
    FUN_004134c0(uVar2);
  }
  FUN_00416ba0(&local_10,*(undefined8 *)(param_1 + 0x10),&DAT_00cc6190);
  if ((*(longlong *)(param_1 + 0x40) != 0) && ((param_3 & 1) != 0)) {
    FUN_00416ad0(&local_10,*(undefined8 *)(param_1 + 0x40));
    if (*(longlong *)(param_1 + 0x48) != 0) {
      FUN_00416cd0(&local_10,3,local_10,&DAT_00cc61a4,*(undefined8 *)(param_1 + 0x48));
    }
    FUN_00416ad0(&local_10,&DAT_00cc61b4);
  }
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_00416cd0(&local_10,4,local_10,&DAT_00cc61c4,*(undefined8 *)(param_1 + 0x30),&DAT_00cc61d4);
  }
  else {
    FUN_00416ad0(&local_10,*(undefined8 *)(param_1 + 0x30));
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_40 = L"HTTP";
    local_38 = L"HTTPS";
    local_30 = &DAT_00cc6214;
    iVar1 = FUN_00874bb0(*(undefined8 *)(param_1 + 0x10),&local_40,2,0);
    if (iVar1 == 0) {
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x20),&DAT_00cc6228);
      if (iVar1 != 0) {
        FUN_00416cd0(&local_10,3,local_10,&DAT_00cc61a4,*(undefined8 *)(param_1 + 0x20));
      }
    }
    else if (iVar1 == 1) {
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x20),&DAT_00cc623c);
      if (iVar1 != 0) {
        FUN_00416cd0(&local_10,3,local_10,&DAT_00cc61a4,*(undefined8 *)(param_1 + 0x20));
      }
    }
    else if (iVar1 == 2) {
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x20),&DAT_00cc6250);
      if (iVar1 != 0) {
        FUN_00416cd0(&local_10,3,local_10,&DAT_00cc61a4,*(undefined8 *)(param_1 + 0x20));
      }
    }
    else {
      FUN_00416cd0(&local_10,3,local_10,&DAT_00cc61a4,*(undefined8 *)(param_1 + 0x20));
    }
  }
  FUN_00cc6270(param_1,&local_48);
  FUN_00416ad0(&local_10,local_48);
  if ((*(longlong *)(param_1 + 0x38) != 0) && ((param_3 & 2) != 0)) {
    FUN_00416cd0(&local_10,3,local_10,&LAB_00cc6264,*(undefined8 *)(param_1 + 0x38));
  }
  FUN_00414ad0(param_2,local_10);
  FUN_00414480(&local_48);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return param_2;
}

