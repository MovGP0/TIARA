/* Ghidra address: 008e6910 */
/* Ghidra symbol: FUN_008e6910 */


undefined4 FUN_008e6910(undefined8 *param_1)

{
  longlong lVar1;
  undefined4 local_24;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = (*(code *)*param_1)(param_1);
  if (lVar1 == 0) {
    (*(code *)param_1[0xf])(param_1,local_20);
    if (local_20[0] == 0) {
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
  }
  else {
    lVar1 = (*(code *)*param_1)(param_1);
    local_24 = (**(code **)(lVar1 + 0x10))(lVar1);
  }
  FUN_00414480(local_20);
  return local_24;
}

