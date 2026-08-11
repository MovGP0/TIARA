/* Ghidra address: 0060b650 */
/* Ghidra symbol: FUN_0060b650 */


void FUN_0060b650(longlong *param_1,longlong param_2)

{
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined1 *local_a0;
  longlong local_90;
  undefined1 local_88 [104];
  longlong local_20;
  
  local_a0 = auStack_d8;
  local_90 = param_1[0xc];
  if (*(longlong *)(local_90 + 0x10) != param_2) {
    FUN_0060a440(param_1);
    FUN_0040d200(local_88,0x68,0);
    if (param_2 != 0) {
      thunk_FUN_03d2c01a(param_2,0x68,local_88);
    }
    if (*(int *)(local_90 + 8) == 1) {
      local_20 = *(longlong *)(local_90 + 0x20);
      *(undefined8 *)(local_90 + 0x20) = 0;
    }
    else if (*(longlong *)(local_90 + 0x20) == DAT_02011fa0) {
      local_20 = DAT_02011fa0;
    }
    else {
      local_20 = FUN_00608880(*(longlong *)(local_90 + 0x20));
    }
    local_b8 = 0;
    local_b0 = 0;
    FUN_0060ab20(param_1,param_2,local_20,local_88);
    (**(code **)(*param_1 + 0x20))(param_1,param_1);
  }
  return;
}

