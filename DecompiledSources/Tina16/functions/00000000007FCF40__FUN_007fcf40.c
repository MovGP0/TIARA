/* Ghidra address: 007fcf40 */
/* Ghidra symbol: FUN_007fcf40 */


void FUN_007fcf40(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_54 [2];
  undefined4 local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*(char *)(param_1 + 0x4d2) == '\x02') {
    local_54[0] = 0x2c;
    uVar1 = FUN_0065b870(param_1);
    iVar2 = thunk_FUN_03f78330(uVar1,local_54);
    if (iVar2 != 0) {
      uVar1 = FUN_0065b870(param_1);
      iVar2 = thunk_FUN_0419e3da(uVar1);
      if (iVar2 == 0) {
        local_4c = 0;
      }
      uVar3 = FUN_004230a0(&local_38);
      local_30 = thunk_FUN_03f3ed25(uVar3,param_2,param_3);
      local_30 = local_38 + local_30;
      uVar3 = FUN_004230c0(&local_38);
      local_2c = thunk_FUN_03f3ed25(uVar3,param_2,param_3);
      local_2c = local_34 + local_2c;
      uVar1 = FUN_0065b870(param_1);
      thunk_FUN_03c9467d(uVar1,local_54);
    }
  }
  return;
}

