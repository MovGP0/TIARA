/* Ghidra address: 006aa950 */
/* Ghidra symbol: FUN_006aa950 */


void FUN_006aa950(longlong *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  undefined1 *local_40;
  undefined4 local_34;
  longlong local_30;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_40 = auStack_78;
  local_50 = 0;
  local_48 = 0;
  local_20[0] = 0;
  local_28 = (**(code **)(*param_1 + 0x148))(param_1);
  if (local_28 != 0) {
    lVar1 = (**(code **)(local_28 + 0x78))(local_28,1,param_1);
    param_1[0x2e] = lVar1;
    local_20[0] = 0;
    FUN_00410ae0(local_28,local_20);
    FUN_00410ae0(local_28,&local_48);
    local_30 = local_48;
    local_34 = 0;
    if (local_48 != 0) {
      local_34 = *(undefined4 *)(local_48 + -4);
    }
    FUN_00416dc0(&local_50,local_20[0],2,local_34);
    (**(code **)(*(longlong *)param_1[0x2e] + 0x50))((longlong *)param_1[0x2e],local_50);
    FUN_00414480(local_20);
    FUN_004d4540(param_1[0x2e],1);
    FUN_004d26c0(param_1[0x2e],param_1);
  }
  FUN_00414560(&local_50,2);
  return;
}

