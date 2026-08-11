/* Ghidra address: 004d20c0 */
/* Ghidra symbol: FUN_004d20c0 */


void FUN_004d20c0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_res8;
  undefined4 local_res10;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined1 local_28 [8];
  undefined4 local_20 [2];
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  FUN_00417580(local_28,&DAT_0043cdf0);
  iVar1 = thunk_FUN_0418098b();
  if (iVar1 != 0) {
    local_20[0] = 0x1000;
    local_30 = FUN_0045c1d0(local_28,local_res8);
    local_18 = FUN_0041e0c0(&local_30);
    local_10 = local_res10;
    local_c = 0;
    thunk_FUN_0419a80b(0x406d1388,0,6,local_20);
  }
  FUN_00417740(local_28,&DAT_0043cdf0);
  FUN_00414480(&local_res8);
  return;
}

