/* Ghidra address: 00d0d390 */
/* Ghidra symbol: FUN_00d0d390 */


undefined8
FUN_00d0d390(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4,undefined8 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int local_res20;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_20 = (longlong *)FUN_00cd6090(param_1,1,param_5);
  local_28 = FUN_00409570(0x1000);
  (**(code **)(*local_20 + 0x40))(local_20);
  local_res20 = param_4;
  if (param_4 < 0) {
    FUN_004b6dc0(param_3,0);
    local_res20 = (**(code **)*param_3)(param_3);
  }
  local_30 = local_res20;
  FUN_00cd7390(local_20,0,local_res20);
  do {
    local_2c = local_res20;
    if (0x1000 < local_res20) {
      local_2c = 0x1000;
    }
    local_2c = (**(code **)(*param_3 + 0x18))(param_3,local_28,local_2c);
    if (local_2c < 1) break;
    (**(code **)(*local_20 + 0x48))(local_20,local_28,local_2c);
    local_res20 = local_res20 - local_2c;
    FUN_00cd7390(local_20,local_30 - local_res20,local_30);
  } while (0 < local_2c);
  (**(code **)(*local_20 + 0x50))(local_20);
  uVar2 = (**(code **)(*local_20 + 0x58))(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(*local_20);
  FUN_00cd7480(param_2,uVar2,uVar1,param_6);
  FUN_00cd7390(local_20,0,0);
  FUN_00410f20(local_20);
  FUN_00409620(&local_28,0);
  return param_2;
}

