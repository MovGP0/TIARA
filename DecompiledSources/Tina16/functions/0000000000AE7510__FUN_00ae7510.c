/* Ghidra address: 00ae7510 */
/* Ghidra symbol: FUN_00ae7510 */


void FUN_00ae7510(longlong param_1,int param_2,char param_3)

{
  undefined2 uVar1;
  int iVar2;
  int local_res10 [6];
  undefined2 local_2e [15];
  
  local_res10[0] = param_2;
  if ((param_2 - 9U < 2) || (param_2 == 0xd)) {
    FUN_00414ad0(*(undefined8 *)(param_1 + 0x78),&DAT_00ae75e4);
  }
  else if (param_2 < 0x20) {
    FUN_00414ad0(*(undefined8 *)(param_1 + 0x78),&DAT_00ae75f4);
  }
  else if (((param_2 < 0x7f) || (0x9f < param_2)) || (param_3 != '\0')) {
    local_res10[0]._0_2_ = (undefined2)param_2;
    uVar1 = (undefined2)local_res10[0];
    FUN_00416780(*(undefined8 *)(param_1 + 0x78),uVar1);
  }
  else {
    iVar2 = thunk_FUN_04139c29(*(undefined4 *)(*(longlong *)(param_1 + 0x70) + 0x90),0,local_res10,1
                               ,local_2e,0x16);
    if (iVar2 == 0) {
      local_2e[0] = (undefined2)local_res10[0];
    }
    FUN_00414740(*(undefined8 *)(param_1 + 0x78),local_2e,1);
  }
  return;
}

