/* Ghidra address: 01627000 */
/* Ghidra symbol: FUN_01627000 */


void FUN_01627000(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined1 param_5)

{
  undefined8 local_48;
  undefined8 local_40 [4];
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_48 = 0;
  local_40[0] = 0;
  local_10 = 0;
  local_18 = 0;
  local_20 = 0;
  FUN_01618e70(local_40,*(undefined8 *)(param_1 + 0x10),param_5);
  FUN_00414ad0(param_3,local_40[0]);
  FUN_01618e70(&local_48,*(undefined8 *)(param_1 + 0x18),param_5);
  FUN_00414ad0(param_4,local_48);
  FUN_00414560(&local_48,2);
  FUN_00414560(&local_20,3);
  return;
}

