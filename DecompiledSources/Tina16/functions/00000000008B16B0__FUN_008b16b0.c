/* Ghidra address: 008b16b0 */
/* Ghidra symbol: FUN_008b16b0 */


undefined8 FUN_008b16b0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  undefined8 uVar1;
  longlong local_res20;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = 0;
  local_10 = (**(code **)(*param_1 + 0x20))(param_1);
  if (0 < param_4) {
    FUN_00419260(&local_18,&DAT_0086e978,1,0x800);
    local_res20 = param_4;
    do {
      uVar1 = FUN_008764e0(local_res20,0x800);
      local_20 = FUN_00878880(param_3,&local_18,uVar1,0);
      if (local_20 < 1) break;
      if (local_20 < 0x800) {
        FUN_00419260(&local_18,&DAT_0086e978,1,local_20);
        FUN_008b1890(param_1,local_10,local_18);
        break;
      }
      FUN_008b1890(param_1,local_10,local_18);
      local_res20 = local_res20 - local_20;
    } while (local_res20 != 0);
  }
  FUN_008b1680(param_1,param_2,local_10);
  FUN_00419430(&local_18,&DAT_0086e978);
  return param_2;
}

