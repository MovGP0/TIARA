/* Ghidra address: 015b4200 */
/* Ghidra symbol: FUN_015b4200 */


undefined1 FUN_015b4200(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool local_29;
  undefined4 local_1c;
  longlong local_18;
  bool local_9;
  
  local_18 = 0;
  uVar2 = FUN_015abdc0();
  FUN_015b4110(param_1,&local_18,uVar2,0x20,0,1);
  if (*PTR_DAT_020019b0 == '\0') {
    local_29 = false;
  }
  else {
    uVar2 = (**(code **)(param_1 + 0x38))(param_1);
    local_1c = 0;
    if (local_18 != 0) {
      local_1c = *(undefined4 *)(local_18 + -4);
    }
    uVar3 = FUN_00415ab0(local_18);
    iVar1 = FUN_015ab4e0(uVar3,uVar2,local_1c);
    local_29 = iVar1 == 0;
  }
  local_9 = local_29;
  FUN_004144d0(&local_18);
  return local_9;
}

