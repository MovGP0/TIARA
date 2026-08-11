/* Ghidra address: 009d31d0 */
/* Ghidra symbol: FUN_009d31d0 */


void FUN_009d31d0(undefined8 param_1)

{
  undefined1 auStack_d8 [40];
  undefined1 *local_b0;
  undefined4 local_94;
  longlong local_90;
  undefined4 local_24;
  undefined8 local_20 [2];
  
  local_b0 = auStack_d8;
  (**(code **)*DAT_02012ad8)(DAT_02012ad8);
  local_90 = DAT_02012ad0 + 8;
  local_20[0] = param_1;
  local_94 = FUN_005974f0(local_90,local_20);
  local_24 = local_94;
  (**(code **)(*DAT_02012ad8 + 8))(DAT_02012ad8);
  return;
}

