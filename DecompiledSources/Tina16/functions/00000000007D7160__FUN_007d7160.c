/* Ghidra address: 007d7160 */
/* Ghidra symbol: FUN_007d7160 */


void FUN_007d7160(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 *local_30;
  int local_20;
  int local_1c;
  
  local_30 = auStack_78;
  local_40 = 0;
  local_38 = 0;
  FUN_00614880(param_1);
  iVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (iVar1 < param_2) {
    FUN_0041ddd0(&local_38,PTR_PTR_020025e8);
    uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_38);
    FUN_004134c0(uVar2);
  }
  if (param_5 == -1) {
    local_20 = FUN_007d59d0(param_1,param_3,param_4);
  }
  else {
    local_20 = FUN_007d5ad0(param_1,param_3,param_5);
  }
  if (local_20 == -1) {
    FUN_0041ddd0(&local_40,PTR_PTR_02004170);
    uVar2 = FUN_0044d490(&PTR_FUN_00472870,1,local_40);
    FUN_004134c0(uVar2);
  }
  local_1c = (**(code **)(*param_1 + 0x90))(param_1);
  local_1c = local_1c + -2;
  if (param_2 <= local_1c) {
    iVar1 = (param_2 - local_1c) + -1;
    do {
      uVar2 = FUN_007d56e0(param_1);
      uVar3 = FUN_007d56e0(param_1);
      local_58 = 1;
      thunk_FUN_041cfc68(uVar2,local_1c,uVar3,local_1c + 1);
      local_1c = local_1c + -1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0);
  }
  FUN_006148c0(param_1);
  FUN_00414560(&local_40,2);
  return;
}

