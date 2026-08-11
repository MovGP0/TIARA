/* Ghidra address: 00a41790 */
/* Ghidra symbol: FUN_00a41790 */


undefined8 FUN_00a41790(undefined8 param_1,int param_2,undefined4 param_3,char param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int local_res10;
  undefined1 auStack_878 [40];
  undefined1 *local_850;
  undefined1 *local_848;
  undefined2 *local_840;
  undefined1 *local_838;
  int local_82c;
  undefined1 local_828 [1024];
  undefined2 local_428;
  undefined2 local_426;
  undefined1 local_424 [980];
  undefined1 local_50 [44];
  int local_24;
  undefined8 local_20;
  undefined8 local_10;
  
  local_850 = auStack_878;
  local_428 = 0x300;
  local_res10._0_2_ = (undefined2)param_2;
  local_426 = (undefined2)local_res10;
  if (param_4 == '\0') {
    local_82c = 0;
    local_res10 = param_2;
    local_850 = auStack_878;
  }
  else {
    local_20 = thunk_FUN_041715dd(0xf);
    thunk_FUN_041a3f2d(local_20,0,10,local_424);
    thunk_FUN_041a3f2d(local_20,10,10,local_50);
    local_res10 = 0xec;
    local_82c = 10;
    local_426 = 0x100;
  }
  local_10 = FUN_00a411c0(&DAT_00a40d90,1,local_res10,param_3);
  FUN_00a41330(local_10,param_1);
  FUN_00a412f0(local_10,local_828);
  FUN_00410f20(local_10);
  local_24 = 0;
  if (-1 < local_res10 + -1) {
    local_848 = local_828 + 2;
    do {
      lVar1 = (longlong)(local_24 + local_82c) * 4;
      local_838 = local_424 + lVar1;
      *local_838 = *local_848;
      local_424[lVar1 + 1] = local_848[-1];
      local_424[lVar1 + 2] = local_848[-2];
      local_424[lVar1 + 3] = local_848[1];
      local_24 = local_24 + 1;
      local_848 = local_848 + 4;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
  }
  local_840 = &local_428;
  uVar2 = thunk_FUN_04123694(local_840);
  return uVar2;
}

