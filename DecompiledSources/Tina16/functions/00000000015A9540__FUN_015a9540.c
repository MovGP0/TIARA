/* Ghidra address: 015a9540 */
/* Ghidra symbol: FUN_015a9540 */


void FUN_015a9540(longlong *param_1,longlong *param_2,longlong *param_3,int param_4,char param_5)

{
  undefined1 *puVar1;
  longlong *local_res18;
  int local_res20;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined8 local_20 [2];
  
  local_40 = auStack_68;
  if (param_2 != (longlong *)0x0) {
    local_res18 = param_3;
    if (param_3 == (longlong *)0x0) {
      local_res18 = param_2;
    }
    local_res20 = param_4;
    puVar1 = auStack_68;
    if (param_4 < 0) {
      local_res20 = (**(code **)*param_2)(param_2);
      FUN_004b6dc0(param_2,0);
      puVar1 = local_40;
    }
    local_40 = puVar1;
    (**(code **)*param_1)(param_1,param_5);
    local_20[0] = 0;
    local_30 = local_res20;
    FUN_015ab5e0(param_1,0,local_res20);
    local_20[0] = FUN_00409570(0x1000);
    local_28 = FUN_004b6da0(local_res18);
    local_24 = FUN_004b6da0(param_2);
    if (param_5 == '\x03') {
      while (0 < local_res20) {
        local_2c = local_res20;
        if (0x1000 < local_res20) {
          local_2c = 0x1000;
        }
        local_2c = (**(code **)(*param_2 + 0x18))(param_2,local_20[0],local_2c);
        if (local_2c < 1) break;
        (**(code **)(*param_1 + 0x10))(param_1,local_20[0],local_2c,3);
        local_res20 = local_res20 - local_2c;
        FUN_015ab5e0(param_1,local_30 - local_res20,local_30);
      }
    }
    else {
      while (0 < local_res20) {
        FUN_004b6dc0(param_2,(longlong)local_24);
        local_2c = local_res20;
        if (0x1000 < local_res20) {
          local_2c = 0x1000;
        }
        local_2c = (**(code **)(*param_2 + 0x18))(param_2,local_20[0],local_2c);
        local_24 = FUN_004b6da0(param_2);
        if (local_2c < 1) break;
        (**(code **)(*param_1 + 0x10))(param_1,local_20[0],local_2c,param_5);
        FUN_004b6dc0(local_res18,(longlong)local_28);
        (**(code **)(*local_res18 + 0x20))(local_res18,local_20[0],local_2c);
        local_28 = FUN_004b6da0(local_res18);
        local_res20 = local_res20 - local_2c;
        FUN_015ab5e0(param_1,local_30 - local_res20,local_30);
      }
    }
    FUN_015ab5e0(param_1,0,0);
    FUN_00409620(local_20,0);
    (**(code **)(*param_1 + 8))(param_1,param_5);
  }
  return;
}

