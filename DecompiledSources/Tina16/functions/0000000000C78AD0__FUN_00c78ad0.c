/* Ghidra address: 00c78ad0 */
/* Ghidra symbol: FUN_00c78ad0 */


void FUN_00c78ad0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_00414ad0(param_1 + 0x45,local_res10[0]);
  lVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if (lVar1 != 0) {
    local_10 = FUN_00442b60(0x200);
    FUN_00442620(local_10,local_res10[0]);
    thunk_FUN_041b2403(param_1[0x53],0xc,0,local_10);
    FUN_00442c30(local_10);
  }
  FUN_00414480(local_res10);
  return;
}

